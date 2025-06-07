#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsMapSectionTag.hpp"
#include "..\_Script_RsGameTechRT\RsUiRoot.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_UMG {
struct Border;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Game_UI_UI_HUD_HealthMeter {
struct UI_HUD_HealthMeter_C;
}
namespace _Script_UMG {
struct ScaleBox;
}
namespace _Game_UI_UI_HUD_XP_HorizontalBar {
struct UI_HUD_XP_HorizontalBar_C;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Game_UI_UI_HUD_RevivePip {
struct UI_HUD_RevivePip_C;
}
namespace _Script_UMG {
struct VerticalBox;
}
namespace _Game_UI_UI_ButtonScreenSpace {
struct UI_ButtonScreenSpace_C;
}
namespace _Game_UI_UI_DamageTakenEffect {
struct UI_DamageTakenEffect_C;
}
namespace _Game_UI_HUD_UI_ForceHealCounter {
struct UI_ForceHealCounter_C;
}
namespace _Game_UI_Debug_UI_Fullscreen_Fade_wText {
struct UI_Fullscreen_Fade_wText_C;
}
namespace _Game_UI_UI_HUD_GripMeter {
struct UI_HUD_GripMeter_C;
}
namespace _Game_UI_UI_HUD_LightSaberSwitch {
struct UI_HUD_LightSaberSwitch_C;
}
namespace _Game_UI_3DMap_UI_MapMenu {
struct UI_MapMenu_C;
}
namespace _Script_RsGameTechRT {
struct RsAIGameStateManager;
}
namespace _Game_UI_UI_MenuButtonPrompt {
struct UI_MenuButtonPrompt_C;
}
namespace _Game_UI_Tutorials_UI_SimpleMessage {
struct UI_SimpleMessage_C;
}
namespace _Script_UMG {
struct CanvasPanelSlot;
}
namespace _Game_UI_Subtitles_UI_SubtitleManager {
struct UI_SubtitleManager_C;
}
namespace _Game_UI_Tutorials_UI_TutorialCustom {
struct UI_TutorialCustom_C;
}
namespace _Game_UI_Tutorials_UI_TutorialPopUp {
struct UI_TutorialPopUp_C;
}
namespace _Game_UI_UI_HUD_ForceMeter {
struct UI_HUD_ForceMeter_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_UI_HUD_BossMeter {
struct UI_HUD_BossMeter_C;
}
namespace _Game_UI_UI_HUD_ROOT {
#pragma pack(push, 1)
struct UI_HUD_ROOT_C : public _Script_RsGameTechRT::RsUiRoot {
    private: char pad_2a0[0x238]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_DynamicHUD();
    _Script_UMG::WidgetAnimation*& get_StaminaHighlight();
    _Script_UMG::WidgetAnimation*& get_ForceHighlight();
    _Script_UMG::WidgetAnimation*& get_BorderFade();
    _Script_UMG::WidgetAnimation*& get_HUDFadeOut();
    _Script_UMG::WidgetAnimation*& get_HUDFadeIn();
    _Script_UMG::Border*& get_Border_1();
    _Script_UMG::ScaleBox*& get_CustomTutorialScaleBox();
    _Script_UMG::Image*& get_Dot();
    _Script_UMG::Image*& get_DotR();
    _Script_UMG::Image*& get_EndcapLeft();
    _Script_UMG::CanvasPanel*& get_ForceCanvas();
    _Script_UMG::TextBlock*& get_HealNumber();
    _Script_UMG::TextBlock*& get_HealPct();
    _Script_UMG::HorizontalBox*& get_HealthBar();
    _Script_UMG::HorizontalBox*& get_HealthBoxCompact();
    _Script_UMG::CanvasPanel*& get_HealthCluster();
    _Script_UMG::ScaleBox*& get_InteractPromptScaleBox();
    _Script_UMG::CanvasPanel*& get_LocationStampCanvas();
    _Script_UMG::CanvasPanel*& get_MainCanvas();
    _Script_UMG::CanvasPanel*& get_PlayerBars();
    _Script_UMG::Border*& get_PlayerHUDContainer();
    _Game_UI_UI_HUD_RevivePip::UI_HUD_RevivePip_C*& get_TEMP_UI_HUD_RevivePip_TEMP();
    _Script_UMG::CanvasPanel*& get_TopCanvas();
    _Script_UMG::VerticalBox*& get_TutorialVertBox();
    _Game_UI_UI_ButtonScreenSpace::UI_ButtonScreenSpace_C*& get_UI_ButtonScreenSpace_InteractPrompt();
    _Game_UI_UI_DamageTakenEffect::UI_DamageTakenEffect_C*& get_UI_DamageTakenEffect();
    _Game_UI_HUD_UI_ForceHealCounter::UI_ForceHealCounter_C*& get_UI_ForceHealCounter_82();
    _Game_UI_Debug_UI_Fullscreen_Fade_wText::UI_Fullscreen_Fade_wText_C*& get_UI_Fullscreen_Fade_wText();
    _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C*& get_UI_HUD_GripMeter();
    _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C*& get_UI_HUD_HealthMeter();
    _Game_UI_UI_HUD_LightSaberSwitch::UI_HUD_LightSaberSwitch_C*& get_UI_HUD_LightSaberSwitch();
    _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C*& get_UI_HUD_XP_HorizontalBar();
    _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C*& get_UI_MapMenu();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt();
    _Game_UI_Tutorials_UI_SimpleMessage::UI_SimpleMessage_C*& get_UI_SimpleMessage();
    _Game_UI_Subtitles_UI_SubtitleManager::UI_SubtitleManager_C*& get_UI_SubtitleManager();
    _Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C*& get_UI_TutorialCustom();
    _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C*& get_UI_TutorialPopUp();
    _Script_UMG::VerticalBox*& get_VerticalBox_StackingBottomElements();
    _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C*& get_W_ForceMeter_2();
    float& get_ScrollRate();
    float& get_DamageTaken();
    float& get_HealthIncrementSize();
    float& get_MapZoom();
    float& get_OpacityRate();
    float& get_HealthMeter();
    float& get_HealthMeterOld();
    float& get_HealthPercent();
    int32_t& get_NumberOfSwings();
    int32_t& get_HitsTaken();
    int32_t& get_KilledCount();
    int32_t& get_HUDStyle();
    int32_t& get_DeathCount();
    void* get_RegionName();
    bool get_ShowGameStats();
    void set_ShowGameStats(bool value);
    bool get_AutoHideForceMeter();
    void set_AutoHideForceMeter(bool value);
    void* get_UpdateHealth();
    bool get_MapCameraFound();
    void set_MapCameraFound(bool value);
    bool get_UIUp();
    void set_UIUp(bool value);
    bool get_MapMenuExists();
    void set_MapMenuExists(bool value);
    bool get_IsTickOn();
    void set_IsTickOn(bool value);
    bool get_IsHUDVisible();
    void set_IsHUDVisible(bool value);
    bool get_IsHUDHidden();
    void set_IsHUDHidden(bool value);
    bool get_HideHUDBool();
    void set_HideHUDBool(bool value);
    bool get_InCombat();
    void set_InCombat(bool value);
    void* get_MAP_UpdateMapUI();
    bool get_IsUpgradingHealth();
    void set_IsUpgradingHealth(bool value);
    bool get_IsBraccaMode();
    void set_IsBraccaMode(bool value);
    void* get_MAP_ClosedMap();
    void* get_MAP_UpdateInteriorLevel();
    _Script_UMG::CanvasPanelSlot*& get_HealthCanvasPanel();
    _Script_UMG::CanvasPanelSlot*& get_ForceCanvasPanel();
    void* get_HUDVisibilityChanged();
    bool get_SettingsHideHUD();
    void set_SettingsHideHUD(bool value);
    bool get_IsUpgradingForce();
    void set_IsUpgradingForce(bool value);
    void* get_E_LoadGameMissingContent();
    void* get_E_LoadGameFailed();
    bool get_IsBossMeterCreated();
    void set_IsBossMeterCreated(bool value);
    static _Script_CoreUObject::Class* static_class();
    void* Get_MainCanvas_Visibility_0();
    void RemoveBossHealthbar();
    void CreateBossHealthbar(_Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C*& BossMeterRef);
    void HandleQuitToTitle();
    void ShowUITutorialPopup(int32_t ZOrder, _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C*& Popup);
    void HideInteractPrompt();
    void ShowInteractPrompt(void* Type, void* Text);
    void ShowCustomTutorial(_Game_UI_Tutorials_UI_TutorialCustom::UI_TutorialCustom_C*& Tutorial);
    void SetHealthMeterSize();
    void BarReferenceSetup();
    void HealthBarUpgrade();
    _Script_UMG::CanvasPanelSlot* Get_HealthMeterCanvases();
    _Script_UMG::CanvasPanelSlot* GetForceMeterCanvases();
    void Construct();
    void Update_UI();
    void UpdateForceHealPotCount(bool RefillPipByPip);
    void showHeatlhBar(bool Show_);
    void showForceBar(bool Show_);
    void ShowMapMenu();
    void CloseMapMenu();
    void ShowHUD();
    void HideHUD();
    void HandleHealthPipVisibility();
    void NewXPGain(bool IsRevenge);
    void Game_State_Changed(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager, void* PreviousGameState, void* NewGameState);
    void BorderFadeIn();
    void BorderFadeOut();
    void HighlightSaberType(void* LightsaberType);
    void ConfirmLightsaberType();
    void DamageFeedback(float Blend);
    void ResetXPZero();
    void MAP_UpdateMapUI_Event();
    void UI_UpdateRegionAndTag(_Script_RsGameTechRT::RsMapSectionTag MapSectionTag, void* MapSectionTagString);
    void SetReviveEquipped(bool FirstReviveObtained, bool Equipped, int32_t TotalRevives);
    void PauseStamina(bool IsStaminaPaused);
    void ForcePointSpent(int32_t CurrentUnspentPoints);
    void Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void MAP_UpdateInteriorLevel_Event(int32_t CurrentLevel, int32_t TotalLevels);
    void UpgradeHealthUI();
    void Enter_Low_Health();
    void ExitLowHealth();
    void FakeDamageFeedback(float DamageMultiplier);
    void iResetXPZero();
    void iForcePointSpent(int32_t CurrentUnspentPoints);
    void iNewXPGain(bool IsRevenge);
    void iSetSettingsHideHUD(bool HideHUD);
    void UpgradeForceUI();
    void ShowXPBeginPlay();
    void CreateTutorialMessageHUDRoot(void* TutorialMessageRowName, int32_t ZOrder, float AutoDestructDelay, bool DismissOnPress, bool PauseGame, bool DeathScreen);
    void OnSaveGameFailed0();
    void OnLoadGameMissingContent0();
    void OnLoadGameFailed0(bool bHasBackup);
    void SetSubtitleManagerVisibility(bool Visible);
    void HUDScaleUpdated(int32_t Value);
    void ExecuteUbergraph_UI_HUD_ROOT(int32_t EntryPoint);
    void E_LoadGameFailed__DelegateSignature(bool HasBackup);
    void E_LoadGameMissingContent__DelegateSignature();
    void HUDVisibilityChanged__DelegateSignature(bool IsHUD_Visible);
    void MAP_UpdateInteriorLevel__DelegateSignature(int32_t CurrentLevel, int32_t TotalLevels);
    void MAP_ClosedMap__DelegateSignature();
    void MAP_UpdateMapUI__DelegateSignature();
    void UpdateHealth__DelegateSignature();
}; // Size: 0x4d8
#pragma pack(pop)
}
