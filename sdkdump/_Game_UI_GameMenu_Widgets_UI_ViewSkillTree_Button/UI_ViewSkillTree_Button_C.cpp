#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_GameMenu_Elements_Buttons_UI_Button_Base\UI_Button_Base_C.hpp"
#include "UI_ViewSkillTree_Button_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::Button*& _Game_UI_GameMenu_Widgets_UI_ViewSkillTree_Button::UI_ViewSkillTree_Button_C::get_ViewSkillButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x510);
}
_Script_UMG::Image*& _Game_UI_GameMenu_Widgets_UI_ViewSkillTree_Button::UI_ViewSkillTree_Button_C::get_DefaultButton_Frame() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x4f0);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_Widgets_UI_ViewSkillTree_Button::UI_ViewSkillTree_Button_C::get_OnFocus() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x4e8);
}
_Script_UMG::Image*& _Game_UI_GameMenu_Widgets_UI_ViewSkillTree_Button::UI_ViewSkillTree_Button_C::get_FocusedButton_Frame() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x4f8);
}
_Script_UMG::Image*& _Game_UI_GameMenu_Widgets_UI_ViewSkillTree_Button::UI_ViewSkillTree_Button_C::get_Image_0() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x500);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_Widgets_UI_ViewSkillTree_Button::UI_ViewSkillTree_Button_C::get_txt_ButtonText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x508);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_Widgets_UI_ViewSkillTree_Button::UI_ViewSkillTree_Button_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/Widgets/UI_ViewSkillTree_Button.UI_ViewSkillTree_Button_C");
    return result;
}
void _Game_UI_GameMenu_Widgets_UI_ViewSkillTree_Button::UI_ViewSkillTree_Button_C::UI_UpdateFocusState(bool ElementFocused, bool SubmenuFocused, bool Active, bool& ElementFocus, bool& SubMenuFocus, bool& ElementActive) {
    return;
}
void _Game_UI_GameMenu_Widgets_UI_ViewSkillTree_Button::UI_ViewSkillTree_Button_C::UpdateElementVisibility(bool& Result) {
    return;
}
void _Game_UI_GameMenu_Widgets_UI_ViewSkillTree_Button::UI_ViewSkillTree_Button_C::GetButtonText0(_Script_UMG::TextBlock*& ButtonText) {
    return;
}
