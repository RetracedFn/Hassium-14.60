#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Phoebe_HandleFocusing_ScanAroundOnly.Phoebe_HandleFocusing_ScanAroundOnly_C
// (None)

class UClass* UPhoebe_HandleFocusing_ScanAroundOnly_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Phoebe_HandleFocusing_ScanAroundOnly_C");

	return Clss;
}


// Phoebe_HandleFocusing_ScanAroundOnly_C Phoebe_HandleFocusing_ScanAroundOnly.Default__Phoebe_HandleFocusing_ScanAroundOnly_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPhoebe_HandleFocusing_ScanAroundOnly_C* UPhoebe_HandleFocusing_ScanAroundOnly_C::GetDefaultObj()
{
	static class UPhoebe_HandleFocusing_ScanAroundOnly_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPhoebe_HandleFocusing_ScanAroundOnly_C*>(UPhoebe_HandleFocusing_ScanAroundOnly_C::StaticClass()->DefaultObject);

	return Default;
}

}


