#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x188 (0x440 - 0x2B8)
// AnimBlueprintGeneratedClass M_MED_HighTower_Tomato_FaceAcc_AnimBp.M_MED_HighTower_Tomato_FaceAcc_AnimBp_C
class UM_MED_HighTower_Tomato_FaceAcc_AnimBp_C : public UAnimInstance
{
public:
	uint8                                        Pad_66EB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData            AnimBlueprintClassSubsystem_PropertyAccess;        // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_66EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2D0(0x30)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x300(0x140)(ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UM_MED_HighTower_Tomato_FaceAcc_AnimBp_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_M_MED_HighTower_Tomato_FaceAcc_AnimBp(int32 EntryPoint);
};

}


