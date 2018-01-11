// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WeaponEquipmentSlotWidget_Gamepad_parameters.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetSlotItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> SlotItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::GetSlotItem(TScriptInterface<class USlotInterface>* SlotItem)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64751);

	UWeaponEquipmentSlotWidget_Gamepad_C_GetSlotItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotItem != nullptr)
		*SlotItem = params.SlotItem;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetSlotContainer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::GetSlotContainer(TScriptInterface<class USlotContainerInterface>* SlotContainer)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64745);

	UWeaponEquipmentSlotWidget_Gamepad_C_GetSlotContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotContainer != nullptr)
		*SlotContainer = params.SlotContainer;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnSwap
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnSwap()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64724);

	UWeaponEquipmentSlotWidget_Gamepad_C_OnSwap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.ProcessSwap
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::ProcessSwap()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64716);

	UWeaponEquipmentSlotWidget_Gamepad_C_ProcessSwap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnReleasedSwap
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnReleasedSwap()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64715);

	UWeaponEquipmentSlotWidget_Gamepad_C_OnReleasedSwap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnPressedSwap
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnPressedSwap()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64707);

	UWeaponEquipmentSlotWidget_Gamepad_C_OnPressedSwap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.InputY
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentSlotWidget_Gamepad_C::InputY()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(65774);

	UWeaponEquipmentSlotWidget_Gamepad_C_InputY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.InputX
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentSlotWidget_Gamepad_C::InputX()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(65772);

	UWeaponEquipmentSlotWidget_Gamepad_C_InputX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.ProcessDrop
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::ProcessDrop()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64701);

	UWeaponEquipmentSlotWidget_Gamepad_C_ProcessDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.DroporUnEquipItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bDrop                          (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::DroporUnEquipItem(bool bDrop)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64691);

	UWeaponEquipmentSlotWidget_Gamepad_C_DroporUnEquipItem_Params params;
	params.bDrop = bDrop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnDeatchOrDropAttachment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bDetach                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAll                           (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnDeatchOrDropAttachment(bool bDetach, bool bAll)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64668);

	UWeaponEquipmentSlotWidget_Gamepad_C_OnDeatchOrDropAttachment_Params params;
	params.bDetach = bDetach;
	params.bAll = bAll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.ReleasedDropInput
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::ReleasedDropInput()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64657);

	UWeaponEquipmentSlotWidget_Gamepad_C_ReleasedDropInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.PressedDropInput
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::PressedDropInput()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64654);

	UWeaponEquipmentSlotWidget_Gamepad_C_PressedDropInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.ProcessDetach
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::ProcessDetach()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64647);

	UWeaponEquipmentSlotWidget_Gamepad_C_ProcessDetach_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.ReleaseDetachInput
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::ReleaseDetachInput()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64631);

	UWeaponEquipmentSlotWidget_Gamepad_C_ReleaseDetachInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.PressedDetachInput
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::PressedDetachInput()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64628);

	UWeaponEquipmentSlotWidget_Gamepad_C_PressedDetachInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetInventoryWidgetGamepad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryWidget_Gamepad_C* NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::GetInventoryWidgetGamepad(class UInventoryWidget_Gamepad_C** NewParam)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64620);

	UWeaponEquipmentSlotWidget_Gamepad_C_GetInventoryWidgetGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_BackgroundSlot_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::On_BackgroundSlot_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64601);

	UWeaponEquipmentSlotWidget_Gamepad_C_On_BackgroundSlot_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.FindLastFocusableWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUserWidget*             Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::FindLastFocusableWidget(class UUserWidget** Widget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64589);

	UWeaponEquipmentSlotWidget_Gamepad_C_FindLastFocusableWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.HandleWidgetMoveRight
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::HandleWidgetMoveRight()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64569);

	UWeaponEquipmentSlotWidget_Gamepad_C_HandleWidgetMoveRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.HandleWidgetMoveLeft
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::HandleWidgetMoveLeft()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64549);

	UWeaponEquipmentSlotWidget_Gamepad_C_HandleWidgetMoveLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.SetGamepadSelfPutAttachmentFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bFocus                         (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::SetGamepadSelfPutAttachmentFocus(bool bFocus)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64541);

	UWeaponEquipmentSlotWidget_Gamepad_C_SetGamepadSelfPutAttachmentFocus_Params params;
	params.bFocus = bFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.InputB
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentSlotWidget_Gamepad_C::InputB()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(65837);

	UWeaponEquipmentSlotWidget_Gamepad_C_InputB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnChildSlotRefreshFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnChildSlotRefreshFocus()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64524);

	UWeaponEquipmentSlotWidget_Gamepad_C_OnChildSlotRefreshFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetFocusingChildWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUserWidget* UWeaponEquipmentSlotWidget_Gamepad_C::GetFocusingChildWidget()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(65898);

	UWeaponEquipmentSlotWidget_Gamepad_C_GetFocusingChildWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.Up
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentSlotWidget_Gamepad_C::Up()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(65735);

	UWeaponEquipmentSlotWidget_Gamepad_C_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.Down
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentSlotWidget_Gamepad_C::Down()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(65896);

	UWeaponEquipmentSlotWidget_Gamepad_C_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetChildRightFocusableWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             RightWidget                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::GetChildRightFocusableWidget(class UUserWidget** RightWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64501);

	UWeaponEquipmentSlotWidget_Gamepad_C_GetChildRightFocusableWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RightWidget != nullptr)
		*RightWidget = params.RightWidget;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetChildLeftFocusableWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             Left_Widget                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::GetChildLeftFocusableWidget(class UUserWidget** Left_Widget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64478);

	UWeaponEquipmentSlotWidget_Gamepad_C_GetChildLeftFocusableWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Left_Widget != nullptr)
		*Left_Widget = params.Left_Widget;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetChildDownFocusableWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             DownWidget                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::GetChildDownFocusableWidget(class UUserWidget** DownWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64461);

	UWeaponEquipmentSlotWidget_Gamepad_C_GetChildDownFocusableWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DownWidget != nullptr)
		*DownWidget = params.DownWidget;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetChildUpFocusableWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             UpWidget                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::GetChildUpFocusableWidget(class UUserWidget** UpWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64454);

	UWeaponEquipmentSlotWidget_Gamepad_C_GetChildUpFocusableWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UpWidget != nullptr)
		*UpWidget = params.UpWidget;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.IsFocusable
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentSlotWidget_Gamepad_C::IsFocusable()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(65894);

	UWeaponEquipmentSlotWidget_Gamepad_C_IsFocusable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.FindFirstFocusableWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             FocusableWidget                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::FindFirstFocusableWidget(class UUserWidget** FocusableWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64444);

	UWeaponEquipmentSlotWidget_Gamepad_C_FindFirstFocusableWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FocusableWidget != nullptr)
		*FocusableWidget = params.FocusableWidget;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.IsFocus
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentSlotWidget_Gamepad_C::IsFocus()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(65770);

	UWeaponEquipmentSlotWidget_Gamepad_C_IsFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.SetFocus
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          NewFocus                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentSlotWidget_Gamepad_C::SetFocus(bool* NewFocus)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(65726);

	UWeaponEquipmentSlotWidget_Gamepad_C_SetFocus_Params params;
	params.NewFocus = NewFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_FocusColorBG_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::On_FocusColorBG_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64442);

	UWeaponEquipmentSlotWidget_Gamepad_C_On_FocusColorBG_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.InputA
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentSlotWidget_Gamepad_C::InputA()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(65835);

	UWeaponEquipmentSlotWidget_Gamepad_C_InputA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnSpawnActorInSceneCaptureWorld
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SpawnedActor                   (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnSpawnActorInSceneCaptureWorld(class AActor* SpawnedActor)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64438);

	UWeaponEquipmentSlotWidget_Gamepad_C_OnSpawnActorInSceneCaptureWorld_Params params;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetDragDroppingEquipableItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UEquipableItem*          EquipableItem                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::GetDragDroppingEquipableItem(class UEquipableItem** EquipableItem)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64434);

	UWeaponEquipmentSlotWidget_Gamepad_C_GetDragDroppingEquipableItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EquipableItem != nullptr)
		*EquipableItem = params.EquipableItem;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.FindEquipableWeaponPosition
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FEquipPosition          WeaponPosition                 (Parm, OutParm)

void UWeaponEquipmentSlotWidget_Gamepad_C::FindEquipableWeaponPosition(struct FEquipPosition* WeaponPosition)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64428);

	UWeaponEquipmentSlotWidget_Gamepad_C_FindEquipableWeaponPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponPosition != nullptr)
		*WeaponPosition = params.WeaponPosition;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.UpdateWeaponGunInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::UpdateWeaponGunInfo(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64418);

	UWeaponEquipmentSlotWidget_Gamepad_C_UpdateWeaponGunInfo_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_AmmoIcon_Prepass_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::On_AmmoIcon_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64415);

	UWeaponEquipmentSlotWidget_Gamepad_C_On_AmmoIcon_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetAmmoName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ItemName                       (Parm, OutParm)

void UWeaponEquipmentSlotWidget_Gamepad_C::GetAmmoName(struct FText* ItemName)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64406);

	UWeaponEquipmentSlotWidget_Gamepad_C_GetAmmoName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemName != nullptr)
		*ItemName = params.ItemName;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetAmmoIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UWeaponEquipmentSlotWidget_Gamepad_C::GetAmmoIcon()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64393);

	UWeaponEquipmentSlotWidget_Gamepad_C_GetAmmoIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetHandOnUnLoadedAmmoCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::GetHandOnUnLoadedAmmoCount(int* Count)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64389);

	UWeaponEquipmentSlotWidget_Gamepad_C_GetHandOnUnLoadedAmmoCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetHandOnLoadedAmmoCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::GetHandOnLoadedAmmoCount(int* Count)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64385);

	UWeaponEquipmentSlotWidget_Gamepad_C_GetHandOnLoadedAmmoCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_AmmoName_Prepass_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::On_AmmoName_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64382);

	UWeaponEquipmentSlotWidget_Gamepad_C_On_AmmoName_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_AmmoInfoLayer_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::On_AmmoInfoLayer_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64372);

	UWeaponEquipmentSlotWidget_Gamepad_C_On_AmmoInfoLayer_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_WeaponHandsOnUnloadedAmmoCount_Prepass_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::On_WeaponHandsOnUnloadedAmmoCount_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64368);

	UWeaponEquipmentSlotWidget_Gamepad_C_On_WeaponHandsOnUnloadedAmmoCount_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_WeaponHandsOnLoadedAmmoCount_Prepass_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::On_WeaponHandsOnLoadedAmmoCount_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64364);

	UWeaponEquipmentSlotWidget_Gamepad_C_On_WeaponHandsOnLoadedAmmoCount_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_WeaponName_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::On_WeaponName_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64361);

	UWeaponEquipmentSlotWidget_Gamepad_C_On_WeaponName_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_KeyName_Prepass_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::On_KeyName_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64350);

	UWeaponEquipmentSlotWidget_Gamepad_C_On_KeyName_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnUpdateWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnUpdateWeapon()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64320);

	UWeaponEquipmentSlotWidget_Gamepad_C_OnUpdateWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.On_WeaponCaptureImage_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::On_WeaponCaptureImage_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64314);

	UWeaponEquipmentSlotWidget_Gamepad_C_On_WeaponCaptureImage_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetItem_Bp
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UItem*                   Item                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::GetItem_Bp(class UItem** Item)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(65586);

	UWeaponEquipmentSlotWidget_Gamepad_C_GetItem_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.IsAttachmentSlotMouseOver
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           MouseOver                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::IsAttachmentSlotMouseOver(bool* MouseOver)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64305);

	UWeaponEquipmentSlotWidget_Gamepad_C_IsAttachmentSlotMouseOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseOver != nullptr)
		*MouseOver = params.MouseOver;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.IsSlotMouseOver_Bp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsMouseOver                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::IsSlotMouseOver_Bp(bool* IsMouseOver)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(65502);

	UWeaponEquipmentSlotWidget_Gamepad_C_IsSlotMouseOver_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsMouseOver != nullptr)
		*IsMouseOver = params.IsMouseOver;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.IsSlotSubOn_Bp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           SubOn                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::IsSlotSubOn_Bp(bool* SubOn)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(65484);

	UWeaponEquipmentSlotWidget_Gamepad_C_IsSlotSubOn_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubOn != nullptr)
		*SubOn = params.SubOn;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.IsSlotOn_Bp
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsOn                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::IsSlotOn_Bp(bool* IsOn)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(65352);

	UWeaponEquipmentSlotWidget_Gamepad_C_IsSlotOn_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOn != nullptr)
		*IsOn = params.IsOn;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (Parm)
// class UDragDropOperation**     Operation                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWeaponEquipmentSlotWidget_Gamepad_C::OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64282);

	UWeaponEquipmentSlotWidget_Gamepad_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetWeaponSlotEquipId
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EEquipSlotID                   EquipSlotID                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::GetWeaponSlotEquipId(EEquipSlotID* EquipSlotID)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64266);

	UWeaponEquipmentSlotWidget_Gamepad_C_GetWeaponSlotEquipId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EquipSlotID != nullptr)
		*EquipSlotID = params.EquipSlotID;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.MainPrepass_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::MainPrepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64246);

	UWeaponEquipmentSlotWidget_Gamepad_C_MainPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.InitializeWeaponEquipSlot
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::InitializeWeaponEquipSlot()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64222);

	UWeaponEquipmentSlotWidget_Gamepad_C_InitializeWeaponEquipSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.RefreshAttachmentSlot
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::RefreshAttachmentSlot()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64221);

	UWeaponEquipmentSlotWidget_Gamepad_C_RefreshAttachmentSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWeaponEquipmentSlotWidget_Gamepad_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64212);

	UWeaponEquipmentSlotWidget_Gamepad_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64198);

	UWeaponEquipmentSlotWidget_Gamepad_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWeaponEquipmentSlotWidget_Gamepad_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64178);

	UWeaponEquipmentSlotWidget_Gamepad_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetSlotVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UWeaponEquipmentSlotWidget_Gamepad_C::GetSlotVisibility()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64172);

	UWeaponEquipmentSlotWidget_Gamepad_C_GetSlotVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetWeaponIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UWeaponEquipmentSlotWidget_Gamepad_C::GetWeaponIcon()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64160);

	UWeaponEquipmentSlotWidget_Gamepad_C_GetWeaponIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.GetWeaponInfoText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWeaponEquipmentSlotWidget_Gamepad_C::GetWeaponInfoText()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64138);

	UWeaponEquipmentSlotWidget_Gamepad_C_GetWeaponInfoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::Construct()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(89363);

	UWeaponEquipmentSlotWidget_Gamepad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnDragEnter
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (Parm)
// class UDragDropOperation**     Operation                      (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnDragEnter(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(65205);

	UWeaponEquipmentSlotWidget_Gamepad_C_OnDragEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnDragLeave
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (Parm)
// class UDragDropOperation**     Operation                      (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnDragLeave(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(65202);

	UWeaponEquipmentSlotWidget_Gamepad_C_OnDragLeave_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(89360);

	UWeaponEquipmentSlotWidget_Gamepad_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(65200);

	UWeaponEquipmentSlotWidget_Gamepad_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnUpdateItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItem**                  Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnUpdateItem(class UItem** Item)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(65350);

	UWeaponEquipmentSlotWidget_Gamepad_C_OnUpdateItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.UpdateDragDropObject
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTslItemDragDropOperation_C** DragDropObject                 (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::UpdateDragDropObject(class UTslItemDragDropOperation_C** DragDropObject)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(65348);

	UWeaponEquipmentSlotWidget_Gamepad_C_UpdateDragDropObject_Params params;
	params.DragDropObject = DragDropObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.SetInventory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryWidget_C**     InventoryWidget                (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::SetInventory(class UInventoryWidget_C** InventoryWidget)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(65346);

	UWeaponEquipmentSlotWidget_Gamepad_C_SetInventory_Params params;
	params.InventoryWidget = InventoryWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.BndEvt__UpperRail_K2Node_ComponentBoundEvent_14_RefreshFocus__DelegateSignature
// (BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::BndEvt__UpperRail_K2Node_ComponentBoundEvent_14_RefreshFocus__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64137);

	UWeaponEquipmentSlotWidget_Gamepad_C_BndEvt__UpperRail_K2Node_ComponentBoundEvent_14_RefreshFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.BndEvt__Muzzle_K2Node_ComponentBoundEvent_16_RefreshFocus__DelegateSignature
// (BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::BndEvt__Muzzle_K2Node_ComponentBoundEvent_16_RefreshFocus__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64136);

	UWeaponEquipmentSlotWidget_Gamepad_C_BndEvt__Muzzle_K2Node_ComponentBoundEvent_16_RefreshFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.BndEvt__LowerRail_K2Node_ComponentBoundEvent_19_RefreshFocus__DelegateSignature
// (BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::BndEvt__LowerRail_K2Node_ComponentBoundEvent_19_RefreshFocus__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64135);

	UWeaponEquipmentSlotWidget_Gamepad_C_BndEvt__LowerRail_K2Node_ComponentBoundEvent_19_RefreshFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.BndEvt__Magazine_K2Node_ComponentBoundEvent_23_RefreshFocus__DelegateSignature
// (BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::BndEvt__Magazine_K2Node_ComponentBoundEvent_23_RefreshFocus__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64134);

	UWeaponEquipmentSlotWidget_Gamepad_C_BndEvt__Magazine_K2Node_ComponentBoundEvent_23_RefreshFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.BndEvt__Stock_K2Node_ComponentBoundEvent_28_RefreshFocus__DelegateSignature
// (BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::BndEvt__Stock_K2Node_ComponentBoundEvent_28_RefreshFocus__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64133);

	UWeaponEquipmentSlotWidget_Gamepad_C_BndEvt__Stock_K2Node_ComponentBoundEvent_28_RefreshFocus__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.WidgetInputBPressed
// (BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::WidgetInputBPressed()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64132);

	UWeaponEquipmentSlotWidget_Gamepad_C_WidgetInputBPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnWidgetInputBReleased
// (BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnWidgetInputBReleased()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64131);

	UWeaponEquipmentSlotWidget_Gamepad_C_OnWidgetInputBReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64128);

	UWeaponEquipmentSlotWidget_Gamepad_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnSlotMoveUp
// (BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnSlotMoveUp()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64127);

	UWeaponEquipmentSlotWidget_Gamepad_C_OnSlotMoveUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnSlotMoveDown
// (BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnSlotMoveDown()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64126);

	UWeaponEquipmentSlotWidget_Gamepad_C_OnSlotMoveDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.SlotMoveLeft
// (BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::SlotMoveLeft()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64125);

	UWeaponEquipmentSlotWidget_Gamepad_C_SlotMoveLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnSlotMoveRight
// (BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnSlotMoveRight()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64124);

	UWeaponEquipmentSlotWidget_Gamepad_C_OnSlotMoveRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::CustomEvent_1()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64123);

	UWeaponEquipmentSlotWidget_Gamepad_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnDetachItemPressed
// (BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnDetachItemPressed()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64122);

	UWeaponEquipmentSlotWidget_Gamepad_C_OnDetachItemPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnDetachItemReleased
// (BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnDetachItemReleased()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64121);

	UWeaponEquipmentSlotWidget_Gamepad_C_OnDetachItemReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnInputWidgetInputB
// (BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnInputWidgetInputB()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(65345);

	UWeaponEquipmentSlotWidget_Gamepad_C_OnInputWidgetInputB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnAttachmentFocused_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeaponAttachmentSlotID        AttachmentSlotID               (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotInterface> SlotInterface                  (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainerInterface         (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnAttachmentFocused_Event_1(EWeaponAttachmentSlotID AttachmentSlotID, const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& SlotContainerInterface)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64116);

	UWeaponEquipmentSlotWidget_Gamepad_C_OnAttachmentFocused_Event_1_Params params;
	params.AttachmentSlotID = AttachmentSlotID;
	params.SlotInterface = SlotInterface;
	params.SlotContainerInterface = SlotContainerInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.ExecuteUbergraph_WeaponEquipmentSlotWidget_Gamepad
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::ExecuteUbergraph_WeaponEquipmentSlotWidget_Gamepad(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(64002);

	UWeaponEquipmentSlotWidget_Gamepad_C_ExecuteUbergraph_WeaponEquipmentSlotWidget_Gamepad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnWeaponEquipmentFocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EEquipSlotID                   EquipSlotID                    (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotInterface> SlotInterface                  (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainerInterface         (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnWeaponEquipmentFocused__DelegateSignature(EEquipSlotID EquipSlotID, const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& SlotContainerInterface)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(63997);

	UWeaponEquipmentSlotWidget_Gamepad_C_OnWeaponEquipmentFocused__DelegateSignature_Params params;
	params.EquipSlotID = EquipSlotID;
	params.SlotInterface = SlotInterface;
	params.SlotContainerInterface = SlotContainerInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnAttachmentFocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeaponAttachmentSlotID        AttachmentSlotID               (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotInterface> SlotInterface                  (Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class USlotContainerInterface> SlotContainerInterface         (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnAttachmentFocused__DelegateSignature(EWeaponAttachmentSlotID AttachmentSlotID, const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& SlotContainerInterface)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(63992);

	UWeaponEquipmentSlotWidget_Gamepad_C_OnAttachmentFocused__DelegateSignature_Params params;
	params.AttachmentSlotID = AttachmentSlotID;
	params.SlotInterface = SlotInterface;
	params.SlotContainerInterface = SlotContainerInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnDragLeaveWeaponSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnDragLeaveWeaponSlot__DelegateSignature(int SlotIndex)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(63990);

	UWeaponEquipmentSlotWidget_Gamepad_C_OnDragLeaveWeaponSlot__DelegateSignature_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnDragEnterWeaponSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnDragEnterWeaponSlot__DelegateSignature(int SlotIndex)
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(63988);

	UWeaponEquipmentSlotWidget_Gamepad_C_OnDragEnterWeaponSlot__DelegateSignature_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad.WeaponEquipmentSlotWidget_Gamepad_C.OnReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWeaponEquipmentSlotWidget_Gamepad_C::OnReleased__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	 if (!fn) fn = UObject::GetObjectCasted<UFunction>(63987);

	UWeaponEquipmentSlotWidget_Gamepad_C_OnReleased__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
