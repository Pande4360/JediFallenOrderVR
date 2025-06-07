#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget\UI_LoadableScreenWidget_C.hpp"
#include "UI_LoadableScreenWidget_Settings_Gameplay_C.hpp"
#include "..\_Game_UI_PauseMenu_UI_PauseMenuBtn_Selector\UI_PauseMenuBtn_Selector_C.hpp"
#include "..\_Game_UI_PauseMenu_UI_PauseMenuSwitch\UI_PauseMenuSwitch_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_RsTechRT\RsLine.hpp"
#include "..\_Script_SwGame\SWGameUserSettings.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\ProgressBar.hpp"
#include "..\_Script_UMG\RetainerBox.hpp"
#include "..\_Script_UMG\ScrollBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_AutoLockText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x248);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::IncrementAutoSwitch(int32_t Increment) {
    return;
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x230);
}
_Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_selLanguage() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C**)((uintptr_t)this + 0x378);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_FadeIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x238);
}
_Script_SwGame::SWGameUserSettings*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_UserSettings() {
    return *(_Script_SwGame::SWGameUserSettings**)((uintptr_t)this + 0x3c0);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selSwitch_K2Node_ComponentBoundEvent_2_ClickRight__DelegateSignature() {
    return;
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_AutoGripText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x240);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_AutoSucceedText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x250);
}
_Script_UMG::Overlay*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_AutoSwitch() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x258);
}
int32_t& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_OldLetterBoxOpacity() {
    return *(int32_t*)((uintptr_t)this + 0x460);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_AutoswitchText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x260);
}
_Script_UMG::ProgressBar*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_BarAggro() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x268);
}
_Script_UMG::ProgressBar*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_BarDmg() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x270);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::UpdateAutoSucceed() {
    return;
}
_Script_UMG::ProgressBar*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_BarParry() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x278);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_HighlightTextColor() {
    return (void*)((uintptr_t)this + 0x3f0);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::UpdateHideHud() {
    return;
}
_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_chkAutoGrip() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C**)((uintptr_t)this + 0x280);
}
_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_chkAutoLockOn() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C**)((uintptr_t)this + 0x288);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_ColorDeficiencyType() {
    return (void*)((uintptr_t)this + 0x420);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::UpdateAutoSwitch(bool SetOldValue) {
    return;
}
_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_chkAutoSucceed() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C**)((uintptr_t)this + 0x290);
}
_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_chkHeldInputUI() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C**)((uintptr_t)this + 0x298);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_OldDifficultyLevel() {
    return (void*)((uintptr_t)this + 0x419);
}
_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_chkHideHUD() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C**)((uintptr_t)this + 0x2a0);
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_RsLine_6() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x330);
}
_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_chkSubtitles() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C**)((uintptr_t)this + 0x2a8);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_DiffDescription() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2b0);
}
_Script_UMG::ScrollBox*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_ScrollBox_0() {
    return *(_Script_UMG::ScrollBox**)((uintptr_t)this + 0x360);
}
_Script_UMG::Overlay*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_Difficulty() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x2b8);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::SetColorSeverityText() {
    return;
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_DifficultyText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2c0);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_HideHUDText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2d8);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_EnemyAggroText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2c8);
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_RsLine_0() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x300);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_HeldInputUItxt() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2d0);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_InCombatText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2e0);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_IncomingDmgText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2e8);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::SetCultureImmediate() {
    return;
}
_Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_selHUDTextScale() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C**)((uintptr_t)this + 0x370);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selSwitch_K2Node_ComponentBoundEvent_36_CancelledOut__DelegateSignature() {
    return;
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_ParryWindowText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2f0);
}
_Script_UMG::RetainerBox*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_RetainerBox_0() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x2f8);
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_RsLine_1() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x308);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::UpdateSubtitleScale(bool SetOldVal) {
    return;
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_RsLine_4() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x320);
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_RsLine_2() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x310);
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_RsLine_3() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x318);
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_RsLine_5() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x328);
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_RsLine_7() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x338);
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_RsLine_8() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x340);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::DifficultyLeft() {
    return;
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_RsLine_9() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x348);
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_RsLine_10() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x350);
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_RsLine_11() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x358);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_txtHUDTextScale() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x3a8);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selHUDTextScale_K2Node_ComponentBoundEvent_31_Nav_Right__DelegateSignature() {
    return;
}
_Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_selDifficulty() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C**)((uintptr_t)this + 0x368);
}
_Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_selLetterBoxOpacity() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C**)((uintptr_t)this + 0x380);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_TextLanguageText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x3a0);
}
_Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_selSubtitleScale() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C**)((uintptr_t)this + 0x388);
}
_Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_selSwitch() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C**)((uintptr_t)this + 0x390);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_SubtitlesText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x398);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_txtSubtitleOpacity() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x3b0);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_txtSubtitleScale() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x3b8);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_DefaultTextColor() {
    return (void*)((uintptr_t)this + 0x3c8);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selSwitch_K2Node_ComponentBoundEvent_22_Nav_Right__DelegateSignature() {
    return;
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_NewDifficultyLevel() {
    return (void*)((uintptr_t)this + 0x418);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selLetterBoxOpacity_K2Node_ComponentBoundEvent_44_RsButtonEvent__DelegateSignature() {
    return;
}
int32_t& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_localInt() {
    return *(int32_t*)((uintptr_t)this + 0x430);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_BarParry_Material() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x438);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__chkAutoLockOn_K2Node_ComponentBoundEvent_50_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled) {
    return;
}
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_BarDmg_Material() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x440);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_BarAggro_Material() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x448);
}
int32_t& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_OldAutoSwitch() {
    return *(int32_t*)((uintptr_t)this + 0x458);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_Health() {
    return (void*)((uintptr_t)this + 0x450);
}
int32_t& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_OldSubtitleScale() {
    return *(int32_t*)((uintptr_t)this + 0x45c);
}
int32_t& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_OldLanguage() {
    return *(int32_t*)((uintptr_t)this + 0x464);
}
int32_t& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_OldHUDTextScale() {
    return *(int32_t*)((uintptr_t)this + 0x468);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::get_SpecialCaseSelLanguageFont() {
    return (void*)((uintptr_t)this + 0x470);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/LoadableScreenWidgets/UI_LoadableScreenWidget_Settings_Gameplay.UI_LoadableScreenWidget_Settings_Gameplay_C");
    return result;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__chkAutoGrip_K2Node_ComponentBoundEvent_25_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::UpdateUIHeldInput() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::UpdateHUDTextScale(bool SetOldVal) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::UpdateAutoGrip() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::SetupLanguageSelectors() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::UpdateRelatedTextHighlights(_Script_UMG::TextBlock* Text, bool Highlight) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::UpdateRelatedTextsHighlights(void*& Text, bool Highlight) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::UpdateLetterboxOpacity(bool SetOldVal) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::SetupText() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::MaterialInstanceSetup() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::UpdateAutoLockOn() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::SetColorDecifiencyText() {
    return;
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::GetColorSeverity() {
    return;
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::GetColorDeficiencyType() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::UpdateLanguage(void* LanguageName) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::UpdateDifficulty() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::UpdateSubtitles() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__chkHeldInputUI_K2Node_ComponentBoundEvent_26_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selDifficulty_K2Node_ComponentBoundEvent_1_Nav_Left__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selDifficulty_K2Node_ComponentBoundEvent_3_Nav_Right__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__chkSubtitles_K2Node_ComponentBoundEvent_20_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::DifficultyRight() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__chkAutoLockOn_K2Node_ComponentBoundEvent_21_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selHUDTextScale_K2Node_ComponentBoundEvent_48_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selSwitch_K2Node_ComponentBoundEvent_24_Nav_Left__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__chkHideHud_K2Node_ComponentBoundEvent_7_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::PreConstruct(bool IsDesignTime) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selLetterBoxOpacity_K2Node_ComponentBoundEvent_8_Nav_Left__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selLetterBoxOpacity_K2Node_ComponentBoundEvent_14_Nav_Right__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selSubtitleScale_K2Node_ComponentBoundEvent_17_Nav_Right__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selSubtitleScale_K2Node_ComponentBoundEvent_18_Nav_Left__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selDifficulty_K2Node_ComponentBoundEvent_27_CancelledOut__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selDifficulty_K2Node_ComponentBoundEvent_35_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::Construct() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selSwitch_K2Node_ComponentBoundEvent_34_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selSubtitleScale_K2Node_ComponentBoundEvent_39_CancelledOut__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selSubtitleScale_K2Node_ComponentBoundEvent_40_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selLetterBoxOpacity_K2Node_ComponentBoundEvent_43_CancelledOut__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::ExecuteUbergraph_UI_LoadableScreenWidget_Settings_Gameplay(int32_t EntryPoint) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selLanguage_K2Node_ComponentBoundEvent_37_Nav_Right__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selLanguage_K2Node_ComponentBoundEvent_38_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selLanguage_K2Node_ComponentBoundEvent_41_CancelledOut__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selLanguage_K2Node_ComponentBoundEvent_42_Nav_Left__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selHUDTextScale_K2Node_ComponentBoundEvent_30_Nav_Left__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selDifficulty_K2Node_ComponentBoundEvent_46_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selSwitch_K2Node_ComponentBoundEvent_47_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__chkHideHUD_K2Node_ComponentBoundEvent_52_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__chkSubtitles_K2Node_ComponentBoundEvent_53_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selSubtitleScale_K2Node_ComponentBoundEvent_54_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selLetterBoxOpacity_K2Node_ComponentBoundEvent_55_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selLanguage_K2Node_ComponentBoundEvent_56_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selSwitch_K2Node_ComponentBoundEvent_0_ClickLeft__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selSubtitleScale_K2Node_ComponentBoundEvent_6_ClickLeft__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selSubtitleScale_K2Node_ComponentBoundEvent_9_ClickRight__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selLanguage_K2Node_ComponentBoundEvent_10_ClickLeft__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selLanguage_K2Node_ComponentBoundEvent_11_ClickRight__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selLetterBoxOpacity_K2Node_ComponentBoundEvent_12_ClickLeft__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selLetterBoxOpacity_K2Node_ComponentBoundEvent_13_ClickRight__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::IncrementCulture(int32_t Increment) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selDifficulty_K2Node_ComponentBoundEvent_5_ClickRight__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selDifficulty_K2Node_ComponentBoundEvent_4_ClickLeft__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::ConfirmDifficulty() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__chkAutoSucceed_K2Node_ComponentBoundEvent_5_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__chkAutoSucceed_K2Node_ComponentBoundEvent_16_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__chkAutoGrip_K2Node_ComponentBoundEvent_23_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selHUDTextScale_K2Node_ComponentBoundEvent_28_ClickLeft__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selHUDTextScale_K2Node_ComponentBoundEvent_29_ClickRight__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selHUDTextScale_K2Node_ComponentBoundEvent_32_CancelledOut__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__selHUDTextScale_K2Node_ComponentBoundEvent_33_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay::UI_LoadableScreenWidget_Settings_Gameplay_C::BndEvt__chkHeldInputUI_K2Node_ComponentBoundEvent_40_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled) {
    return;
}
