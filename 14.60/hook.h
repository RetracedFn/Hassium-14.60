#pragma once

namespace Hooking {
	int Patch()
	{
		return 0;
	}
	bool Patch2()
	{
		return true;
	}
	char Patch3()
	{
		return 1;
	}
	void Patch4()
	{
		return;
	}

	void (*TickFlushOriginal)(UNetDriver* NetDriver, float DeltaSeconds);
	void TickFlushHook(UNetDriver* NetDriver, float DeltaSeconds)
	{
		if (NetDriver && NetDriver->ClientConnections.Num() > 0 && NetDriver->ClientConnections[0]->InternalAck)
		{
			void** ReplicationDriverVFT = *(void***)GetWorld()->NetDriver->ReplicationDriver;
			Listening::ServerReplicateActors = decltype(Listening::ServerReplicateActors)(ReplicationDriverVFT[0x5E]);
			Listening::ServerReplicateActors(NetDriver->ReplicationDriver);
		}
		return TickFlushOriginal(NetDriver, DeltaSeconds);
	}

	bool(*ReadyToStartMatchOriginal)(AFortGameModeAthena* GameMode);
	bool ReadyToStartMatchHook(AFortGameModeAthena* GameMode)
	{
		static bool bReadyToStartMatchHook = false;
		if (bReadyToStartMatchHook)
			return false;
		std::cout << "ReadyToStartMatchCalled";
		bReadyToStartMatchHook = true;
		static bool bInit = false;
		if (!bInit)
		{
			bInit = true;
			UFortPlaylistAthena* Playlist = UObject::FindObject<UFortPlaylistAthena>("FortPlaylistAthena /Game/Athena/Playlists/Playlist_DefaultSolo.Playlist_DefaultSolo");
			GetGameState()->CurrentPlaylistInfo.BasePlaylist = Playlist;
			GetGameState()->CurrentPlaylistInfo.OverridePlaylist = Playlist;
			GetGameState()->CurrentPlaylistInfo.PlaylistReplicationKey++;
			GetGameState()->CurrentPlaylistInfo.MarkArrayDirty();
			GetGameState()->OnRep_CurrentPlaylistInfo();

			static bool Listening = false;
			if (!Listening)
			{
				Listening::Listen();
				GetGameMode()->GameSession = SpawnActor<AFortGameSession>({}, nullptr);
				GetGameMode()->GameSession->MaxPlayers = 100;
				GetGameState()->GameSessionId = L"ID";
				GetGameState()->OnRep_GameSessionID();
				GetGameMode()->StartMatch();
				GetGameMode()->StartPlay();
				EAthenaGamePhase Gamephase = GetGameState()->GamePhase;
				GetGameState()->GamePhase = EAthenaGamePhase::Warmup;
				GetGameState()->OnRep_GamePhase(Gamephase);
				GetGameMode()->WarmupRequiredPlayerCount = 2;
				GetGameMode()->WarmupEarlyCountdownDuration = 150.0f;
				GetGameState()->WarmupCountdownStartTime = 150.0f;
				GetGameState()->WarmupCountdownEndTime = 150.0f;
				Listening = true;

			}

		}
		return ReadyToStartMatchOriginal(GameMode);
	}

	APawn* SpawnDefaultPawnFor(AGameModeBase* GameMode, AController* NewPlayer, AActor* StartSpot)
	{
		std::cout << "SpawnDefaultPawnFor";
		if (NewPlayer && StartSpot)
		{
			auto Transform = StartSpot->GetTransform();

			return GameMode->SpawnDefaultPawnAtTransform(NewPlayer, Transform);
		}

		return 0;
	}

	void (*ProcessEvent0)(UObject* Obj, UFunction* UEFunction, void* Params);
	void ProcessEvent_Hook(UObject* Obj, UFunction* UEFunction, void* Params)
	{
		std::string UEFuncName = UEFunction->GetName();
		static bool bReadyToStartMatchHook = false;
		if (UEFuncName == "ReadyToStartMatch" && !bReadyToStartMatchHook)
		{
			bReadyToStartMatchHook = true;
			std::cout << "ReadyToStartMatchCalled!!!!!!!!!!!!!!!";
			UFortPlaylistAthena* Playlist = UObject::FindObject<UFortPlaylistAthena>("Playlist_DefaultSolo.Playlist_DefaultSolo");
			GetGameState()->CurrentPlaylistInfo.BasePlaylist = Playlist;
			GetGameState()->CurrentPlaylistInfo.OverridePlaylist = Playlist;
			GetGameState()->CurrentPlaylistId = Playlist->PlaylistId;
			GetGameMode()->CurrentPlaylistName = Playlist->PlaylistName;
			GetGameMode()->CurrentPlaylistId = Playlist->PlaylistId;
			GetGameState()->OnRep_CurrentPlaylistInfo();
			GetGameState()->OnRep_CurrentPlaylistId();
		}

		if (UEFuncName == "SpawnDefaultPawnFor")
		{
			AFortPlayerControllerAthena* PC = (AFortPlayerControllerAthena*)Obj;
			TArray<AActor*> SpawnLocs;
			if (bCreative)
			{
				UGameplayStatics::GetDefaultObj()->GetAllActorsOfClass(GetWorld(), AFortPlayerStartCreative::StaticClass(), &SpawnLocs);
			}
			else {
				UGameplayStatics::GetDefaultObj()->GetAllActorsOfClass(GetWorld(), AFortPlayerStartWarmup::StaticClass(), &SpawnLocs);
			}
			
			FVector SpawnLocationForPawn = SpawnLocs[(rand() % (size_t)SpawnLocs.Num())]->K2_GetActorLocation();
			AFortPlayerPawnAthena* Pawn = SpawnActor<AFortPlayerPawnAthena>(SpawnLocationForPawn, nullptr);
			PC->Possess(Pawn);
		}

		if (UEFuncName == "ServerAcknowledgePossesion")
		{
			auto InParams = (Params::APlayerController_ServerAcknowledgePossession_Params*)Params;
			AFortPlayerPawnAthena* Pawn = (AFortPlayerPawnAthena*)Obj;
			AFortPlayerControllerAthena* PC = (AFortPlayerControllerAthena*)Obj;
			PC->AcknowledgedPawn = Pawn; //Sigma Behavior!!!!!!!
		}

		return ProcessEvent0(Obj, UEFunction, Params);
	}
}