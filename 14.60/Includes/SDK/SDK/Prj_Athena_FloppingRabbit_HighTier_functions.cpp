#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Prj_Athena_FloppingRabbit_HighTier.Prj_Athena_FloppingRabbit_HighTier_C
// (Actor)

class UClass* APrj_Athena_FloppingRabbit_HighTier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Prj_Athena_FloppingRabbit_HighTier_C");

	return Clss;
}


// Prj_Athena_FloppingRabbit_HighTier_C Prj_Athena_FloppingRabbit_HighTier.Default__Prj_Athena_FloppingRabbit_HighTier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrj_Athena_FloppingRabbit_HighTier_C* APrj_Athena_FloppingRabbit_HighTier_C::GetDefaultObj()
{
	static class APrj_Athena_FloppingRabbit_HighTier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrj_Athena_FloppingRabbit_HighTier_C*>(APrj_Athena_FloppingRabbit_HighTier_C::StaticClass()->DefaultObject);

	return Default;
}

}


