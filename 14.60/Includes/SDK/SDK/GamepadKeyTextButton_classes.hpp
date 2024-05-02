#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x150 (0xCF8 - 0xBA8)
// WidgetBlueprintGeneratedClass GamepadKeyTextButton.GamepadKeyTextButton_C
class UGamepadKeyTextButton_C : public UFortGamepadCustomListItem
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UKeybindWidget_C*                      BoundKey;                                          // 0xBB0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               ContentBorder;                                     // 0xBB8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortRichTextBlockLegacy*              FortRichTextBlock_Desc;                            // 0xBC0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortRichTextBlockLegacy*              FortRichTextBlock_NoKey;                           // 0xBC8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Nokey;                                     // 0xBD0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ButtonText;                                        // 0xBD8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateBrush                           IconBrush;                                         // 0xBF0(0x88)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UClass*                                ControllerInputStyle;                              // 0xC78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FDataTableRowHandle                   ButtonClickAction;                                 // 0xC80(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	enum class EHorizontalAlignment              ContentAlignment;                                  // 0xC90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7A22[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ChangeTheBinding_Button;                           // 0xC98(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                  ActionNameData;                                    // 0xCA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  KeyData;                                           // 0xCB0(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class FText                                  TextData;                                          // 0xCC8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKey                                  KeyNone;                                           // 0xCE0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGamepadKeyTextButton_C* GetDefaultObj();

	void SetNonInteractableStyle();
	void SetContentAlignment(enum class EHorizontalAlignment ContentAlignment);
	void UpdateContentAlignment(class UPanelSlot* CallFunc_GetContentSlot_ReturnValue, class UBorderSlot* K2Node_DynamicCast_AsBorder_Slot, bool K2Node_DynamicCast_bSuccess);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void SetData(const struct FKey& Key, class FText DescText, class FName ActionName);
	void PreConstruct(bool IsDesignTime);
	void SetDataAndUpdateButton(const struct FKey& Key, class FText DescText, class FName ActionName);
	void UpdateButton(class UGamepadKeyTextButton_C* Button);
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo);
	void ExecuteUbergraph_GamepadKeyTextButton(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UObject* K2Node_Event_ListItemObject, class UGamepadKeyTextButton_C* K2Node_DynamicCast_AsGamepad_Key_Text_Button, bool K2Node_DynamicCast_bSuccess, const struct FKey& K2Node_CustomEvent_Key_1, class FText K2Node_CustomEvent_DescText_1, class FName K2Node_CustomEvent_ActionName_1, bool K2Node_Event_IsDesignTime, const struct FKey& K2Node_CustomEvent_Key, class FText K2Node_CustomEvent_DescText, class FName K2Node_CustomEvent_ActionName, class UGamepadKeyTextButton_C* K2Node_CustomEvent_Button, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool Temp_bool_Variable, const struct FFortTabButtonLabelInfo& K2Node_Event_TabLabelInfo, enum class ESlateVisibility K2Node_Select_Default);
	void ChangeTheBinding_Button__DelegateSignature(class FName ActionName, const struct FKey& Key);
};

}


