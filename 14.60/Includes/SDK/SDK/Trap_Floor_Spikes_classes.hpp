#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0xDE8 - 0xD30)
// BlueprintGeneratedClass Trap_Floor_Spikes.Trap_Floor_Spikes_C
class ATrap_Floor_Spikes_C : public ABuildingTrapFloor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Spike_Mesh;                                        // 0xD38(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Trigger;                                           // 0xD40(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Root;                                              // 0xD48(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        ResetSpikes_LERP_FCB6779D4DCA9F66ECE8A7B3FDDF9459; // 0xD50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ResetSpikes__Direction_FCB6779D4DCA9F66ECE8A7B3FDDF9459; // 0xD54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_528B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ResetSpikes;                                       // 0xD58(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Retract_LERP_0B9D97AE4B5C790D47D67889C6EAE1CD;     // 0xD60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Retract__Direction_0B9D97AE4B5C790D47D67889C6EAE1CD; // 0xD64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_528C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Retract;                                           // 0xD68(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Fire_LERP_31BA074043AA09D9C415BAAA81B9DCBF;        // 0xD70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Fire__Direction_31BA074043AA09D9C415BAAA81B9DCBF;  // 0xD74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_528D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Fire;                                              // 0xD78(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             Place_Trap_Sound;                                  // 0xD80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             Trap_Active_Sound;                                 // 0xD88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             Reload_Sound;                                      // 0xD90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             Trap_Explode_Sound;                                // 0xD98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             Trap_Fire_Sound;                                   // 0xDA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpikeRestingScale;                                 // 0xDA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpikeActiveScale;                                  // 0xDAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SpikeHoldOnFireLength;                             // 0xDB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_528E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              SpikesMID;                                         // 0xDB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SweepExponent;                                     // 0xDC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          SweepColor;                                        // 0xDC4(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SweepSpeed;                                        // 0xDD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    FriendlyTrapMaterial;                              // 0xDD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    NormalSpikeMaterial;                               // 0xDE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ATrap_Floor_Spikes_C* GetDefaultObj();

	void ChangeToNormalMaterial();
	void _ChangeToFriendlyMaterial(enum class ESubGame CallFunc_GetSubGame_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, uint8 CallFunc_GetActorTeam_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void MaterialSweepOnSpikes(float SweepSpeed, const struct FLinearColor& SweepColor, float SweepExponent, float Temp_float_Variable, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void SetSpikePosition(float NewSpikePosition, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void Fire__FinishedFunc();
	void Fire__UpdateFunc();
	void Retract__FinishedFunc();
	void Retract__UpdateFunc();
	void Retract__Sounds__EventFunc();
	void ResetSpikes__FinishedFunc();
	void ResetSpikes__UpdateFunc();
	void OnReloadEnd();
	void OnPlaced();
	void OnFinishedBuilding();
	void GameplayCue_Abilities_Activation_Traps_ActivateTrap(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void OnOutOfDurability();
	void OnWorldReady();
	void OnInitTeam();
	void SwitchToAlternateMaterial();
	void ExecuteUbergraph_Trap_Floor_Spikes(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_2, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_1, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_2, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_3, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_3, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_4, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_5, bool Temp_bool_Has_Been_Initd_Variable, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_6, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float Temp_float_Variable, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_5, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_6, uint8 CallFunc_GetActorTeam_ReturnValue, TArray<enum class EFortTeamAffiliation>& K2Node_MakeArray_Array_1);
};

}


