#include "..\FUObjectArray.hpp"
#include "UI_TitleScreenConfirmationPopUp_C.hpp"
#include "..\_Game_UI_UI_MenuButtonPrompt\UI_MenuButtonPrompt_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_UI_TitleScreen_UI_TitleScreenConfirmationPopUp::UI_TitleScreenConfirmationPopUp_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x608);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_TitleScreen_UI_TitleScreenConfirmationPopUp::UI_TitleScreenConfirmationPopUp_C::get_AcceptMenuButton() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x628);
}
_Script_UMG::WidgetAnimation*& _Game_UI_TitleScreen_UI_TitleScreenConfirmationPopUp::UI_TitleScreenConfirmationPopUp_C::get_BorderLoop() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x610);
}
_Script_UMG::WidgetAnimation*& _Game_UI_TitleScreen_UI_TitleScreenConfirmationPopUp::UI_TitleScreenConfirmationPopUp_C::get_FadeIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x618);
}
_Script_UMG::HorizontalBox*& _Game_UI_TitleScreen_UI_TitleScreenConfirmationPopUp::UI_TitleScreenConfirmationPopUp_C::get_AcceptButtonLayout() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x620);
}
_Script_UMG::HorizontalBox*& _Game_UI_TitleScreen_UI_TitleScreenConfirmationPopUp::UI_TitleScreenConfirmationPopUp_C::get_BackButtonLayout() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x630);
}
_Script_UMG::Border*& _Game_UI_TitleScreen_UI_TitleScreenConfirmationPopUp::UI_TitleScreenConfirmationPopUp_C::get_Background() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x638);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_TitleScreen_UI_TitleScreenConfirmationPopUp::UI_TitleScreenConfirmationPopUp_C::get_BackMenuButton() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x640);
}
_Script_UMG::TextBlock*& _Game_UI_TitleScreen_UI_TitleScreenConfirmationPopUp::UI_TitleScreenConfirmationPopUp_C::get_BodyText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x648);
}
_Script_UMG::Image*& _Game_UI_TitleScreen_UI_TitleScreenConfirmationPopUp::UI_TitleScreenConfirmationPopUp_C::get_Border() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x650);
}
_Script_UMG::HorizontalBox*& _Game_UI_TitleScreen_UI_TitleScreenConfirmationPopUp::UI_TitleScreenConfirmationPopUp_C::get_ButtonBox() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x658);
}
_Script_UMG::TextBlock*& _Game_UI_TitleScreen_UI_TitleScreenConfirmationPopUp::UI_TitleScreenConfirmationPopUp_C::get_TitleText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x660);
}
void* _Game_UI_TitleScreen_UI_TitleScreenConfirmationPopUp::UI_TitleScreenConfirmationPopUp_C::get_TitleTextResult() {
    return (void*)((uintptr_t)this + 0x668);
}
void* _Game_UI_TitleScreen_UI_TitleScreenConfirmationPopUp::UI_TitleScreenConfirmationPopUp_C::get_BodyResultText() {
    return (void*)((uintptr_t)this + 0x680);
}
void* _Game_UI_TitleScreen_UI_TitleScreenConfirmationPopUp::UI_TitleScreenConfirmationPopUp_C::get_Input_Action() {
    return (void*)((uintptr_t)this + 0x698);
}
void* _Game_UI_TitleScreen_UI_TitleScreenConfirmationPopUp::UI_TitleScreenConfirmationPopUp_C::get_E_Continue() {
    return (void*)((uintptr_t)this + 0x6a0);
}
_Script_CoreUObject::Class* _Game_UI_TitleScreen_UI_TitleScreenConfirmationPopUp::UI_TitleScreenConfirmationPopUp_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/TitleScreen/UI_TitleScreenConfirmationPopUp.UI_TitleScreenConfirmationPopUp_C");
    return result;
}
void _Game_UI_TitleScreen_UI_TitleScreenConfirmationPopUp::UI_TitleScreenConfirmationPopUp_C::Dismiss() {
    return;
}
void _Game_UI_TitleScreen_UI_TitleScreenConfirmationPopUp::UI_TitleScreenConfirmationPopUp_C::OnContinue(void* NavName, bool& Consumed) {
    return;
}
void _Game_UI_TitleScreen_UI_TitleScreenConfirmationPopUp::UI_TitleScreenConfirmationPopUp_C::UpdateConfirmation(void* TitleText, void* BodyText, void* ConfirmationAction) {
    return;
}
void _Game_UI_TitleScreen_UI_TitleScreenConfirmationPopUp::UI_TitleScreenConfirmationPopUp_C::OnWindowOpened0() {
    return;
}
void _Game_UI_TitleScreen_UI_TitleScreenConfirmationPopUp::UI_TitleScreenConfirmationPopUp_C::Construct() {
    return;
}
void _Game_UI_TitleScreen_UI_TitleScreenConfirmationPopUp::UI_TitleScreenConfirmationPopUp_C::ExecuteUbergraph_UI_TitleScreenConfirmationPopUp(int32_t EntryPoint) {
    return;
}
void _Game_UI_TitleScreen_UI_TitleScreenConfirmationPopUp::UI_TitleScreenConfirmationPopUp_C::E_Continue__DelegateSignature() {
    return;
}
