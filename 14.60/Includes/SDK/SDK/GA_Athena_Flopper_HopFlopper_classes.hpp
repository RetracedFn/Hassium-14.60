#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xBE8 - 0xBE0)
// BlueprintGeneratedClass GA_Athena_Flopper_HopFlopper.GA_Athena_Flopper_HopFlopper_C
class UGA_Athena_Flopper_HopFlopper_C : public UGA_Athena_MedConsumable_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_Athena_Flopper_HopFlopper_C* GetDefaultObj();

	void K2_CommitExecute();
	void ExecuteUbergraph_GA_Athena_Flopper_HopFlopper(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SendComplexCustomStatEvent_QuestActive, bool CallFunc_SendComplexCustomStatEvent_QuestCompleted, bool CallFunc_BooleanAND_ReturnValue);
};

}


