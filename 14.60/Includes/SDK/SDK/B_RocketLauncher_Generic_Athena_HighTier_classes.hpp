#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x12BC - 0x1294)
// BlueprintGeneratedClass B_RocketLauncher_Generic_Athena_HighTier.B_RocketLauncher_Generic_Athena_HighTier_C
class AB_RocketLauncher_Generic_Athena_HighTier_C : public AB_Ranged_Generic_C
{
public:
	uint8                                        Pad_6E56[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                       RearMuzzleLoc;                                     // 0x12A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFXSystemAsset*                        RearMuzzleFXSystem;                                // 0x12A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                               RearMuzzleOffsetMultiplier;                        // 0x12B0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_RocketLauncher_Generic_Athena_HighTier_C* GetDefaultObj();

	void UserConstructionScript(bool Temp_bool_Variable, class UFXSystemAsset* Temp_object_Variable, class UFXSystemAsset* Temp_object_Variable_1, bool CallFunc_IsNiagaraFXTypeEnabled_ReturnValue, class UFXSystemAsset* K2Node_Select_Default);
	void Muzzle_Flash_FX(bool Persistent_Fire);
	void ExecuteUbergraph_B_RocketLauncher_Generic_Athena_HighTier(int32 EntryPoint, bool K2Node_Event_Persistent_Fire, class UNiagaraSystem* K2Node_DynamicCast_AsNiagara_System, bool K2Node_DynamicCast_bSuccess, class UFXSystemComponent* CallFunc_SpawnFXSystemAttached_ReturnValue, const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult);
};

}


