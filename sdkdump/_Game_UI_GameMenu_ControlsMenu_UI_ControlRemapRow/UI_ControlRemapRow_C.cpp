#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_GameMenu_ControlsMenu_Struct_InputRemap\Struct_InputRemap.hpp"
#include "..\_Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn\UI_ControlRemapBtn_C.hpp"
#include "UI_ControlRemapRow_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsTechRT\RsLine.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapRow::UI_ControlRemapRow_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapRow::UI_ControlRemapRow_C::StartInputRemapDelegate__DelegateSignature() {
    return;
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapRow::UI_ControlRemapRow_C::get_ActionName() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x210);
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapRow::UI_ControlRemapRow_C::ExecuteUbergraph_UI_ControlRemapRow(int32_t EntryPoint) {
    return;
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapRow::UI_ControlRemapRow_C::get_RemapData() {
    return (void*)((uintptr_t)this + 0x238);
}
_Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C*& _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapRow::UI_ControlRemapRow_C::get_Gamepad() {
    return *(_Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C**)((uintptr_t)this + 0x218);
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapRow::UI_ControlRemapRow_C::get_Action() {
    return (void*)((uintptr_t)this + 0x230);
}
_Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C*& _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapRow::UI_ControlRemapRow_C::get_PC() {
    return *(_Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C**)((uintptr_t)this + 0x220);
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapRow::UI_ControlRemapRow_C::get_RsLine_1() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x228);
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapRow::UI_ControlRemapRow_C::get_StartInputRemapDelegate() {
    return (void*)((uintptr_t)this + 0x298);
}
bool _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapRow::UI_ControlRemapRow_C::get_CanFocusPC() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a8 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapRow::UI_ControlRemapRow_C::set_CanFocusPC(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapRow::UI_ControlRemapRow_C::get_CanFocusGamepad() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a9 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapRow::UI_ControlRemapRow_C::set_CanFocusGamepad(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapRow::UI_ControlRemapRow_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/ControlsMenu/UI_ControlRemapRow.UI_ControlRemapRow_C");
    return result;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapRow::UI_ControlRemapRow_C::Initialize(void* Action, _Game_UI_GameMenu_ControlsMenu_Struct_InputRemap::Struct_InputRemap RemapData) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapRow::UI_ControlRemapRow_C::RefreshButtons() {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapRow::UI_ControlRemapRow_C::BndEvt__Gamepad_K2Node_ComponentBoundEvent_0_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapRow::UI_ControlRemapRow_C::BndEvt__PC_K2Node_ComponentBoundEvent_1_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapRow::UI_ControlRemapRow_C::BndEvt__Gamepad_K2Node_ComponentBoundEvent_2_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapRow::UI_ControlRemapRow_C::BndEvt__PC_K2Node_ComponentBoundEvent_3_RsButtonEvent__DelegateSignature() {
    return;
}
