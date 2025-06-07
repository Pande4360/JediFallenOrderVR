#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsMapSectionTag.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_SlateCore\SlateColor.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Game_UI_UI_MenuButtonPrompt {
struct UI_MenuButtonPrompt_C;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct SizeBox;
}
namespace _Script_UMG {
struct Border;
}
namespace _Script_UMG {
struct Image;
}
namespace _Game_UI_UI_HUD_ROOT {
struct UI_HUD_ROOT_C;
}
namespace _Script_UMG {
struct UniformGridPanel;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Game_UI_Messages_UI_LocationStamp {
struct UI_LocationStamp_C;
}
namespace _Game_UI_3DMap_UI_MapCursor {
struct UI_MapCursor_C;
}
namespace _Game_UI_Map_UI_MapLevelIndicator {
struct UI_MapLevelIndicator_C;
}
namespace _Script_Engine {
struct SceneCapture2D;
}
namespace _Game_Characters_Hero_Logic_BP_Hero {
struct BP_Hero_C;
}
namespace _Script_UMG {
struct Widget;
}
namespace _Game_Levels_WorldMap_BP_BP_WorldMapHologram {
struct BP_WorldMapHologram_C;
}
namespace _Script_UMG {
struct CanvasPanelSlot;
}
namespace _Game_UI_Holomap_UI_MapTutorial {
struct UI_MapTutorial_C;
}
namespace _Game_UI_3DMap_UI_MapCursorGalaxy {
struct UI_MapCursorGalaxy_C;
}
namespace _Game_UI_UI_MissionEventToast {
struct UI_MissionEventToast_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_3DMap_UI_MapMenu {
#pragma pack(push, 1)
struct UI_MapMenu_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x848]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_RedGreenBlink();
    _Script_UMG::WidgetAnimation*& get_HighlightObjective();
    _Script_UMG::HorizontalBox*& get_AdvControls();
    _Script_UMG::HorizontalBox*& get_AffirmativeBox();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_AffirmativeButton();
    _Script_UMG::TextBlock*& get_AffirmativeTxt();
    _Script_UMG::TextBlock*& get_AurebeshType();
    _Script_UMG::Border*& get_BlackBorder();
    _Script_UMG::TextBlock*& get_BlockedLabel();
    _Script_UMG::HorizontalBox*& get_BlockedPath();
    _Script_UMG::Border*& get_Border_3();
    _Script_UMG::SizeBox*& get_Button();
    _Script_UMG::Image*& get_ButtonBorder();
    _Script_UMG::UniformGridPanel*& get_ButtonHolder();
    _Script_UMG::Border*& get_ChestsBorder();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_CloseButton();
    _Script_UMG::Border*& get_CompletionPercentBorder();
    _Script_UMG::TextBlock*& get_CompletionPercentTxt();
    _Script_UMG::Border*& get_ControlsBorder();
    _Script_UMG::HorizontalBox*& get_ControlsTray();
    _Script_UMG::SizeBox*& get_CurrentPlanetButton();
    _Script_UMG::TextBlock*& get_CurrentPlanetLabel();
    _Script_UMG::Image*& get_D_PadVert();
    _Script_UMG::HorizontalBox*& get_DefaultControls();
    _Script_UMG::Image*& get_Dot1();
    _Script_UMG::Image*& get_Dot2();
    _Script_UMG::Image*& get_doublegradient();
    _Script_UMG::HorizontalBox*& get_ElevationBox();
    _Script_UMG::HorizontalBox*& get_EscapeBox();
    _Script_UMG::TextBlock*& get_EscapeTxt();
    _Script_UMG::Image*& get_ExploredComplete();
    _Script_UMG::TextBlock*& get_ExploredText();
    _Script_UMG::Image*& get_FocusedRoundedRect();
    _Script_UMG::UniformGridPanel*& get_GalaxyLegendGridPanel();
    _Script_UMG::HorizontalBox*& get_GalaxyViewButtons();
    _Script_UMG::Image*& get_Gradient();
    _Script_UMG::Image*& get_Image_5();
    _Script_UMG::Image*& get_Image_7();
    _Script_UMG::Image*& get_Image_13();
    _Script_UMG::Image*& get_Image_14();
    _Script_UMG::Image*& get_Image_15();
    _Script_UMG::Image*& get_Image_18();
    _Script_UMG::Image*& get_Image_28();
    _Script_UMG::Image*& get_Image_33();
    _Script_UMG::Image*& get_Image_35();
    _Script_UMG::Image*& get_Image_40();
    _Script_UMG::TextBlock*& get_InteriorLevelLabel();
    _Script_UMG::HorizontalBox*& get_LegendBox();
    _Script_UMG::CanvasPanel*& get_LegendCanvas();
    _Script_UMG::SizeBox*& get_LegendContainer();
    _Script_UMG::TextBlock*& get_LegendLabel();
    _Script_UMG::SizeBox*& get_LevelSwitchButton();
    _Script_UMG::Image*& get_Line();
    _Script_UMG::TextBlock*& get_MainObjectiveGalaxyLabel();
    _Script_UMG::TextBlock*& get_MainObjectiveLabel();
    _Script_UMG::HorizontalBox*& get_NewPath();
    _Script_UMG::TextBlock*& get_OpenLabel();
    _Script_UMG::HorizontalBox*& get_PanBox();
    _Script_UMG::TextBlock*& get_PercentSign();
    _Script_UMG::HorizontalBox*& get_PitchBox();
    _Script_UMG::Image*& get_PlanetChestComplete();
    _Script_UMG::HorizontalBox*& get_PlanetChestsBox();
    _Script_UMG::TextBlock*& get_PlanetChestsCurrent();
    _Script_UMG::Image*& get_PlanetChestsIcon();
    _Script_UMG::TextBlock*& get_PlanetChestsTotal();
    _Script_UMG::TextBlock*& get_PlanetLabel();
    _Script_UMG::HorizontalBox*& get_PlanetSecretsBox();
    _Script_UMG::Image*& get_PlanetSecretsComplete();
    _Script_UMG::TextBlock*& get_PlanetSecretsCurrent();
    _Script_UMG::Image*& get_PlanetSecretsIcon();
    _Script_UMG::TextBlock*& get_PlanetSecretsTotal();
    _Script_UMG::TextBlock*& get_PlayerLocationGalaxyLabel();
    _Script_UMG::TextBlock*& get_PlayerLocationLabel();
    _Script_UMG::HorizontalBox*& get_RecenterBox();
    _Script_UMG::RetainerBox*& get_RetainerBox_0();
    _Script_UMG::RetainerBox*& get_RetainerBox_1();
    _Script_UMG::RetainerBox*& get_RetainerBox_2();
    _Script_UMG::RetainerBox*& get_RetainerBox_3();
    _Script_UMG::RetainerBox*& get_RetainerBox_4();
    _Script_UMG::UniformGridPanel*& get_RoamingLegendGridPanel();
    _Script_UMG::TextBlock*& get_SavePointLabel();
    _Script_UMG::Border*& get_SecretsBorder();
    _Script_UMG::TextBlock*& get_TextBlock_0();
    _Script_UMG::TextBlock*& get_TextBlock_9();
    _Script_UMG::Image*& get_topgradient();
    _Script_UMG::RetainerBox*& get_TopLeft();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_TravelButton();
    _Script_UMG::Image*& get_TravelButton_ProgressCircle();
    _Script_UMG::TextBlock*& get_TravelButton_Text();
    _Script_UMG::SizeBox*& get_TravelButtonCenter();
    _Script_UMG::TextBlock*& get_TravelButtonLabel();
    _Script_UMG::HorizontalBox*& get_TravelContainer();
    _Script_UMG::CanvasPanel*& get_TutorialCanvas();
    _Game_UI_Messages_UI_LocationStamp::UI_LocationStamp_C*& get_UI_LocationStamp();
    _Game_UI_3DMap_UI_MapCursor::UI_MapCursor_C*& get_UI_MapCursor();
    _Game_UI_Map_UI_MapLevelIndicator::UI_MapLevelIndicator_C*& get_UI_MapLevelIndicator();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_0();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_1();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_3();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_C_1();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_C_2();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_C_3();
    _Script_UMG::TextBlock*& get_UnexploredLabel();
    _Script_UMG::TextBlock*& get_ViewPlanetButtonLabel();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_ViewPlanetMapButton();
    _Script_UMG::SizeBox*& get_ViewPlanetMapCenter();
    _Script_UMG::HorizontalBox*& get_ZoomBox();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_ZoomButtonLeft();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_ZoomButtonRight();
    bool get_CanInput();
    void set_CanInput(bool value);
    void* get_InputDetected();
    _Script_Engine::SceneCapture2D*& get_SceneCamera();
    _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& get_Hero();
    bool get_MapCameraFound();
    void set_MapCameraFound(bool value);
    _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& get_BP_Hero();
    _Script_UMG::Widget*& get_Widget();
    _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C*& get_HUDRoot();
    float& get_Low();
    float& get_High();
    bool get_SpeedMenuUp_();
    void set_SpeedMenuUp_(bool value);
    bool get_AtHolotable();
    void set_AtHolotable(bool value);
    void* get_PlanetList();
    int32_t& get_ScansCurrent();
    int32_t& get_ScansTotal();
    int32_t& get_ChestsCurrent();
    int32_t& get_ChestsTotal();
    int32_t& get_EchoesTotal();
    void* get_UI_SetInteriorLevel();
    bool get_IsButtonPushed();
    void set_IsButtonPushed(bool value);
    float& get_ScrollRate();
    _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& get_WorldMapHologram_Ref();
    bool get_IsLoading();
    void set_IsLoading(bool value);
    float& get_ProgressValue();
    _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& get_HolomapRef();
    _Script_UMG::CanvasPanelSlot*& get_RegionContainerSlot();
    int32_t& get_NewVar_0();
    int32_t& get_EchoesCurrent();
    void* get_BlueDefaultColor();
    void* get_BlueHighlightColor();
    int32_t& get_ActiveCollectTypes();
    void* get_EchoesColor();
    void* get_ScansColor();
    void* get_ChestsColor();
    void* get_RoamingPlanet();
    void* get_HolotablePlanet();
    void* get_CurrentPlanet();
    void* get_HolotableGalaxy();
    void* get_RoamingGalaxy();
    void* get_StyleSheet();
    void* get_SecretTokens();
    int32_t& get_PlanetChestsCurrentCount();
    int32_t& get_PlanetChestsTotalCount();
    int32_t& get_PlanetSecretsCurrentCount();
    int32_t& get_PlanetSecretsTotalCount();
    int32_t& get_LifeEssenceTotal();
    int32_t& get_ForceEssenceTotal();
    int32_t& get_HealCanisterTotal();
    int32_t& get_LifeEssenceCurrent();
    int32_t& get_ForceEssenceCurrent();
    int32_t& get_HealCanisterCurrent();
    bool get_IsSecretInThisRegion();
    void set_IsSecretInThisRegion(bool value);
    void* get_SelectedRegionName();
    bool get_IsToastResponse();
    void set_IsToastResponse(bool value);
    bool get_IsToastOpen();
    void set_IsToastOpen(bool value);
    void* get_RegionsWithSecrets();
    int32_t& get_RegionCompletionPercent();
    bool get_IsLegendHidden();
    void set_IsLegendHidden(bool value);
    bool get_IsLegendTutorialPlaying();
    void set_IsLegendTutorialPlaying(bool value);
    bool get_IsBoganoTutorial();
    void set_IsBoganoTutorial(bool value);
    _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C*& get_TutorialMessage();
    bool get_IsGalaxy();
    void set_IsGalaxy(bool value);
    _Game_UI_3DMap_UI_MapCursorGalaxy::UI_MapCursorGalaxy_C*& get_GalaxyCursor();
    void* get_SelectedWorld();
    void* get_MapMenuVisible();
    void* get_MapMenuHidden();
    bool get_IsMapMenuVisible();
    void set_IsMapMenuVisible(bool value);
    bool get_DoesGalaxyCursorExist();
    void set_DoesGalaxyCursorExist(bool value);
    _Game_UI_UI_MissionEventToast::UI_MissionEventToast_C*& get_MissionObjectiveHeader();
    void* get_WorldNamesMap();
    int32_t& get_SecretsCurrent();
    int32_t& get_SecretsTotal();
    void* get_PlanetNameForAurebesh();
    bool get_IsTutorialMode();
    void set_IsTutorialMode(bool value);
    void* get_LegendLabelTxt();
    static _Script_CoreUObject::Class* static_class();
    int32_t GetExplorationPercent(void*& WorldName);
    void Capitalize(_Script_UMG::TextBlock* Input);
    void GetSecretsCount(void*& Region, bool& HaveAnySecrets, int32_t& Found, int32_t& Total);
    _Script_SlateCore::SlateColor GetPlanetSecretsColor();
    _Script_SlateCore::SlateColor GetPlanetChestColor();
    void HandleContainerVisibility(int32_t A, _Script_UMG::Widget* Target, bool& IsHIdden);
    void Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void UI_SetMissionObjectiveUI_Event(void* MissionObjectiveName);
    void Construct();
    void UI_SetRegionAndTag(_Script_RsGameTechRT::RsMapSectionTag MapSectionTag, void* MapSectionTagString);
    void UI_SetInteriorLevel_Event(int32_t CurrentLevel, int32_t TotalLevels);
    void ConfirmSelection();
    void OnPlanetLoading();
    void OnPlanetLoaded();
    void Audio_OnButtonTravelButtonHoldStart();
    void Audio_OnButtonTravelButtonHoldRelease();
    void Audio_OnHoldComplete();
    void ShowHolotablePlanet(void* Region);
    void ShowRoamingPlanet();
    void HandleControlsTray();
    void UpdateMissions();
    void CollapseAllChildren();
    void ShowHolotableGalaxy();
    void ShowRoamingGalaxy();
    void AddButtonsToArrays();
    void CustomEvent_0(void* Region);
    void CustomEvent_1();
    void CustomEvent_2();
    void RemoveExistingLocationStamps();
    void OnMapClosed();
    void SetPlanetName();
    void OnMapOpen();
    void OnCollectiblesAcquired(void* CollectableType, void*& WorldName, void*& RegionName);
    void CapitalizeThings();
    void AddTutorial();
    void TutorialModeHide(bool IsTutorialMode);
    void LegendToggle();
    void GalaxyModeSwitch();
    void HandleTargetedInteriorLevel(void* TargetInteriorLevel, void* CurrentInteriorLevel);
    void HandleInteriorLevelOff();
    void MapMenuVisible_Event();
    void MapMenuHidden_Event();
    void CreateMapCursorGalaxy();
    void ButtonHandlingTick();
    void UI_Accept_is_Pushed();
    void UI_Accept_is_Released();
    void HandleUISecondaryConfirm();
    void HandleChestCompletionVisuals();
    void HandleHiddenObjectivesVisuals();
    void HandleCounters(void* RegionName, bool IsGalaxy);
    void HandleWorldCompletionVisuals();
    void UpdateLocationStampNumbers();
    void PreConstruct(bool IsDesignTime);
    void UpdateInputPrompts(void* NewInputDevice);
    void UpdateAllButtonPrompts();
    void Initialize_References_and_Event_Delegates();
    void ExecuteUbergraph_UI_MapMenu(int32_t EntryPoint);
    void MapMenuHidden__DelegateSignature();
    void MapMenuVisible__DelegateSignature();
    void UI_SetInteriorLevel__DelegateSignature(int32_t CurrentLevel);
    void InputDetected__DelegateSignature();
}; // Size: 0xe50
#pragma pack(pop)
}
