#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xCD8 - 0xCB0)
// BlueprintGeneratedClass PBWA_S1_Solid.PBWA_S1_Solid_C
class APBWA_S1_Solid_C : public ABuildingWall
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xCB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        GnomeWallChance;                                   // 0xCB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        GnomeWallMax;                                      // 0xCBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Gnomed;                                            // 0xCC0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_55E6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceConstant*             GnomeMaterial;                                     // 0xCC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           GnomeWall;                                         // 0xCD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class APBWA_S1_Solid_C* GetDefaultObj();

	void UserConstructionScript(bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PBWA_S1_Solid(int32 EntryPoint, const struct FAnimatingMaterialPair& K2Node_MakeStruct_AnimatingMaterialPair, int32 CallFunc_Array_Add_ReturnValue);
};

}


