#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Trap_BouncePad_Athena_BounceCountTracker_LongerDuration.GE_Trap_BouncePad_Athena_BounceCountTracker_LongerDuration_C
// (None)

class UClass* UGE_Trap_BouncePad_Athena_BounceCountTracker_LongerDuration_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Trap_BouncePad_Athena_BounceCountTracker_LongerDuration_C");

	return Clss;
}


// GE_Trap_BouncePad_Athena_BounceCountTracker_LongerDuration_C GE_Trap_BouncePad_Athena_BounceCountTracker_LongerDuration.Default__GE_Trap_BouncePad_Athena_BounceCountTracker_LongerDuration_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Trap_BouncePad_Athena_BounceCountTracker_LongerDuration_C* UGE_Trap_BouncePad_Athena_BounceCountTracker_LongerDuration_C::GetDefaultObj()
{
	static class UGE_Trap_BouncePad_Athena_BounceCountTracker_LongerDuration_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Trap_BouncePad_Athena_BounceCountTracker_LongerDuration_C*>(UGE_Trap_BouncePad_Athena_BounceCountTracker_LongerDuration_C::StaticClass()->DefaultObject);

	return Default;
}

}


