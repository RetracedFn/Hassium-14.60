#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HighTower_GrantedTag_Primary_Parent.GE_HighTower_GrantedTag_Primary_Parent_C
// (None)

class UClass* UGE_HighTower_GrantedTag_Primary_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HighTower_GrantedTag_Primary_Parent_C");

	return Clss;
}


// GE_HighTower_GrantedTag_Primary_Parent_C GE_HighTower_GrantedTag_Primary_Parent.Default__GE_HighTower_GrantedTag_Primary_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HighTower_GrantedTag_Primary_Parent_C* UGE_HighTower_GrantedTag_Primary_Parent_C::GetDefaultObj()
{
	static class UGE_HighTower_GrantedTag_Primary_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HighTower_GrantedTag_Primary_Parent_C*>(UGE_HighTower_GrantedTag_Primary_Parent_C::StaticClass()->DefaultObject);

	return Default;
}

}


