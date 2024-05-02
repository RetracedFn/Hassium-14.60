#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2A0 (0xA40 - 0x7A0)
// BlueprintGeneratedClass B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C
class AB_BGA_Athena_EnvCampFire_C : public ABuildingGameplayActorCampFire
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                      Sphere;                                            // 0x7A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  FirePitEmpty;                                      // 0x7B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Cylinder;                                          // 0x7B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       FireLoc;                                           // 0x7C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Wood;                                              // 0x7C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Root;                                              // 0x7D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortCurieComponent*                   FortCurie;                                         // 0x7D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             InteractingPawn;                                   // 0x7E0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BeenUsed;                                          // 0x7E8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_70A5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DousedSmokeLife;                                   // 0x7EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        Row_DousedSmokeLife;                               // 0x7F0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         HotfixedEnabled;                                   // 0x810(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DestroyIfDisabled;                                 // 0x811(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Destroyed;                                         // 0x812(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_70A6[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        Row_HotfixEnabled;                                 // 0x818(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                               TraceOffset;                                       // 0x838(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Season7Campfire;                                   // 0x844(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_70A7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 CustomSpecialS7Tags;                               // 0x848(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        SpecialS7FireTime;                                 // 0x868(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_70A8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          DousedSmokeWispTimer;                              // 0x870(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       S7SuccessEmitter;                                  // 0x878(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            S7SuccessSound;                                    // 0x880(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BlockInteraction;                                  // 0x888(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_70A9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LitRepBool;                                        // 0x88C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          DousedCue;                                         // 0x890(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          DeathCue;                                          // 0x898(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        Row_Light_Cost;                                    // 0x8A0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Text_Light;                                        // 0x8C0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Text_LightCost;                                    // 0x8D8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Text_LightCostNeedMore;                            // 0x8F0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortWorldItemDefinition*              Item_Wood;                                         // 0x908(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Stoked;                                            // 0x910(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_70AA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          StokedCue;                                         // 0x914(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_70AB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        Row_Stoke_Cost;                                    // 0x920(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_HotfixStokeEnabled;                            // 0x940(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Text_StokeCostNeedMore;                            // 0x960(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         HasBeenLit;                                        // 0x978(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_70AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        Row_ReplaceCampfire;                               // 0x980(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                ActorToReplaceWith;                                // 0x9A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CurieActivated;                                    // 0x9A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_70AD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        FloodLevel;                                        // 0x9B0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        FloodHeightPerLevel;                               // 0x9D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OceanHeight;                                       // 0x9D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class AActor*, struct FCurieInteractHandle> InteractHandleMap;                                 // 0x9D8(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FGameplayTag                          FireCue;                                           // 0xA28(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              WoodBurningMatInstance;                            // 0xA30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FX_WoodBurnAmount;                                 // 0xA38(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FX_WoodBurnEmissive;                               // 0xA3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_BGA_Athena_EnvCampFire_C* GetDefaultObj();

	void DisableIfBelowFlood(bool CallFunc_IsActorSubmergedInOcean_ReturnValue);
	void ShouldPlayNativeCurieFX(enum class EFortCurieNativeFXType FXType, struct FFortNativeCurieFXResponse* OutResponse, const struct FFortNativeCurieFXResponse& K2Node_MakeStruct_FortNativeCurieFXResponse);
	void HasInfiniteResources(class APawn* Pawn, bool* HasInfiniteResources, bool CallFunc_IsValid_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ShouldHaveInfiniteResources_ReturnValue);
	void OnRep_Stoked();
	class FText BlueprintGetFailedInteractionString(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, bool Temp_bool_Variable, float CallFunc_GetValueAtLevel_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_FCeil_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_FCeil_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText K2Node_Select_Default);
	int32 GetCostReActivate(float CallFunc_GetValueAtLevel_ReturnValue, int32 CallFunc_FCeil_ReturnValue);
	void OnRep_LitRepBool(bool CallFunc_Conv_IntToBool_ReturnValue);
	void OnRep_Destroyed();
	void CheckIfUserIsSpecialS7(class AFortPawn* PawnWhoLitFire, bool* UserIsSpecial, const struct FGameplayTagContainer& Temp_struct_Variable, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_HasAllTags_ReturnValue);
	bool RowToBool(struct FScalableFloat& Input, float CallFunc_GetValueAtLevel_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void SetSheetValues(bool CallFunc_RowToBool_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue);
	class FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, bool bHasInfiniteResources, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, bool CallFunc_HasInfiniteResources_HasInfiniteResources, float CallFunc_GetValueAtLevel_ReturnValue, int32 CallFunc_FCeil_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2, int32 CallFunc_FCeil_ReturnValue_1, int32 CallFunc_FCeil_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, int32 CallFunc_K2_GetItemQuantityOnPlayer_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class FText K2Node_Select_Default_1, bool CallFunc_BooleanOR_ReturnValue_1);
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class ETInteractionType InteractionType, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, bool CallFunc_HasInfiniteResources_HasInfiniteResources, float CallFunc_GetValueAtLevel_ReturnValue, int32 CallFunc_FCeil_ReturnValue, bool CallFunc_RowToBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_1, int32 CallFunc_FCeil_ReturnValue_1, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_K2_GetItemQuantityOnPlayer_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void OnReady_9F4554BE40FCB41157835B9AD897EE69(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags);
	void OnCurieActive_A24E3C804D14344FC0E5E0B5CDB4FF55();
	void BlueprintOnInteract(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted);
	void Light();
	void GoOut();
	void ReceiveBeginPlay();
	void Start();
	void BuildingActorDestroyedCleanUp(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void BindToFloor();
	void HandleBoundDestroyed();
	void CheckDestroyDisabled();
	void SpecialS7LightsFireAfterOut();
	void KillDouseSmokeWisp();
	void Server_QuestObjectiveUpdated(class AFortPlayerController* Controller, class UFortQuestItemDefinition* QuestDef, class FName BackendName, int32 CompletionCount, bool ObjectiveCompleted, bool QuestCompleted);
	void HandleCharacterVariantTransition(class AFortPawn* TransitioningPawn);
	void PayLightCost(class AFortPawn* InteractingPawn);
	void PayStokeCost(class AFortPawn* InteractingPawn);
	void CheckReplaceCampfire();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void EndFireInteract();
	void OnCurieElementAttached_BP(struct FCurieContainerHandle& CurieContainerHandle, struct FGameplayTag& ElementTag);
	void OnCurieElementDetached_BP(struct FCurieContainerHandle& CurieContainerHandle, struct FGameplayTag& ElementTag);
	void ReceiveDestroyed();
	void CheckInitialOverlappingActors();
	void Begin_Wood_Burn_FX();
	void ExecuteUbergraph_B_BGA_Athena_EnvCampFire(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, class AFortPawn* K2Node_Event_InteractingPawn, enum class EInteractionBeingAttempted K2Node_Event_InteractionBeingAttempted, int32 Temp_int_Array_Index_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_HasAuthority_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_CheckIfUserIsSpecialS7_UserIsSpecial, class AFortPlayerController* K2Node_CustomEvent_Controller, class UFortQuestItemDefinition* K2Node_CustomEvent_QuestDef, class FName K2Node_CustomEvent_BackendName, int32 K2Node_CustomEvent_CompletionCount, bool K2Node_CustomEvent_ObjectiveCompleted, bool K2Node_CustomEvent_QuestCompleted, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, const class FString& CallFunc_GetPersistentName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AFortPawn* K2Node_CustomEvent_TransitioningPawn, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FHitResult& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_CheckIfUserIsSpecialS7_UserIsSpecial_1, class AController* CallFunc_GetController_ReturnValue, class AAthena_PlayerController_C* K2Node_DynamicCast_AsAthena_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, class AFortPawn* K2Node_CustomEvent_InteractingPawn_1, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class UFortAsyncAction_OnCurieActivated* CallFunc_OnCurieActivated_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, int32 CallFunc_GetCostReActivate_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_K2_RemoveItemFromPlayer_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData_1, float CallFunc_GetValueAtLevel_ReturnValue, int32 CallFunc_FCeil_ReturnValue, class AFortPawn* K2Node_CustomEvent_InteractingPawn, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1, int32 CallFunc_K2_RemoveItemFromPlayer_ReturnValue_1, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_RowToBool_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_BooleanAND_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class ABuildingActor* CallFunc_K2_SpawnBuildingActor_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool CallFunc_Map_Contains_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_Not_PreBool_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FCurieInteractHandle& CallFunc_ExecuteBeginFireInteract_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, const struct FCurieInteractHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_ExecuteEndFireInteract_ReturnValue, class UFortAsyncAction_CurrentPlaylistReady* CallFunc_PlaylistDataReadyAsync_ReturnValue, class AFortGameStateAthena* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_Map_Remove_ReturnValue, class UFortPlaylist* Temp_object_Variable_1, TArray<class AActor*>& CallFunc_Map_Keys_Keys, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FCurieInteractHandle& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_2, bool CallFunc_ExecuteEndFireInteract_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FCurieContainerHandle& K2Node_Event_CurieContainerHandle_1, const struct FGameplayTag& K2Node_Event_ElementTag_1, const struct FCurieContainerHandle& K2Node_Event_CurieContainerHandle, const struct FGameplayTag& K2Node_Event_ElementTag, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, TArray<class AActor*>& Temp_object_Variable_2, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, class AActor* CallFunc_Array_Get_Item_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Map_Contains_ReturnValue_1, const struct FGameplayTagContainer& Temp_struct_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_2, const struct FCurieInteractHandle& CallFunc_ExecuteBeginFireInteract_ReturnValue_1, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class AFortGameStateAthena* K2Node_CustomEvent_GameState, class UFortPlaylist* K2Node_CustomEvent_Playlist, const struct FGameplayTagContainer& K2Node_CustomEvent_PlaylistContextTags, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6);
};

}


