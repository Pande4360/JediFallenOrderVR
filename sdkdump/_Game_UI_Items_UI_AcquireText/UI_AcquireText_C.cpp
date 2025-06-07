#include "..\FUObjectArray.hpp"
#include "UI_AcquireText_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_UI_Items_UI_AcquireText::UI_AcquireText_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x608);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Items_UI_AcquireText::UI_AcquireText_C::get_FadeInIcon() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x610);
}
_Script_UMG::CanvasPanel*& _Game_UI_Items_UI_AcquireText::UI_AcquireText_C::get_CanvasPanel_86() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x618);
}
_Script_UMG::Image*& _Game_UI_Items_UI_AcquireText::UI_AcquireText_C::get_Image_104() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x620);
}
_Script_UMG::Image*& _Game_UI_Items_UI_AcquireText::UI_AcquireText_C::get_Img_Button() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x628);
}
_Script_UMG::Image*& _Game_UI_Items_UI_AcquireText::UI_AcquireText_C::get_linedbackplate() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x630);
}
_Script_UMG::TextBlock*& _Game_UI_Items_UI_AcquireText::UI_AcquireText_C::get_Secondary() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x638);
}
_Script_UMG::TextBlock*& _Game_UI_Items_UI_AcquireText::UI_AcquireText_C::get_Title() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x640);
}
void _Game_UI_Items_UI_AcquireText::UI_AcquireText_C::Construct() {
    return;
}
_Script_UMG::Image*& _Game_UI_Items_UI_AcquireText::UI_AcquireText_C::get_transparentbackground() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x648);
}
void* _Game_UI_Items_UI_AcquireText::UI_AcquireText_C::get_SecondaryText() {
    return (void*)((uintptr_t)this + 0x650);
}
void* _Game_UI_Items_UI_AcquireText::UI_AcquireText_C::get_TitleText() {
    return (void*)((uintptr_t)this + 0x668);
}
void* _Game_UI_Items_UI_AcquireText::UI_AcquireText_C::get_LVL_Resumed() {
    return (void*)((uintptr_t)this + 0x680);
}
_Script_CoreUObject::Class* _Game_UI_Items_UI_AcquireText::UI_AcquireText_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Items/UI_AcquireText.UI_AcquireText_C");
    return result;
}
void _Game_UI_Items_UI_AcquireText::UI_AcquireText_C::SetAcquireTextFields(void* TitleText, void* SecondaryText) {
    return;
}
void* _Game_UI_Items_UI_AcquireText::UI_AcquireText_C::GetText_1() {
    return;
}
void* _Game_UI_Items_UI_AcquireText::UI_AcquireText_C::GetText_0() {
    return;
}
void _Game_UI_Items_UI_AcquireText::UI_AcquireText_C::LVL_PauseAndWaitForAcceptInput(void* Title, void* Secondary) {
    return;
}
void _Game_UI_Items_UI_AcquireText::UI_AcquireText_C::Resume(void* ActionName) {
    return;
}
void _Game_UI_Items_UI_AcquireText::UI_AcquireText_C::ExecuteUbergraph_UI_AcquireText(int32_t EntryPoint) {
    return;
}
void _Game_UI_Items_UI_AcquireText::UI_AcquireText_C::LVL_Resumed__DelegateSignature() {
    return;
}
