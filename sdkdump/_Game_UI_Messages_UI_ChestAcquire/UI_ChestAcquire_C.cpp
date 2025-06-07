#include "..\FUObjectArray.hpp"
#include "UI_ChestAcquire_C.hpp"
#include "..\_Game_UI_UI_MenuButtonPrompt\UI_MenuButtonPrompt_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_UMG\BackgroundBlur.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\RetainerBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::WidgetAnimation*& _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::get_Intro() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x618);
}
void _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::PreConstruct(bool IsDesignTime) {
    return;
}
void* _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x608);
}
_Script_UMG::BackgroundBlur*& _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::get_blurbox() {
    return *(_Script_UMG::BackgroundBlur**)((uintptr_t)this + 0x640);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::get_FadeIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x628);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::get_HealCanister() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x610);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::get_FadeOut() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x620);
}
void _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::OpenMenu(void* ActionName) {
    return;
}
_Script_UMG::Image*& _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::get_Backing() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x630);
}
_Script_UMG::TextBlock*& _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::get_BigText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x638);
}
_Script_UMG::TextBlock*& _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::get_HIDDENOBJECTIVELABEL() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x670);
}
_Script_UMG::HorizontalBox*& _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::get_ButtonBox() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x648);
}
_Script_UMG::CanvasPanel*& _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::get_CanvasPanel_1() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x650);
}
_Script_UMG::Image*& _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::get_Diag() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x658);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::get_UI_MenuButtonPrompt() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x6a8);
}
_Script_UMG::Image*& _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::get_FullCircle() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x660);
}
void _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::ExecuteUbergraph_UI_ChestAcquire(int32_t EntryPoint) {
    return;
}
_Script_UMG::Image*& _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::get_HalfCircle() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x668);
}
void _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::ShowBoglingCompanionAcquire() {
    return;
}
_Script_UMG::Image*& _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::get_HorizBottom() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x678);
}
_Script_UMG::Image*& _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::get_HorizTop() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x680);
}
_Script_UMG::Image*& _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::get_QuarterCircle() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x688);
}
_Script_UMG::RetainerBox*& _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::get_RetainerBox_0() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x690);
}
_Script_UMG::TextBlock*& _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::get_SmallText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x698);
}
_Script_UMG::Image*& _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::get_Strip() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6a0);
}
_Script_UMG::Image*& _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::get_Vertical() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6b0);
}
void* _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::get_DisplayName() {
    return (void*)((uintptr_t)this + 0x6b8);
}
void* _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::get_AcquiredTxt() {
    return (void*)((uintptr_t)this + 0x898);
}
void* _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::get_LVL_AbilityAcquire_Done() {
    return (void*)((uintptr_t)this + 0x6c8);
}
void* _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::get_Chest_Struct() {
    return (void*)((uintptr_t)this + 0x6d8);
}
void* _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::get_Cosmetics() {
    return (void*)((uintptr_t)this + 0x700);
}
void* _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::get_ClickThroughURL() {
    return (void*)((uintptr_t)this + 0x708);
}
void* _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::get_StyleSheet() {
    return (void*)((uintptr_t)this + 0x710);
}
void* _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::get_HealCanisterTxt() {
    return (void*)((uintptr_t)this + 0x880);
}
_Script_CoreUObject::Class* _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Messages/UI_ChestAcquire.UI_ChestAcquire_C");
    return result;
}
void _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::AnimFinished() {
    return;
}
void _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::ShowChestAcquire() {
    return;
}
void _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::ShowSeedAcquire(void* InText) {
    return;
}
void _Game_UI_Messages_UI_ChestAcquire::UI_ChestAcquire_C::LVL_AbilityAcquire_Done__DelegateSignature() {
    return;
}
