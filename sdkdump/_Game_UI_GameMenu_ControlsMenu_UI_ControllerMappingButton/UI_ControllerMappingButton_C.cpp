#include "..\FUObjectArray.hpp"
#include "UI_ControllerMappingButton_C.hpp"
#include "..\_Game_UI_PauseMenu_UI_PauseMenuBtn_Base\UI_PauseMenuBtn_Base_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\SizeBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
void* _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C::get_CurrentButtonKey() {
    return (void*)((uintptr_t)this + 0x378);
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x338);
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C::get_CurrentActionName() {
    return (void*)((uintptr_t)this + 0x390);
}
_Script_UMG::SizeBox*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C::get_Button() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x340);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C::get_ButtonLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x348);
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C::get_LayoutPositionName() {
    return (void*)((uintptr_t)this + 0x350);
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C::get_E_OnButtonAccepted() {
    return (void*)((uintptr_t)this + 0x368);
}
bool _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C::get_DisableButtonFocus() {
    return (*(uint8_t*)((uintptr_t)this + 0x398 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C::set_DisableButtonFocus(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x398 + 0);
    *(uint8_t*)((uintptr_t)this + 0x398 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/ControlsMenu/UI_ControllerMappingButton.UI_ControllerMappingButton_C");
    return result;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C::OnAccepted() {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C::Construct() {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C::ExecuteUbergraph_UI_ControllerMappingButton(int32_t EntryPoint) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C::E_OnButtonAccepted__DelegateSignature(_Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingButton::UI_ControllerMappingButton_C* ButtonWidget) {
    return;
}
