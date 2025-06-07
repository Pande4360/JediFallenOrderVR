#include "..\FUObjectArray.hpp"
#include "UI_CinematicPlaceholder_Black_Screen_C.hpp"
#include "..\_Game_UI_UI_MenuButtonPrompt\UI_MenuButtonPrompt_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MediaAssets\FileMediaSource.hpp"
#include "..\_Script_MediaAssets\MediaPlayer.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\VerticalBox.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::Border*& _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::get_FadeBorder() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x640);
}
_Script_UMG::Image*& _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::get_BlackBG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x620);
}
void* _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x608);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::get_RevealText() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x610);
}
void _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::ScreenShown() {
    return;
}
_Script_UMG::Image*& _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::get_BG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x618);
}
_Script_UMG::CanvasPanel*& _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::get_CanvasPanel_0() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x628);
}
_Script_UMG::TextBlock*& _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::get_CinematicTitle() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x630);
}
void _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::UI_FadingOut__DelegateSignature() {
    return;
}
_Script_UMG::CanvasPanel*& _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::get_ContentPanel() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x638);
}
_Script_UMG::Image*& _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::get_Horiz_Line_Bottom() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x648);
}
_Script_UMG::Image*& _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::get_Horiz_Line_Top() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x650);
}
_Script_UMG::Image*& _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::get_Noise() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x658);
}
_Script_UMG::Image*& _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::get_ProgressCircle() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x660);
}
_Script_UMG::HorizontalBox*& _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::get_SkipButtonHolder() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x668);
}
void _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::get_SkipButtonIcon() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x670);
}
_Script_UMG::Image*& _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::get_StoryboardVideo() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x678);
}
_Script_UMG::CanvasPanel*& _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::get_TimerPanel() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x680);
}
_Script_UMG::TextBlock*& _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::get_TimerText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x688);
}
void _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::set_HasMedia(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_UMG::TextBlock*& _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::get_Txt_Skip() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x690);
}
void* _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::get_UI_Done() {
    return (void*)((uintptr_t)this + 0x6a0);
}
_Script_UMG::VerticalBox*& _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::get_VerticalTextContainer() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x698);
}
bool _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::get_IsButtonPushed() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e3 + 0)) & 1 != 0;
}
void* _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::get_UI_FadedIn() {
    return (void*)((uintptr_t)this + 0x6b0);
}
void* _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::get_UI_FadingOut() {
    return (void*)((uintptr_t)this + 0x6c0);
}
float& _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::get_CinematicLength() {
    return *(float*)((uintptr_t)this + 0x6d0);
}
bool _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::get_CloseOnTimerCompleted() {
    return (*(uint8_t*)((uintptr_t)this + 0x6d4 + 0)) & 1 != 0;
}
void _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::set_CloseOnTimerCompleted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6d4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6d4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::ShowMediaTexture() {
    return;
}
_Script_MediaAssets::MediaPlayer*& _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::get_MediaPlayer() {
    return *(_Script_MediaAssets::MediaPlayer**)((uintptr_t)this + 0x6d8);
}
bool _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::get_ShouldPause() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e2 + 0)) & 1 != 0;
}
bool _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::get_HasMedia() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e0 + 0)) & 1 != 0;
}
bool _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::get_MediaReady() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e1 + 0)) & 1 != 0;
}
void _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::set_MediaReady(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::set_AllowSkipping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::set_ShouldPause(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::set_IsButtonPushed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::get_Done() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e4 + 0)) & 1 != 0;
}
void _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::set_Done(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::UpdateMediaDuration(void* OpenedUrl) {
    return;
}
bool _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::get_AllowSkipping() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e5 + 0)) & 1 != 0;
}
bool _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::get_DisableSkipWhileStreaming() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e6 + 0)) & 1 != 0;
}
bool _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::get_SkippingQuitsGame() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e7 + 0)) & 1 != 0;
}
void _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::set_DisableSkipWhileStreaming(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e6 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e6 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::set_SkippingQuitsGame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e7 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e7 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Narrative/UI_CinematicPlaceholder_Black_Screen.UI_CinematicPlaceholder_Black_Screen_C");
    return result;
}
void _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::SetScreenDark() {
    return;
}
void _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::CineLog(void* Message) {
    return;
}
void _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::UI_FadedIn__DelegateSignature() {
    return;
}
void _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::SkipClicked(void* Action, bool& Consumed) {
    return;
}
void _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::UI_Done__DelegateSignature() {
    return;
}
void _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::TriggerTimerLoop() {
    return;
}
void _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::ActivateScreen(bool FadeToBlack, float FadeInDuration, float FadeOutDuration, float CinematicLength, bool CloseOnTimerCompleted, _Script_MediaAssets::FileMediaSource* StoryboardMovieSource, bool ShowAssetName, bool PauseGame, bool AllowSkipping, bool DisableSkipWhileStreaming, bool ShowTimer, bool SkippingQuitsGame) {
    return;
}
void _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::UpdateCinematicTimerText() {
    return;
}
void _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::MediaEnded() {
    return;
}
void _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::SetCinematicTitle(void* Title) {
    return;
}
void _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::PopulateText(void*& TextStrings) {
    return;
}
void _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::CinematicDone(void* ActionName) {
    return;
}
void _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::Timer_UpdateCinematicTimerText() {
    return;
}
void _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::SkipHoldComplete(void* ActionName) {
    return;
}
void _Game_UI_Narrative_UI_CinematicPlaceholder_Black_Screen::UI_CinematicPlaceholder_Black_Screen_C::ExecuteUbergraph_UI_CinematicPlaceholder_Black_Screen(int32_t EntryPoint) {
    return;
}
