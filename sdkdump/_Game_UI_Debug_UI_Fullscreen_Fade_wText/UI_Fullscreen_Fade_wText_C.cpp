#include "..\FUObjectArray.hpp"
#include "UI_Fullscreen_Fade_wText_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void _Game_UI_Debug_UI_Fullscreen_Fade_wText::UI_Fullscreen_Fade_wText_C::LVL_FadeIn(float Speed) {
    return;
}
void* _Game_UI_Debug_UI_Fullscreen_Fade_wText::UI_Fullscreen_Fade_wText_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Debug_UI_Fullscreen_Fade_wText::UI_Fullscreen_Fade_wText_C::get_Fade_Out() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
_Script_UMG::TextBlock*& _Game_UI_Debug_UI_Fullscreen_Fade_wText::UI_Fullscreen_Fade_wText_C::get_Text() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x228);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Debug_UI_Fullscreen_Fade_wText::UI_Fullscreen_Fade_wText_C::get_Fade_In() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x218);
}
_Script_UMG::Border*& _Game_UI_Debug_UI_Fullscreen_Fade_wText::UI_Fullscreen_Fade_wText_C::get_Border_2() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x220);
}
bool _Game_UI_Debug_UI_Fullscreen_Fade_wText::UI_Fullscreen_Fade_wText_C::get_Done() {
    return (*(uint8_t*)((uintptr_t)this + 0x230 + 0)) & 1 != 0;
}
void _Game_UI_Debug_UI_Fullscreen_Fade_wText::UI_Fullscreen_Fade_wText_C::set_Done(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x230 + 0);
    *(uint8_t*)((uintptr_t)this + 0x230 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_Debug_UI_Fullscreen_Fade_wText::UI_Fullscreen_Fade_wText_C::get_Colour() {
    return (void*)((uintptr_t)this + 0x234);
}
_Script_CoreUObject::Class* _Game_UI_Debug_UI_Fullscreen_Fade_wText::UI_Fullscreen_Fade_wText_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Debug/UI_Fullscreen_Fade_wText.UI_Fullscreen_Fade_wText_C");
    return result;
}
_Script_CoreUObject::LinearColor _Game_UI_Debug_UI_Fullscreen_Fade_wText::UI_Fullscreen_Fade_wText_C::GetBrushColor_0() {
    return;
}
void _Game_UI_Debug_UI_Fullscreen_Fade_wText::UI_Fullscreen_Fade_wText_C::isFinished_(bool& Done) {
    return;
}
void _Game_UI_Debug_UI_Fullscreen_Fade_wText::UI_Fullscreen_Fade_wText_C::Construct0() {
    return;
}
void _Game_UI_Debug_UI_Fullscreen_Fade_wText::UI_Fullscreen_Fade_wText_C::LVL_FadeOut(float Speed) {
    return;
}
void _Game_UI_Debug_UI_Fullscreen_Fade_wText::UI_Fullscreen_Fade_wText_C::LVL_SetMessage(void* InText) {
    return;
}
void _Game_UI_Debug_UI_Fullscreen_Fade_wText::UI_Fullscreen_Fade_wText_C::LVL_SetFadeManual(float Percentage) {
    return;
}
void _Game_UI_Debug_UI_Fullscreen_Fade_wText::UI_Fullscreen_Fade_wText_C::ExecuteUbergraph_UI_Fullscreen_Fade_wText(int32_t EntryPoint) {
    return;
}
