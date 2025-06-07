#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_GameMenu_Elements_Buttons_UI_Button_LoadableSubWidgetOpener\UI_Button_LoadableSubWidgetOpener_C.hpp"
#include "..\_Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget\UI_LoadableScreenWidget_C.hpp"
#include "UI_LoadableScreenWidget_Settings_Visuals_C.hpp"
#include "..\_Game_UI_PauseMenu_UI_PauseMenuBtn_Selector\UI_PauseMenuBtn_Selector_C.hpp"
#include "..\_Game_UI_PauseMenu_UI_PauseMenuSwitch\UI_PauseMenuSwitch_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsTechRT\RsLine.hpp"
#include "..\_Script_SwGame\SWGameUserSettings.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\RetainerBox.hpp"
#include "..\_Script_UMG\ScrollBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\VerticalBox.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
#include "..\_Script_UMG\WidgetSwitcher.hpp"
_Script_UMG::WidgetSwitcher*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_ConsoleOrPC() {
    return *(_Script_UMG::WidgetSwitcher**)((uintptr_t)this + 0x2e8);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_FadeIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x238);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::UpdateShake() {
    return;
}
_Script_UMG::Overlay*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_PerformanceMode() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x340);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x230);
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_RsLine_1() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x358);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_BrightnessConsoleText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x250);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__btnColorTypeConsole_K2Node_ComponentBoundEvent_61_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled) {
    return;
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_PerfModeDescription() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x338);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_AbberationConsoleText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x240);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__btnChromaticAberration_K2Node_ComponentBoundEvent_65_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled) {
    return;
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_FilmGrainText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2f8);
}
_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_btnChromaticAberration() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C**)((uintptr_t)this + 0x260);
}
int32_t& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_OldColorSeverity() {
    return *(int32_t*)((uintptr_t)this + 0x5ec);
}
_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_btnMotionBlurConsole() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_AbberationText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x248);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_MotionBlurText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x310);
}
_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_btnAberrationConsole() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C**)((uintptr_t)this + 0x258);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_ConsoleResolutions() {
    return (void*)((uintptr_t)this + 0x3f8);
}
_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_btnShakeConsole() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C**)((uintptr_t)this + 0x2b8);
}
_Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_btnColorSeverity() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C**)((uintptr_t)this + 0x268);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::GetShake() {
    return;
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_ColorSeverityText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2d8);
}
_Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_btnColorSeverityConsole() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C**)((uintptr_t)this + 0x270);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_ldOpenGamma() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x300);
}
_Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_btnColorType() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C**)((uintptr_t)this + 0x278);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__btnColorType_K2Node_ComponentBoundEvent_2_Nav_Left__DelegateSignature() {
    return;
}
_Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_btnColorTypeConsole() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C**)((uintptr_t)this + 0x280);
}
_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_btnFilmGrain() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C**)((uintptr_t)this + 0x288);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__ColorTypeBtn_K2Node_ComponentBoundEvent_48_Nav_Left__DelegateSignature() {
    return;
}
_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_btnFilmGrainConsole() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C**)((uintptr_t)this + 0x290);
}
_Script_UMG::VerticalBox*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_VerticalBox_0() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x3d0);
}
_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_btnMotionBlur() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C**)((uintptr_t)this + 0x298);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__btnPerfMode_K2Node_ComponentBoundEvent_74_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled) {
    return;
}
_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_btnPerfMode() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C**)((uintptr_t)this + 0x2a8);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__btnColorType_K2Node_ComponentBoundEvent_82_CancelledOut__DelegateSignature() {
    return;
}
_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_btnShake() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C**)((uintptr_t)this + 0x2b0);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__btnVsyncConsole_K2Node_ComponentBoundEvent_10_RsButtonEvent__DelegateSignature() {
    return;
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_ColorblindConsoleText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2c0);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_ColorblindTypeText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2c8);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_ColorSeverityConsoleText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2d0);
}
_Script_UMG::CanvasPanel*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_Console_Settings() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x2e0);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::SetGammaText() {
    return;
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_FilmGrainConsoleText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2f0);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_MotionBlurConsoleText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x308);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_SettingsTextColor() {
    return (void*)((uintptr_t)this + 0x478);
}
_Game_UI_GameMenu_Elements_Buttons_UI_Button_LoadableSubWidgetOpener::UI_Button_LoadableSubWidgetOpener_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_OpenBrightness() {
    return *(_Game_UI_GameMenu_Elements_Buttons_UI_Button_LoadableSubWidgetOpener::UI_Button_LoadableSubWidgetOpener_C**)((uintptr_t)this + 0x318);
}
bool _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::IsMotionBlurEnabled() {
    return;
}
_Game_UI_GameMenu_Elements_Buttons_UI_Button_LoadableSubWidgetOpener::UI_Button_LoadableSubWidgetOpener_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_OpenBrightnessConsole() {
    return *(_Game_UI_GameMenu_Elements_Buttons_UI_Button_LoadableSubWidgetOpener::UI_Button_LoadableSubWidgetOpener_C**)((uintptr_t)this + 0x320);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::AdjustBrightness(bool Increase_) {
    return;
}
_Script_UMG::CanvasPanel*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_PCSettings() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x328);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_PerfModeConsoleText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x330);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_AAQuality() {
    return (void*)((uintptr_t)this + 0x418);
}
_Script_UMG::RetainerBox*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_RetainerBox_0() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x348);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__btnFilmGrain_K2Node_ComponentBoundEvent_68_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled) {
    return;
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_RsLine_0() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x350);
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_RsLine_2() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x360);
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_RsLine_3() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x368);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__OpenBrightnessConsole_K2Node_ComponentBoundEvent_86_RsButtonEvent__DelegateSignature() {
    return;
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_RsLine_5() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x370);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::GetBrightness() {
    return;
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_RsLine_7() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x378);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__btnColorType_K2Node_ComponentBoundEvent_60_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled) {
    return;
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_RsLine_8() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x380);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__OpenBrightness_K2Node_ComponentBoundEvent_85_RsButtonEvent__DelegateSignature() {
    return;
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_RsLine_9() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x388);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__ColorSeverityBtn_K2Node_ComponentBoundEvent_50_Nav_Left__DelegateSignature() {
    return;
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_RsLine_10() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x390);
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_RsLine_11() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x398);
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_RsLine_12() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x3a0);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__btnColorSeverityConsole_K2Node_ComponentBoundEvent_78_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled) {
    return;
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_RsLine_13() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x3a8);
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_RsLine_14() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x3b0);
}
_Script_UMG::ScrollBox*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_ScrollBox_1() {
    return *(_Script_UMG::ScrollBox**)((uintptr_t)this + 0x3b8);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_ShakeConsoleText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x3c0);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__btnFilmGrainConsole_K2Node_ComponentBoundEvent_5_RsButtonEvent__DelegateSignature() {
    return;
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_ShakeText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x3c8);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_Resolutions() {
    return (void*)((uintptr_t)this + 0x3d8);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::SetupButtonText() {
    return;
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_Quality() {
    return (void*)((uintptr_t)this + 0x3e8);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_ColorDeficiencyType() {
    return (void*)((uintptr_t)this + 0x408);
}
_Script_SwGame::SWGameUserSettings*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_SWGame_UserSettings() {
    return *(_Script_SwGame::SWGameUserSettings**)((uintptr_t)this + 0x5f0);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_DefaultTextColor() {
    return (void*)((uintptr_t)this + 0x428);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_HighlightTextColor() {
    return (void*)((uintptr_t)this + 0x450);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::get_OldColorType() {
    return (void*)((uintptr_t)this + 0x5e8);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/LoadableScreenWidgets/UI_LoadableScreenWidget_Settings_Visuals.UI_LoadableScreenWidget_Settings_Visuals_C");
    return result;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::UpdateTextHighlights(bool Highlights, _Script_UMG::TextBlock* Text) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::SetPerfModeToggle() {
    return;
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::IsPerfModeEnabled() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::SetupConsoleText() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::SetupText() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::SetColorTypeText() {
    return;
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::GetColorType() {
    return;
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::GetColorSeverity() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::SetColorSeverityText() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::SetCameraShakeToggle() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::SetAberrationToggle() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::SetFilmGrainToggle() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::SetMotionBlurToggle() {
    return;
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::Get_btnHDROutput_Visibility_0() {
    return;
}
bool _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::Get_btnHDROutput_bIsEnabled_0() {
    return;
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::IsChromaticAberrationEnabled() {
    return;
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::IsFilmGrainEnabled() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::IsConsole(bool& IsConsole) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__btnFilmGrain_K2Node_ComponentBoundEvent_23_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__btnChromaticAberration_K2Node_ComponentBoundEvent_24_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__btnSave_K2Node_ComponentBoundEvent_39_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__btnConsoleSave_K2Node_ComponentBoundEvent_40_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__btnMotionBlur_K2Node_ComponentBoundEvent_3_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::Construct() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__btnMotionBlurConsole_K2Node_ComponentBoundEvent_1_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__btnAberrationConsole_K2Node_ComponentBoundEvent_8_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__btnShake_K2Node_ComponentBoundEvent_4_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__btnShakeConsole_K2Node_ComponentBoundEvent_0_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__ColorTypeBtn_K2Node_ComponentBoundEvent_49_Nav_Right__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__ColorSeverityBtn_K2Node_ComponentBoundEvent_51_Nav_Right__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__btnColorType_K2Node_ComponentBoundEvent_6_Nav_Right__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__btnColorSeverity_K2Node_ComponentBoundEvent_11_Nav_Right__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__btnColorSeverity_K2Node_ComponentBoundEvent_13_Nav_Left__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::PreConstruct(bool IsDesignTime) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__btnColorTypeConsole_K2Node_ComponentBoundEvent_58_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__btnColorTypeConsole_K2Node_ComponentBoundEvent_59_CancelledOut__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__btnColorSeverity_K2Node_ComponentBoundEvent_62_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__btnColorSeverity_K2Node_ComponentBoundEvent_63_CancelledOut__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__btnAberrationConsole_K2Node_ComponentBoundEvent_64_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__btnColorSeverity_K2Node_ComponentBoundEvent_66_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__btnFilmGrainConsole_K2Node_ComponentBoundEvent_69_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__btnMotionBlur_K2Node_ComponentBoundEvent_72_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__btnMotionBlurConsole_K2Node_ComponentBoundEvent_73_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__btnShake_K2Node_ComponentBoundEvent_75_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__btnShakeConsole_K2Node_ComponentBoundEvent_76_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__btnColorSeverityConsole_K2Node_ComponentBoundEvent_79_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__btnFilmGrain_K2Node_ComponentBoundEvent_80_CancelledOut__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__btnColorType_K2Node_ComponentBoundEvent_81_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__OpenBrightness_K2Node_ComponentBoundEvent_83_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::BndEvt__OpenBrightnessConsole_K2Node_ComponentBoundEvent_84_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals::UI_LoadableScreenWidget_Settings_Visuals_C::ExecuteUbergraph_UI_LoadableScreenWidget_Settings_Visuals(int32_t EntryPoint) {
    return;
}
