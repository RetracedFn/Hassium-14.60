#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38D (0xCA1 - 0x914)
// BlueprintGeneratedClass Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C
class APrj_Athena_FloppingRabbit_C : public AB_Prj_ThrownConsumable_C
{
public:
	uint8                                        Pad_5B0E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x918(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       LineLoc;                                           // 0x920(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_NewTrack_0_5E59FE3C4CA5776FE578F391478AB1A6; // 0x928(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_5E59FE3C4CA5776FE578F391478AB1A6; // 0x92C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B0F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x930(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BigBob_BigDip_9789CB934FE6D3F1A956D993031B4307;    // 0x938(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                BigBob__Direction_9789CB934FE6D3F1A956D993031B4307; // 0x93C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B10[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    BigBob;                                            // 0x940(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            NullHit;                                           // 0x948(0x8C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FRotator                              WaterRotation;                                     // 0x9D4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               MeshLocAfterHit;                                   // 0x9E0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ChanceForBigBob;                                   // 0x9EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EObjectTypeQuery>          ObjectTypes;                                       // 0x9F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                        DistanceCheckInterval;                             // 0xA00(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B11[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Spawner;                                           // 0xA08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartingCatchBigBobChance;                         // 0xA10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Delay_CatchWindow;                                 // 0xA14(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanCatch;                                          // 0xA18(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         InWater;                                           // 0xA19(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B12[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0xA20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_Athena_FloppingRabbit_Wire_C*       Wire;                                              // 0xA28(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Event_Fire;                                        // 0xA30(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Event_InWorld;                                     // 0xA38(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        MaxDistanceFromPlayer;                             // 0xA40(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DefaultSpawner;                                    // 0xA44(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B13[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        IncreaseBigBobChanceAmount;                        // 0xA48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B14[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        Row_ChanceForBigBob;                               // 0xA50(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_ChanceForBigBobIncrease;                       // 0xA70(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_CatchWindow;                                   // 0xA90(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                       FX_HitWater;                                       // 0xAB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               FXScaleHitWater;                                   // 0xAB8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B15[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Sound_HitWater;                                    // 0xAC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       FX_WaterDip;                                       // 0xAD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        NS_FX_HitWater;                                    // 0xAD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        NS_FX_SpawnItems;                                  // 0xAE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        NS_FX_WaterDip;                                    // 0xAE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        NS_FX_WaterDip_HighTier;                           // 0xAF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       FX_WaterDip_HighTier;                              // 0xAF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               FXScaleWaterDip;                                   // 0xB00(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B16[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Sound_WaterDip;                                    // 0xB10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Event_ProjDestroyed;                               // 0xB18(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Event_Hooked;                                      // 0xB20(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        Row_DistanceCheck;                                 // 0xB28(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_DistanceCheckZ;                                // 0xB48(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Dipping;                                           // 0xB68(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B17[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                SpawnedDefaultSpawner;                             // 0xB70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        Row_BobChanceDelayMin;                             // 0xB78(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Row_BobChanceDelayMax;                             // 0xB98(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         SpawnedItem;                                       // 0xBB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B18[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_FluidSim_FN_C*                     FluidSim;                                          // 0xBC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_WaterDip_HighTier;                           // 0xBC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WorldSpawner;                                      // 0xBD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B19[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       FX_SpawnItems;                                     // 0xBD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_SpawnItems;                                  // 0xBE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ItemAttachMinDist;                                 // 0xBE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ItemAttachDistanceRequirement;                     // 0xBEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bStartedFishingSession;                            // 0xBF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B1A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BounceOutOfWaterDelay;                             // 0xBF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Event_Unhooked;                                    // 0xBF8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TowardPlayerVector;                                // 0xC00(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               BobberStartLocation;                               // 0xC0C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Target;                                            // 0xC18(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B1B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortAIAssignmentIdentifier           AIAssignmentIdentifier;                            // 0xC28(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortAIAssignmentSettings*             AIAssignmentSettings;                              // 0xC58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  TetherSocket;                                      // 0xC60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bTetherCanChangeWeapons;                           // 0xC68(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B1C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 FishingRodTag;                                     // 0xC70(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                FloppingRabbitWire;                                // 0xC90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GC_MiniGameSplash;                                 // 0xC98(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bDidHitMeatball;                                   // 0xCA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class APrj_Athena_FloppingRabbit_C* GetDefaultObj();

	class FName DetermineFishLootTierNameAndSetLootForSpawner(bool bIsExplosion, class ABGA_Athena_FlopperSpawn_Parent_C* K2Node_DynamicCast_AsBGA_Athena_Flopper_Spawn_Parent, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetLootTier_Output_Get);
	void IgnoreTetherablePawn(class AActor* HitActor, bool* IsIgnored, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_HasTag_ReturnValue);
	void UnRegisterWithGoalManager(bool CallFunc_HasAuthority_ReturnValue, const struct FFortAIGoalInfo& CallFunc_MakeGoalFromActor_Goal);
	void RegisterWithGoalManager(bool CallFunc_HasAuthority_ReturnValue, const struct FFortAIGoalInfo& CallFunc_MakeGoalFromActor_Goal, const struct FFortAIAssignmentIdentifier& CallFunc_CreateWorldAssignment_AssignmentIdentifier, enum class EAssignmentCreationResult CallFunc_CreateWorldAssignment_CreationResult, bool K2Node_SwitchEnum_CmpSuccess);
	void AttemptTether(class AActor* HitActor, bool* bTethered, bool ReturnTethered, class APawn* TetherHitActorPawn, class AFortMeatballVehicle* K2Node_DynamicCast_AsFort_Meatball_Vehicle, bool K2Node_DynamicCast_bSuccess, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, bool CallFunc_K2_AttachToComponent_ReturnValue, class APawn* CallFunc_GetTetherPawn_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void GetSheetVals(float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2);
	void BigBob__FinishedFunc();
	void BigBob__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void FullDip(bool InWorldSpawner);
	void CatchWindow();
	void TryCatch();
	void HideAndKill();
	void ReceiveBeginPlay();
	void DistanceCheck();
	void ForceKill();
	void OnExploded(TArray<class AActor*>& HitActors, TArray<struct FHitResult>& HitResults);
	void HitWater(bool FishSpawner);
	void ReceiveDestroyed();
	void CheckForDip();
	void CheckForHighTierSpawner();
	void SpawnItemsFX();
	void CustomPickupAttach(class AFortPickup* FortPickup);
	void WriteNothingCaughtFishingAnalytic();
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnExitWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsLastBody);
	void ReelIn();
	void ServerAttemptTether(class APawn* TetherActor);
	void Minigame_MoveBobber();
	void DipFx();
	void ReceiveTick(float DeltaSeconds);
	void ClientReelIn();
	void ToggleMiniGameSplashLoop(bool On);
	void ExecuteUbergraph_Prj_Athena_FloppingRabbit(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AB_FloppingRabbit_Weap_Athena_C* K2Node_DynamicCast_AsB_Flopping_Rabbit_Weap_Athena, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABGA_Athena_FlopperSpawn_Parent_C* K2Node_DynamicCast_AsBGA_Athena_Flopper_Spawn_Parent, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, float CallFunc_Abs_ReturnValue, float CallFunc_DistanceBetweenTwoVectors_Distance, bool Temp_bool_Has_Been_Initd_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABGA_Athena_FlopperSpawn_Default_C* CallFunc_FinishSpawningActor_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_1, bool K2Node_CustomEvent_InWorldSpawner, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class AFortPickup* K2Node_DynamicCast_AsFort_Pickup, bool K2Node_DynamicCast_bSuccess_3, class AFortAthenaWater* K2Node_DynamicCast_AsFort_Athena_Water, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IgnoreTetherablePawn_isIgnored, bool CallFunc_AttemptTether_bTethered, class AFortWaterBodyActor* K2Node_DynamicCast_AsFort_Water_Body_Actor, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsValid_ReturnValue_4, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, bool CallFunc_IsValid_ReturnValue_5, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess_6, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_AttemptTether_bTethered_1, bool CallFunc_HasTag_ReturnValue, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue, TArray<class AActor*>& K2Node_Event_HitActors, TArray<struct FHitResult>& K2Node_Event_HitResults, bool K2Node_CustomEvent_FishSpawner, bool Temp_bool_IsClosed_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_5, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_6, class APawn* CallFunc_GetInstigator_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_7, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, bool Temp_bool_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsServer_ReturnValue_4, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_9, bool Temp_bool_IsClosed_Variable_1, class ABGA_Athena_FlopperSpawn_Default_C* K2Node_DynamicCast_AsBGA_Athena_Flopper_Spawn_Default, bool K2Node_DynamicCast_bSuccess_7, bool Temp_bool_IsClosed_Variable_2, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, float CallFunc_GetValueAtLevel_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue_3, float CallFunc_RandomFloatInRange_ReturnValue, TMap<class FName, class FName> K2Node_MakeMap_Map, const struct FFluidForceSocketInfo& K2Node_MakeStruct_FluidForceSocketInfo, bool CallFunc_IsValid_ReturnValue_8, const struct FFluidForceDynamic& K2Node_MakeStruct_FluidForceDynamic, TArray<class ABP_FluidSim_FN_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool Temp_bool_Has_Been_Initd_Variable_1, class ABP_FluidSim_FN_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_9, bool Temp_bool_IsClosed_Variable_3, bool Temp_bool_Has_Been_Initd_Variable_2, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterPlaneLocation, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterPlaneNormal, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterSurfacePosition, float CallFunc_GetLastWaterSurfaceInfo_WaterDepth, int32 CallFunc_GetLastWaterSurfaceInfo_WaterBodyIdx, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterVelocity, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_10, bool CallFunc_IsServer_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_10, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterPlaneLocation_1, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterPlaneNormal_1, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterSurfacePosition_1, float CallFunc_GetLastWaterSurfaceInfo_WaterDepth_1, int32 CallFunc_GetLastWaterSurfaceInfo_WaterBodyIdx_1, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterVelocity_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, class APawn* CallFunc_GetTetherPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_11, class AFortPickup* K2Node_CustomEvent_FortPickup, class AActor* CallFunc_GetAttachParentActor_ReturnValue, float CallFunc_GetSquaredDistanceTo_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_3, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsServer_ReturnValue_6, class APawn* CallFunc_GetInstigator_ReturnValue_3, float CallFunc_GetSquaredDistanceTo_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool Temp_bool_Variable_1, TArray<class AActor*>& Temp_object_Variable, bool CallFunc_IsValid_ReturnValue_12, bool Temp_bool_Variable_2, class USoundBase* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_13, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_11, TArray<class AActor*>& CallFunc_CapsuleOverlapActors_OutActors, bool CallFunc_CapsuleOverlapActors_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class UNiagaraSystem* K2Node_Select_Default_1, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_2, class AFortWaterBodyActor* K2Node_ComponentBoundEvent_WaterBody, class UFortWaterInteractionComponent* K2Node_ComponentBoundEvent_WaterInteractionComponent, bool K2Node_ComponentBoundEvent_bIsLastBody, bool CallFunc_IsInWater_ReturnValue, bool CallFunc_IsServer_ReturnValue_7, bool Temp_bool_Has_Been_Initd_Variable_4, TArray<class AActor*>& Temp_object_Variable_1, TArray<class AActor*>& CallFunc_CapsuleOverlapActors_OutActors_1, bool CallFunc_CapsuleOverlapActors_ReturnValue_1, class AActor* CallFunc_Array_Get_Item_1, bool CallFunc_IsTethered_ReturnValue, bool CallFunc_IsValid_ReturnValue_14, class APawn* K2Node_CustomEvent_TetherActor, bool CallFunc_AttemptTether_bTethered_2, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_12, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_13, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_14, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_15, bool Temp_bool_IsClosed_Variable_4, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_3, float CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_VInterpTo_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, bool CallFunc_IsTethered_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, bool K2Node_CustomEvent_On, class AB_Athena_FloppingRabbit_Wire_C* CallFunc_FinishSpawningActor_ReturnValue_1, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue);
};

}


