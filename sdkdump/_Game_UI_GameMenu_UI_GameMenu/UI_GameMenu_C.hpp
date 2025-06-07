#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Script_UMG {
struct BackgroundBlur;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_UMG {
struct Border;
}
namespace _Script_UMG {
struct Image;
}
namespace _Game_UI_GameMenu_SubMenus_UI_SubMenu_TopNav {
struct UI_SubMenu_TopNav_C;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_RsGameTechRT {
struct RsUiButton;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Game_UI_UI_MenuButtonPrompt {
struct UI_MenuButtonPrompt_C;
}
namespace _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities {
struct UI_SubMenu_Abilities_C;
}
namespace _Game_UI_GameMenu_SubMenus_UI_SubMenu_CarouselTile {
struct UI_SubMenu_CarouselTile_C;
}
namespace _Game_UI_GameMenu_SubMenus_UI_SubMenu_CustomizationContainer {
struct UI_SubMenu_CustomizationContainer_C;
}
namespace _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook {
struct UI_SubMenu_DatabankBook_C;
}
namespace _Game_UI_GameMenu_SubMenus_UI_SubMenu_DebugContainer {
struct UI_SubMenu_DebugContainer_C;
}
namespace _Game_UI_GameMenu_SubMenus_UI_SubMenu_LeftNav {
struct UI_SubMenu_LeftNav_C;
}
namespace _Game_UI_GameMenu_SubMenus_UI_SubMenu_SettingsContainer {
struct UI_SubMenu_SettingsContainer_C;
}
namespace _Game_UI_GameMenu_SubMenus_UI_SubMenu_SkillTree {
struct UI_SubMenu_SkillTree_C;
}
namespace _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideCarousel {
struct UI_SubMenu_TacticalGuideCarousel_C;
}
namespace _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail {
struct UI_SubMenu_TacticalGuideDetail_C;
}
namespace _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base {
struct UI_SubMenu_Base_C;
}
namespace _Game_UI_GameMenu_SubMenus_UI_StarChartAnim {
struct UI_StarChartAnim_C;
}
namespace _Game_UI_GameMenu_SubMenus_UI_StarChartAnim2 {
struct UI_StarChartAnim2_C;
}
namespace _Game_UI_GameMenu_SubMenus_UI_StarChartAnim3 {
struct UI_StarChartAnim3_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_UI_GameMenu {
#pragma pack(push, 1)
struct UI_GameMenu_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x428]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_HeaderFadeIn();
    _Script_UMG::WidgetAnimation*& get_SettingFadeIn();
    _Script_UMG::WidgetAnimation*& get_TactGuideFadeIn();
    _Script_UMG::WidgetAnimation*& get_CarouselFadeIn();
    _Script_UMG::WidgetAnimation*& get_SettingsNext();
    _Script_UMG::WidgetAnimation*& get_SettingPrev();
    _Script_UMG::WidgetAnimation*& get_TactGuidePrev();
    _Script_UMG::WidgetAnimation*& get_TactGuideNext();
    _Script_UMG::WidgetAnimation*& get_CarouselPrev();
    _Script_UMG::WidgetAnimation*& get_CarouselNext();
    _Script_UMG::WidgetAnimation*& get_ReshowLeftNav();
    _Script_UMG::WidgetAnimation*& get_DataEntryModalBlur();
    _Script_UMG::WidgetAnimation*& get_HeaderTextSlideLeft();
    _Script_UMG::WidgetAnimation*& get_HeaderTextSlide();
    _Script_UMG::WidgetAnimation*& get_Intro();
    _Script_UMG::HorizontalBox*& get_AcceptButton();
    _Script_UMG::BackgroundBlur*& get_BackgroundBlur_0();
    _Script_UMG::Border*& get_Border_0();
    _Script_UMG::Image*& get_BottomMask();
    _Script_UMG::HorizontalBox*& get_ButtonTray();
    _Script_UMG::Overlay*& get_HeaderText();
    _Script_UMG::Image*& get_M_Noise();
    _Script_UMG::Image*& get_M_Noise2();
    _Script_UMG::HorizontalBox*& get_MarkAllRead();
    _Script_UMG::Image*& get_PanningBG();
    _Script_UMG::CanvasPanel*& get_ParentCanvas();
    _Script_UMG::RetainerBox*& get_SectionHeader_Retainer();
    _Script_UMG::TextBlock*& get_SectionTitle();
    _Script_UMG::TextBlock*& get_SectionTitleBacking();
    _Script_UMG::Image*& get_SolidColor();
    _Script_UMG::Image*& get_TopNavBacking();
    _Script_UMG::TextBlock*& get_txt_Accept();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_C_0();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_C_1();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_C_3();
    _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C*& get_UI_SubMenu_Abilities();
    _Game_UI_GameMenu_SubMenus_UI_SubMenu_CarouselTile::UI_SubMenu_CarouselTile_C*& get_UI_SubMenu_CarouselTile();
    _Game_UI_GameMenu_SubMenus_UI_SubMenu_CustomizationContainer::UI_SubMenu_CustomizationContainer_C*& get_UI_SubMenu_CustomizationContainer();
    _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C*& get_UI_SubMenu_DatabankBook();
    _Game_UI_GameMenu_SubMenus_UI_SubMenu_DebugContainer::UI_SubMenu_DebugContainer_C*& get_UI_SubMenu_DebugContainer();
    _Game_UI_GameMenu_SubMenus_UI_SubMenu_LeftNav::UI_SubMenu_LeftNav_C*& get_UI_SubMenu_LeftNav();
    _Game_UI_GameMenu_SubMenus_UI_SubMenu_SettingsContainer::UI_SubMenu_SettingsContainer_C*& get_UI_SubMenu_SettingsContainer();
    _Game_UI_GameMenu_SubMenus_UI_SubMenu_SkillTree::UI_SubMenu_SkillTree_C*& get_UI_SubMenu_SkillTree();
    _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideCarousel::UI_SubMenu_TacticalGuideCarousel_C*& get_UI_SubMenu_TacticalGuideCarousel();
    _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C*& get_UI_SubMenu_TacticalGuideDetail();
    _Game_UI_GameMenu_SubMenus_UI_SubMenu_TopNav::UI_SubMenu_TopNav_C*& get_UI_SubMenu_TopNav();
    void* get_URL();
    _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C*& get_FocusedSubMenu();
    bool get_Initialized();
    void set_Initialized(bool value);
    void* get_FocusGroupsToSubmenus();
    _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C*& get_DefaultCentralSubmenu();
    float& get_Tracking();
    void* get_QueuedTagRequest();
    _Script_RsGameTechRT::RsUiButton*& get_QueuedTagRequestButton();
    void* get_QueuedActionTimer();
    bool get_Closed();
    void set_Closed(bool value);
    bool get_IgnoreGameMenuNav();
    void set_IgnoreGameMenuNav(bool value);
    float& get_CurrentPosition();
    float& get_TargetPosition();
    bool get_IsNextTab();
    void set_IsNextTab(bool value);
    bool get_IsPrevTab();
    void set_IsPrevTab(bool value);
    float& get_ScrollingRate();
    float& get_AlphaValue();
    void* get_StyleSheet();
    bool get_DoesCancelExitMenu();
    void set_DoesCancelExitMenu(bool value);
    bool get_IsLockedToSettingsSubMenu();
    void set_IsLockedToSettingsSubMenu(bool value);
    _Game_UI_GameMenu_SubMenus_UI_StarChartAnim::UI_StarChartAnim_C*& get_StarChartAnim1();
    _Game_UI_GameMenu_SubMenus_UI_StarChartAnim2::UI_StarChartAnim2_C*& get_StarChartAnim2();
    float& get_PlayAtTime();
    float& get_EndAtTime();
    float& get_HeroPlayAtTime();
    float& get_HeroEndAtTime();
    _Game_UI_GameMenu_SubMenus_UI_StarChartAnim::UI_StarChartAnim_C*& get_StarChartAnim1Alt();
    _Game_UI_GameMenu_SubMenus_UI_StarChartAnim3::UI_StarChartAnim3_C*& get_StarChart3();
    void* get_StartTime();
    void* get_NewlyFocusedCosmetic();
    void* get_PreviousURL();
    static _Script_CoreUObject::Class* static_class();
    void UMG_GetTargetURL(_Script_GameplayTags::GameplayTag& TargetURL);
    void UMG_UpdateURL(_Script_GameplayTags::GameplayTag NewUrl, bool& Result);
    void SetAcceptLabelText(void* newText);
    void PlayPrev();
    void PlayNext();
    void StopAllAnims();
    void ClearUnreadMarkers(_Script_GameplayTags::GameplayTag RootURL);
    void CreateStarCharts();
    void PlayLineworkSlideAnim(bool NextTab);
    void PlayHeroSlideAnim(bool NextTab);
    void LockToSettingsSubMenu();
    void ClickThroughRequest(_Script_GameplayTags::GameplayTag URL, void* FocusedCosmetic);
    _Script_CoreUObject::LinearColor GetColorAndOpacity_0();
    void SetScrollingRate();
    void InitInputActions();
    void SwapInputActions(void* ActionName);
    void ResetControllerToDefault(void* ActionName);
    void InputActionPressed(void* ActionName, bool& Consumed);
    void QueueURLRequest(_Script_GameplayTags::GameplayTag URL, _Script_RsGameTechRT::RsUiButton* RequestingButton);
    void SetSectionName();
    void InitDefaultCentralSubmenu();
    void RequestLoadWidget(void* WidgetToLoad, void* FocusGroupToLoadInto, bool AlsoMoveFocus);
    void ClaimFocus(_Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C* SubMenu);
    void InitializeSubMenus();
    void TryChangeFocusedSubMenu(_Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C* NewFocusedSubMenu);
    void DoNav(void* NavName, bool& Consumed);
    void InitializeNav();
    void Construct();
    void OnWindowClosed0();
    void OnWindowOpened0();
    void Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void UpdateControlsTrayButtons();
    void ExecuteUbergraph_UI_GameMenu(int32_t EntryPoint);
}; // Size: 0xa30
#pragma pack(pop)
}
