#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0xDC0 - 0xD80)
// BlueprintGeneratedClass DA_Butterfly.DA_Butterfly_C
class ADA_Butterfly_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD80(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         CanCancelAbility;                                  // 0xD88(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6D8A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CanCancelTimer;                                    // 0xD90(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        CancelDelay;                                       // 0xD98(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0xDB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ADA_Butterfly_C* GetDefaultObj();

	void BPPressSecondaryFire(class AFortDecoHelper* FortDecoHelper);
	void BPPressTrigger(class AFortDecoHelper* FortDecoHelper);
	void BPOnUnEquip();
	void BPReleaseSecondaryFire(class AFortDecoHelper* FortDecoHelper);
	void ExecuteUbergraph_DA_Butterfly(int32 EntryPoint, class AFortDecoHelper* K2Node_Event_FortDecoHelper_2, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, class AFortDecoHelper* K2Node_Event_FortDecoHelper_1, class AFortDecoHelper* K2Node_Event_FortDecoHelper);
};

}


