#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_3DMap_UI_MapMenu\UI_MapMenu_C.hpp"
#include "..\_Game_UI_Debug_UI_Fullscreen_Fade_wText\UI_Fullscreen_Fade_wText_C.hpp"
#include "..\_Game_UI_HUD_UI_ForceHealCounter\UI_ForceHealCounter_C.hpp"
#include "..\_Game_UI_Subtitles_UI_SubtitleManager\UI_SubtitleManager_C.hpp"
#include "..\_Game_UI_Tutorials_UI_SimpleMessage\UI_SimpleMessage_C.hpp"
#include "..\_Game_UI_Tutorials_UI_TutorialCustom\UI_TutorialCustom_C.hpp"
#include "..\_Game_UI_Tutorials_UI_TutorialPopUp\UI_TutorialPopUp_C.hpp"
#include "..\_Game_UI_UI_ButtonScreenSpace\UI_ButtonScreenSpace_C.hpp"
#include "..\_Game_UI_UI_DamageTakenEffect\UI_DamageTakenEffect_C.hpp"
#include "..\_Game_UI_UI_HUD_BossMeter\UI_HUD_BossMeter_C.hpp"
#include "..\_Game_UI_UI_HUD_ForceMeter\UI_HUD_ForceMeter_C.hpp"
#include "..\_Game_UI_UI_HUD_GripMeter\UI_HUD_GripMeter_C.hpp"
#include "..\_Game_UI_UI_HUD_HealthMeter\UI_HUD_HealthMeter_C.hpp"
#include "..\_Game_UI_UI_HUD_LightSaberSwitch\UI_HUD_LightSaberSwitch_C.hpp"
#include "UI_HUD_ROOT_C.hpp"
#include "..\_Game_UI_UI_HUD_RevivePip\UI_HUD_RevivePip_C.hpp"
#include "..\_Game_UI_UI_HUD_XP_HorizontalBar\UI_HUD_XP_HorizontalBar_C.hpp"
#include "..\_Game_UI_UI_MenuButtonPrompt\UI_MenuButtonPrompt_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsAIGameStateManager.hpp"
#include "..\_Script_RsGameTechRT\RsMapSectionTag.hpp"
#include "..\_Script_RsGameTechRT\RsUiRoot.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\CanvasPanelSlot.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\ScaleBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\VerticalBox.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::WidgetAnimation*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_ForceHighlight() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x2b8);
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::set_HideHUDBool(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44e + 0);
    *(uint8_t*)((uintptr_t)this + 0x44e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x2a0);
}
_Game_UI_UI_HUD_LightSaberSwitch::UI_HUD_LightSaberSwitch_C*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_UI_HUD_LightSaberSwitch() {
    return *(_Game_UI_UI_HUD_LightSaberSwitch::UI_HUD_LightSaberSwitch_C**)((uintptr_t)this + 0x3a0);
}
float& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_HealthIncrementSize() {
    return *(float*)((uintptr_t)this + 0x3f8);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_DynamicHUD() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x2a8);
}
_Script_UMG::Border*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_Border_1() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x2d8);
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::set_IsBraccaMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x461 + 0);
    *(uint8_t*)((uintptr_t)this + 0x461 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_UMG::HorizontalBox*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_HealthBar() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x318);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_StaminaHighlight() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x2b0);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_BorderFade() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x2c0);
}
void* _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_RegionName() {
    return (void*)((uintptr_t)this + 0x428);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_HUDFadeOut() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x2c8);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_HUDFadeIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x2d0);
}
_Game_UI_Debug_UI_Fullscreen_Fade_wText::UI_Fullscreen_Fade_wText_C*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_UI_Fullscreen_Fade_wText() {
    return *(_Game_UI_Debug_UI_Fullscreen_Fade_wText::UI_Fullscreen_Fade_wText_C**)((uintptr_t)this + 0x388);
}
_Script_UMG::ScaleBox*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_CustomTutorialScaleBox() {
    return *(_Script_UMG::ScaleBox**)((uintptr_t)this + 0x2e0);
}
_Script_UMG::Image*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_Dot() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2e8);
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::set_IsTickOn(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44b + 0);
    *(uint8_t*)((uintptr_t)this + 0x44b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_UI_MenuButtonPrompt() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x3b8);
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::MAP_UpdateMapUI__DelegateSignature() {
    return;
}
_Script_UMG::Image*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_DotR() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2f0);
}
void* _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_UpdateHealth() {
    return (void*)((uintptr_t)this + 0x438);
}
_Script_UMG::Image*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_EndcapLeft() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2f8);
}
_Script_UMG::CanvasPanel*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_ForceCanvas() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x300);
}
int32_t& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_HUDStyle() {
    return *(int32_t*)((uintptr_t)this + 0x41c);
}
bool _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_MapMenuExists() {
    return (*(uint8_t*)((uintptr_t)this + 0x44a + 0)) & 1 != 0;
}
_Script_UMG::TextBlock*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_HealNumber() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x308);
}
_Script_UMG::TextBlock*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_HealPct() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x310);
}
_Script_UMG::HorizontalBox*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_HealthBoxCompact() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x320);
}
_Game_UI_UI_ButtonScreenSpace::UI_ButtonScreenSpace_C*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_UI_ButtonScreenSpace_InteractPrompt() {
    return *(_Game_UI_UI_ButtonScreenSpace::UI_ButtonScreenSpace_C**)((uintptr_t)this + 0x370);
}
_Game_UI_UI_DamageTakenEffect::UI_DamageTakenEffect_C*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_UI_DamageTakenEffect() {
    return *(_Game_UI_UI_DamageTakenEffect::UI_DamageTakenEffect_C**)((uintptr_t)this + 0x378);
}
bool _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_IsHUDVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x44c + 0)) & 1 != 0;
}
_Script_UMG::CanvasPanel*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_HealthCluster() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x328);
}
_Script_UMG::ScaleBox*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_InteractPromptScaleBox() {
    return *(_Script_UMG::ScaleBox**)((uintptr_t)this + 0x330);
}
_Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_UI_MapMenu() {
    return *(_Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C**)((uintptr_t)this + 0x3b0);
}
_Script_UMG::CanvasPanel*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_LocationStampCanvas() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x338);
}
_Script_UMG::CanvasPanel*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_MainCanvas() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x340);
}
float& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_OpacityRate() {
    return *(float*)((uintptr_t)this + 0x400);
}
_Script_UMG::CanvasPanel*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_PlayerBars() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x348);
}
_Script_UMG::Border*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_PlayerHUDContainer() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x350);
}
bool _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_UIUp() {
    return (*(uint8_t*)((uintptr_t)this + 0x449 + 0)) & 1 != 0;
}
_Script_UMG::VerticalBox*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_VerticalBox_StackingBottomElements() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x3e0);
}
bool _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_ShowGameStats() {
    return (*(uint8_t*)((uintptr_t)this + 0x430 + 0)) & 1 != 0;
}
_Game_UI_UI_HUD_RevivePip::UI_HUD_RevivePip_C*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_TEMP_UI_HUD_RevivePip_TEMP() {
    return *(_Game_UI_UI_HUD_RevivePip::UI_HUD_RevivePip_C**)((uintptr_t)this + 0x358);
}
_Script_UMG::CanvasPanel*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_TopCanvas() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x360);
}
int32_t& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_KilledCount() {
    return *(int32_t*)((uintptr_t)this + 0x418);
}
_Script_UMG::VerticalBox*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_TutorialVertBox() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x368);
}
_Game_UI_HUD_UI_ForceHealCounter::UI_ForceHealCounter_C*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_UI_ForceHealCounter_82() {
    return *(_Game_UI_HUD_UI_ForceHealCounter::UI_ForceHealCounter_C**)((uintptr_t)this + 0x380);
}
float& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_HealthPercent() {
    return *(float*)((uintptr_t)this + 0x40c);
}
_Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_UI_HUD_XP_HorizontalBar() {
    return *(_Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C**)((uintptr_t)this + 0x3a8);
}
_Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_UI_HUD_GripMeter() {
    return *(_Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C**)((uintptr_t)this + 0x390);
}
float& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_HealthMeter() {
    return *(float*)((uintptr_t)this + 0x404);
}
_Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_UI_HUD_HealthMeter() {
    return *(_Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C**)((uintptr_t)this + 0x398);
}
_Game_UI_Tutorials_UI_SimpleMessage::UI_SimpleMessage_C*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_UI_SimpleMessage() {
    return *(_Game_UI_Tutorials_UI_SimpleMessage::UI_SimpleMessage_C**)((uintptr_t)this + 0x3c0);
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::iForcePointSpent(int32_t CurrentUnspentPoints) {
    return;
}
_Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_UI_SubtitleManager() {
    return *(_Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C**)((uintptr_t)this + 0x3c8);
}
_Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_UI_TutorialCustom() {
    return *(_Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C**)((uintptr_t)this + 0x3d0);
}
_Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_UI_TutorialPopUp() {
    return *(_Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C**)((uintptr_t)this + 0x3d8);
}
float& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_ScrollRate() {
    return *(float*)((uintptr_t)this + 0x3f0);
}
_Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_W_ForceMeter_2() {
    return *(_Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C**)((uintptr_t)this + 0x3e8);
}
float& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_HealthMeterOld() {
    return *(float*)((uintptr_t)this + 0x408);
}
float& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_DamageTaken() {
    return *(float*)((uintptr_t)this + 0x3f4);
}
int32_t& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_HitsTaken() {
    return *(int32_t*)((uintptr_t)this + 0x414);
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::UpgradeForceUI() {
    return;
}
float& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_MapZoom() {
    return *(float*)((uintptr_t)this + 0x3fc);
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
int32_t& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_NumberOfSwings() {
    return *(int32_t*)((uintptr_t)this + 0x410);
}
int32_t& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_DeathCount() {
    return *(int32_t*)((uintptr_t)this + 0x420);
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::set_ShowGameStats(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x430 + 0);
    *(uint8_t*)((uintptr_t)this + 0x430 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_AutoHideForceMeter() {
    return (*(uint8_t*)((uintptr_t)this + 0x431 + 0)) & 1 != 0;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::set_AutoHideForceMeter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x431 + 0);
    *(uint8_t*)((uintptr_t)this + 0x431 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_MapCameraFound() {
    return (*(uint8_t*)((uintptr_t)this + 0x448 + 0)) & 1 != 0;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::Game_State_Changed(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager, void* PreviousGameState, void* NewGameState) {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::set_MapCameraFound(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x448 + 0);
    *(uint8_t*)((uintptr_t)this + 0x448 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::set_UIUp(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x449 + 0);
    *(uint8_t*)((uintptr_t)this + 0x449 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::set_MapMenuExists(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44a + 0);
    *(uint8_t*)((uintptr_t)this + 0x44a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::ConfirmLightsaberType() {
    return;
}
bool _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_IsTickOn() {
    return (*(uint8_t*)((uintptr_t)this + 0x44b + 0)) & 1 != 0;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::set_IsHUDVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44c + 0);
    *(uint8_t*)((uintptr_t)this + 0x44c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_IsHUDHidden() {
    return (*(uint8_t*)((uintptr_t)this + 0x44d + 0)) & 1 != 0;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::set_IsHUDHidden(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44d + 0);
    *(uint8_t*)((uintptr_t)this + 0x44d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_HideHUDBool() {
    return (*(uint8_t*)((uintptr_t)this + 0x44e + 0)) & 1 != 0;
}
bool _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_InCombat() {
    return (*(uint8_t*)((uintptr_t)this + 0x44f + 0)) & 1 != 0;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::ExecuteUbergraph_UI_HUD_ROOT(int32_t EntryPoint) {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::set_InCombat(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44f + 0);
    *(uint8_t*)((uintptr_t)this + 0x44f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_MAP_UpdateMapUI() {
    return (void*)((uintptr_t)this + 0x450);
}
bool _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_IsUpgradingHealth() {
    return (*(uint8_t*)((uintptr_t)this + 0x460 + 0)) & 1 != 0;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::set_IsUpgradingHealth(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x460 + 0);
    *(uint8_t*)((uintptr_t)this + 0x460 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_IsBraccaMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x461 + 0)) & 1 != 0;
}
void* _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_MAP_ClosedMap() {
    return (void*)((uintptr_t)this + 0x468);
}
void* _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_MAP_UpdateInteriorLevel() {
    return (void*)((uintptr_t)this + 0x478);
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::NewXPGain(bool IsRevenge) {
    return;
}
_Script_UMG::CanvasPanelSlot*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_HealthCanvasPanel() {
    return *(_Script_UMG::CanvasPanelSlot**)((uintptr_t)this + 0x488);
}
_Script_UMG::CanvasPanelSlot*& _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_ForceCanvasPanel() {
    return *(_Script_UMG::CanvasPanelSlot**)((uintptr_t)this + 0x490);
}
void* _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_HUDVisibilityChanged() {
    return (void*)((uintptr_t)this + 0x498);
}
bool _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_SettingsHideHUD() {
    return (*(uint8_t*)((uintptr_t)this + 0x4a8 + 0)) & 1 != 0;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::set_SettingsHideHUD(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_IsUpgradingForce() {
    return (*(uint8_t*)((uintptr_t)this + 0x4a9 + 0)) & 1 != 0;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::set_IsUpgradingForce(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4a9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4a9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_E_LoadGameMissingContent() {
    return (void*)((uintptr_t)this + 0x4b0);
}
void* _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_E_LoadGameFailed() {
    return (void*)((uintptr_t)this + 0x4c0);
}
bool _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::get_IsBossMeterCreated() {
    return (*(uint8_t*)((uintptr_t)this + 0x4d0 + 0)) & 1 != 0;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::set_IsBossMeterCreated(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/UI_HUD_ROOT.UI_HUD_ROOT_C");
    return result;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::BorderFadeOut() {
    return;
}
void* _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::Get_MainCanvas_Visibility_0() {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::RemoveBossHealthbar() {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::CreateBossHealthbar(_Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C*& BossMeterRef) {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::HandleQuitToTitle() {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::ShowUITutorialPopup(int32_t ZOrder, _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C*& Popup) {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::HideInteractPrompt() {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::ShowInteractPrompt(void* Type, void* Text) {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::ShowCustomTutorial(_Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C*& Tutorial) {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::SetHealthMeterSize() {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::BarReferenceSetup() {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::HealthBarUpgrade() {
    return;
}
_Script_UMG::CanvasPanelSlot* _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::Get_HealthMeterCanvases() {
    return;
}
_Script_UMG::CanvasPanelSlot* _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::GetForceMeterCanvases() {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::Construct() {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::Update_UI() {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::UpdateForceHealPotCount(bool RefillPipByPip) {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::showHeatlhBar(bool Show_) {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::showForceBar(bool Show_) {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::ShowMapMenu() {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::CloseMapMenu() {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::ShowHUD() {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::HideHUD() {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::HandleHealthPipVisibility() {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::BorderFadeIn() {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::HighlightSaberType(void* LightsaberType) {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::DamageFeedback(float Blend) {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::ResetXPZero() {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::MAP_UpdateMapUI_Event() {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::UI_UpdateRegionAndTag(_Script_RsGameTechRT::RsMapSectionTag MapSectionTag, void* MapSectionTagString) {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::SetReviveEquipped(bool FirstReviveObtained, bool Equipped, int32_t TotalRevives) {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::PauseStamina(bool IsStaminaPaused) {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::ForcePointSpent(int32_t CurrentUnspentPoints) {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::MAP_UpdateInteriorLevel_Event(int32_t CurrentLevel, int32_t TotalLevels) {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::UpgradeHealthUI() {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::Enter_Low_Health() {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::ExitLowHealth() {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::FakeDamageFeedback(float DamageMultiplier) {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::iResetXPZero() {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::iNewXPGain(bool IsRevenge) {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::iSetSettingsHideHUD(bool HideHUD) {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::ShowXPBeginPlay() {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::CreateTutorialMessageHUDRoot(void* TutorialMessageRowName, int32_t ZOrder, float AutoDestructDelay, bool DismissOnPress, bool PauseGame, bool DeathScreen) {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::OnSaveGameFailed0() {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::OnLoadGameMissingContent0() {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::OnLoadGameFailed0(bool bHasBackup) {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::SetSubtitleManagerVisibility(bool Visible) {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::HUDScaleUpdated(int32_t Value) {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::E_LoadGameFailed__DelegateSignature(bool HasBackup) {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::E_LoadGameMissingContent__DelegateSignature() {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::HUDVisibilityChanged__DelegateSignature(bool IsHUD_Visible) {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::MAP_ClosedMap__DelegateSignature() {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::MAP_UpdateInteriorLevel__DelegateSignature(int32_t CurrentLevel, int32_t TotalLevels) {
    return;
}
void _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C::UpdateHealth__DelegateSignature() {
    return;
}
