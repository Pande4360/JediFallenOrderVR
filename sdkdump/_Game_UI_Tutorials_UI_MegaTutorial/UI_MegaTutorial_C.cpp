#include "..\FUObjectArray.hpp"
#include "UI_MegaTutorial_C.hpp"
#include "..\_Game_UI_UI_MenuButtonPrompt\UI_MenuButtonPrompt_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_RsTechRT\RsLine.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\RetainerBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
#include "..\_Script_UMG\WidgetSwitcher.hpp"
void* _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x608);
}
void _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::ExecuteUbergraph_UI_MegaTutorial(int32_t EntryPoint) {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::get_Fade_InOut() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x610);
}
_Script_UMG::TextBlock*& _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::get_InteractText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x638);
}
void* _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::get_Dismissed() {
    return (void*)((uintptr_t)this + 0x728);
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::get_Dot() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x630);
}
_Script_UMG::TextBlock*& _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::get_InteractText2() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x640);
}
_Script_UMG::Button*& _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::get_Button_0() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x618);
}
_Script_UMG::HorizontalBox*& _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::get_ButtonPage1() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x620);
}
void _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::Second_Press() {
    return;
}
void* _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::get_ST_MegaTutorial() {
    return (void*)((uintptr_t)this + 0x6d0);
}
_Script_UMG::HorizontalBox*& _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::get_ButtonPage2() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x628);
}
void _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::PageTwo() {
    return;
}
_Script_RsTechRT::RsLine*& _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::get_LeftLine() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x648);
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::get_Linework() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x650);
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::get_Page1_Off() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x658);
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::get_Page1_On() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x660);
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::get_Page2_On() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x670);
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::get_Page2_Off() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x668);
}
_Script_UMG::RetainerBox*& _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::get_RetainerBox_0() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x678);
}
_Script_RsTechRT::RsLine*& _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::get_RsLine_0() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x680);
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::get_Screenshot1() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x688);
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::get_Screenshot2() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x690);
}
_Script_UMG::WidgetSwitcher*& _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::get_SwitcherPage1() {
    return *(_Script_UMG::WidgetSwitcher**)((uintptr_t)this + 0x698);
}
_Script_UMG::WidgetSwitcher*& _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::get_SwitcherPage2() {
    return *(_Script_UMG::WidgetSwitcher**)((uintptr_t)this + 0x6a0);
}
_Script_CoreUObject::Class* _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Tutorials/UI_MegaTutorial.UI_MegaTutorial_C");
    return result;
}
_Script_UMG::TextBlock*& _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::get_Text1() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x6a8);
}
void _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::Dismiss() {
    return;
}
_Script_UMG::TextBlock*& _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::get_Text2() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x6b0);
}
_Script_UMG::TextBlock*& _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::get_Title() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x6b8);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::get_UI_MenuButtonPrompt() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x6c0);
}
void _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::TextToUpper() {
    return;
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::get_UI_MenuButtonPrompt_C_0() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x6c8);
}
bool _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::get_1_of_2() {
    return (*(uint8_t*)((uintptr_t)this + 0x738 + 0)) & 1 != 0;
}
void _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::PageOne() {
    return;
}
void _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::set_1_of_2(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x738 + 0);
    *(uint8_t*)((uintptr_t)this + 0x738 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::get_2_of_2() {
    return (*(uint8_t*)((uintptr_t)this + 0x739 + 0)) & 1 != 0;
}
void _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::set_2_of_2(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x739 + 0);
    *(uint8_t*)((uintptr_t)this + 0x739 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::Initialize(void* NewParam) {
    return;
}
void _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::Construct() {
    return;
}
void _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::First_Press() {
    return;
}
void _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
    return;
}
void _Game_UI_Tutorials_UI_MegaTutorial::UI_MegaTutorial_C::Dismissed__DelegateSignature() {
    return;
}
