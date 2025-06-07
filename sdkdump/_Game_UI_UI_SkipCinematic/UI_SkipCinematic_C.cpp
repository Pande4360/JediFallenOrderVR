#include "..\FUObjectArray.hpp"
#include "UI_SkipCinematic_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\ProgressBar.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_UI_UI_SkipCinematic::UI_SkipCinematic_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_SkipCinematic::UI_SkipCinematic_C::get_FadeToGame() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
_Script_UMG::CanvasPanel*& _Game_UI_UI_SkipCinematic::UI_SkipCinematic_C::get_Canvas() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x228);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_SkipCinematic::UI_SkipCinematic_C::get_FadeToBlack() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x218);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_SkipCinematic::UI_SkipCinematic_C::get_FadeSkipButton() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x220);
}
_Script_UMG::ProgressBar*& _Game_UI_UI_SkipCinematic::UI_SkipCinematic_C::get_SkipProgress() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x238);
}
_Script_UMG::Border*& _Game_UI_UI_SkipCinematic::UI_SkipCinematic_C::get_MainContainer() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x230);
}
_Script_UMG::TextBlock*& _Game_UI_UI_SkipCinematic::UI_SkipCinematic_C::get_TextBlock_151() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x240);
}
_Script_UMG::TextBlock*& _Game_UI_UI_SkipCinematic::UI_SkipCinematic_C::get_Txt_CannotSkip() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x248);
}
bool _Game_UI_UI_SkipCinematic::UI_SkipCinematic_C::get_IsButtonHeld() {
    return (*(uint8_t*)((uintptr_t)this + 0x250 + 0)) & 1 != 0;
}
void _Game_UI_UI_SkipCinematic::UI_SkipCinematic_C::set_IsButtonHeld(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x250 + 0);
    *(uint8_t*)((uintptr_t)this + 0x250 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_UI_SkipCinematic::UI_SkipCinematic_C::get_SuccessfulSkip() {
    return (*(uint8_t*)((uintptr_t)this + 0x251 + 0)) & 1 != 0;
}
void _Game_UI_UI_SkipCinematic::UI_SkipCinematic_C::OnButtonRelease() {
    return;
}
void _Game_UI_UI_SkipCinematic::UI_SkipCinematic_C::set_SuccessfulSkip(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x251 + 0);
    *(uint8_t*)((uintptr_t)this + 0x251 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_UI_SkipCinematic::UI_SkipCinematic_C::get_ButtonEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x252 + 0)) & 1 != 0;
}
void _Game_UI_UI_SkipCinematic::UI_SkipCinematic_C::set_ButtonEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x252 + 0);
    *(uint8_t*)((uintptr_t)this + 0x252 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_UI_UI_SkipCinematic::UI_SkipCinematic_C::get_SkipProgressAmount() {
    return *(float*)((uintptr_t)this + 0x268);
}
void* _Game_UI_UI_SkipCinematic::UI_SkipCinematic_C::get_LVL_CinematicSkipTriggered() {
    return (void*)((uintptr_t)this + 0x258);
}
bool _Game_UI_UI_SkipCinematic::UI_SkipCinematic_C::get_SkipPermitted() {
    return (*(uint8_t*)((uintptr_t)this + 0x26c + 0)) & 1 != 0;
}
void _Game_UI_UI_SkipCinematic::UI_SkipCinematic_C::set_SkipPermitted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x26c + 0);
    *(uint8_t*)((uintptr_t)this + 0x26c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_UI_SkipCinematic::UI_SkipCinematic_C::get_RTPC_Cinematic_Skip() {
    return (void*)((uintptr_t)this + 0x270);
}
_Script_CoreUObject::Class* _Game_UI_UI_SkipCinematic::UI_SkipCinematic_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/UI_SkipCinematic.UI_SkipCinematic_C");
    return result;
}
void _Game_UI_UI_SkipCinematic::UI_SkipCinematic_C::PermitSkipping(bool Permitted) {
    return;
}
void* _Game_UI_UI_SkipCinematic::UI_SkipCinematic_C::Get_SkipProgress_Visibility_0() {
    return;
}
void* _Game_UI_UI_SkipCinematic::UI_SkipCinematic_C::Get_Txt_CannotSkip_Visibility_0() {
    return;
}
void _Game_UI_UI_SkipCinematic::UI_SkipCinematic_C::Construct0() {
    return;
}
void _Game_UI_UI_SkipCinematic::UI_SkipCinematic_C::OnButtonPress() {
    return;
}
void _Game_UI_UI_SkipCinematic::UI_SkipCinematic_C::Anim_SkipButtonCompleted() {
    return;
}
void _Game_UI_UI_SkipCinematic::UI_SkipCinematic_C::OnAnimationFinished_Event_0() {
    return;
}
void _Game_UI_UI_SkipCinematic::UI_SkipCinematic_C::Anim_FadeToGame() {
    return;
}
void _Game_UI_UI_SkipCinematic::UI_SkipCinematic_C::timeOutSkipDisable() {
    return;
}
void _Game_UI_UI_SkipCinematic::UI_SkipCinematic_C::ExecuteUbergraph_UI_SkipCinematic(int32_t EntryPoint) {
    return;
}
void _Game_UI_UI_SkipCinematic::UI_SkipCinematic_C::EnableSkipButton() {
    return;
}
void _Game_UI_UI_SkipCinematic::UI_SkipCinematic_C::LVL_FadeToGame() {
    return;
}
void _Game_UI_UI_SkipCinematic::UI_SkipCinematic_C::LVL_CinematicSkipTriggered__DelegateSignature() {
    return;
}
