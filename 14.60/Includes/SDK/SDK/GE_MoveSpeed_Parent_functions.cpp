#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_MoveSpeed_Parent.GE_MoveSpeed_Parent_C
// (None)

class UClass* UGE_MoveSpeed_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_MoveSpeed_Parent_C");

	return Clss;
}


// GE_MoveSpeed_Parent_C GE_MoveSpeed_Parent.Default__GE_MoveSpeed_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_MoveSpeed_Parent_C* UGE_MoveSpeed_Parent_C::GetDefaultObj()
{
	static class UGE_MoveSpeed_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_MoveSpeed_Parent_C*>(UGE_MoveSpeed_Parent_C::StaticClass()->DefaultObject);

	return Default;
}

}


