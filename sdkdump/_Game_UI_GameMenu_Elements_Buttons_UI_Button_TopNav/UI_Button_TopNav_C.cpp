#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_GameMenu_Elements_Buttons_UI_Button_Base\UI_Button_Base_C.hpp"
#include "UI_Button_TopNav_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\RetainerBox.hpp"
#include "..\_Script_UMG\SizeBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\VerticalBox.hpp"
_Script_UMG::SizeBox*& _Game_UI_GameMenu_Elements_Buttons_UI_Button_TopNav::UI_Button_TopNav_C::get_Button() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x4f0);
}
void* _Game_UI_GameMenu_Elements_Buttons_UI_Button_TopNav::UI_Button_TopNav_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x4e8);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_Elements_Buttons_UI_Button_TopNav::UI_Button_TopNav_C::get_Widget_ButtonText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x510);
}
_Script_UMG::Image*& _Game_UI_GameMenu_Elements_Buttons_UI_Button_TopNav::UI_Button_TopNav_C::get_Image_1() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x4f8);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_Elements_Buttons_UI_Button_TopNav::UI_Button_TopNav_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/Elements/Buttons/UI_Button_TopNav.UI_Button_TopNav_C");
    return result;
}
_Script_UMG::HorizontalBox*& _Game_UI_GameMenu_Elements_Buttons_UI_Button_TopNav::UI_Button_TopNav_C::get_Pagination() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x500);
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_TopNav::UI_Button_TopNav_C::GetFocusedRoundedRect0(_Script_UMG::Image*& FocusedRoundedRect) {
    return;
}
_Script_UMG::VerticalBox*& _Game_UI_GameMenu_Elements_Buttons_UI_Button_TopNav::UI_Button_TopNav_C::get_VerticalBox_0() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x508);
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_TopNav::UI_Button_TopNav_C::GetRetainerBox0(_Script_UMG::RetainerBox*& RetainerBox) {
    return;
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_TopNav::UI_Button_TopNav_C::GetButtonText0(_Script_UMG::TextBlock*& ButtonText) {
    return;
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_TopNav::UI_Button_TopNav_C::Construct() {
    return;
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_TopNav::UI_Button_TopNav_C::Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_TopNav::UI_Button_TopNav_C::UpdateUnreadState(bool Unread) {
    return;
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_TopNav::UI_Button_TopNav_C::ExecuteUbergraph_UI_Button_TopNav(int32_t EntryPoint) {
    return;
}
