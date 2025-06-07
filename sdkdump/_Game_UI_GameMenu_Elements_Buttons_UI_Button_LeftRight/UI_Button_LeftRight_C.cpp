#include "..\FUObjectArray.hpp"
#include "UI_Button_LeftRight_C.hpp"
#include "..\_Game_UI_GameMenu_SubMenus_UI_SubMenu_Base\UI_SubMenu_Base_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsUiButton.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::Image*& _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C::get_Arrow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
void* _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x258);
}
_Script_UMG::Image*& _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C::get_SolidBacking() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C::get_Hover() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C::get_Glow() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C::set_CurrentlyHovered(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C::get_Pulse() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C::get_BlueOutline() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
_Script_UMG::Button*& _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C::get_LRButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x288);
}
_Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C*& _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C::get_SubmenuBase() {
    return *(_Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C**)((uintptr_t)this + 0x298);
}
void* _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C::get_HoverButton() {
    return (void*)((uintptr_t)this + 0x2a0);
}
void* _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C::get_OnClicked() {
    return (void*)((uintptr_t)this + 0x2b0);
}
bool _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C::get_CurrentlyHovered() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c0 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/Elements/Buttons/UI_Button_LeftRight.UI_Button_LeftRight_C");
    return result;
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C::Construct() {
    return;
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C::PreConstruct(bool IsDesignTime) {
    return;
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C::BndEvt__LRButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C::Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C::ExecuteUbergraph_UI_Button_LeftRight(int32_t EntryPoint) {
    return;
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C::OnClicked__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C::HoverButton__DelegateSignature() {
    return;
}
