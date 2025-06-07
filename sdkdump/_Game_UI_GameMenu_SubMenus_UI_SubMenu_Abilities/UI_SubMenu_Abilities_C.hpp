#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_GameMenu_SubMenus_UI_SubMenu_Base\UI_SubMenu_Base_C.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Script_UMG {
struct VerticalBox;
}
namespace _Game_UI_GameMenu_Widgets_UI_AbilityNode {
struct UI_AbilityNode_C;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct GridPanel;
}
namespace _Script_UMG {
struct Image;
}
namespace _Game_UI_UI_MenuButtonPrompt {
struct UI_MenuButtonPrompt_C;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_RsTechRT {
struct RsLine;
}
namespace _Game_UI_GameMenu_Widgets_UI_ViewSkillTree_Button {
struct UI_ViewSkillTree_Button_C;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Script_UMG {
struct WidgetSwitcher;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_UI_GameMenu_SubMenus_UI_StarChartAnim {
struct UI_StarChartAnim_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsUiButton;
}
namespace _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities {
#pragma pack(push, 1)
struct UI_SubMenu_Abilities_C : public _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C {
    private: char pad_278[0x190]; public:
    void* get_UberGraphFrame0();
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Script_UMG::WidgetAnimation*& get_FadeSkillTreeBtn();
    _Script_UMG::WidgetAnimation*& get_FadeOut();
    _Script_UMG::WidgetAnimation*& get_SlidePrev();
    _Script_UMG::WidgetAnimation*& get_SlideNext();
    _Script_UMG::WidgetAnimation*& get_Intro();
    _Script_UMG::VerticalBox*& get_AbilityDescription();
    _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C*& get_BD_Hack();
    _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C*& get_BD_Heal();
    _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C*& get_BD_Holomap();
    _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C*& get_BD_Overcharge();
    _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C*& get_BD_ProbeHack();
    _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C*& get_BD_Slice();
    _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C*& get_BD_Zipline();
    _Script_UMG::TextBlock*& get_CalBDText();
    _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C*& get_ClimbingClaws();
    _Script_UMG::TextBlock*& get_CombatTip();
    _Script_UMG::TextBlock*& get_Description();
    _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C*& get_Diving();
    _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C*& get_ForceFlip();
    _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C*& get_ForcePull();
    _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C*& get_ForcePush();
    _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C*& get_ForceSlowdown();
    _Script_UMG::GridPanel*& get_GridPanel_0();
    _Script_UMG::TextBlock*& get_Hold1();
    _Script_UMG::TextBlock*& get_Hold2();
    _Script_UMG::Image*& get_Image_0();
    _Script_UMG::Image*& get_Image_1();
    _Script_UMG::Image*& get_Image_2();
    _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C*& get_Lightsaber();
    _Script_UMG::TextBlock*& get_Name();
    _Script_UMG::Image*& get_PlusIcon();
    _Script_UMG::Image*& get_PlusIcon2();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_PrimaryInput();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_PrimaryInput2();
    _Script_UMG::RetainerBox*& get_RetainerBox_3();
    _Script_UMG::CanvasPanel*& get_Root();
    _Script_RsTechRT::RsLine*& get_RsLine_1();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_SecondaryInput();
    _Script_UMG::TextBlock*& get_Slash();
    _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C*& get_SplitSaber();
    _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C*& get_StaffSaber();
    _Game_UI_GameMenu_Widgets_UI_ViewSkillTree_Button::UI_ViewSkillTree_Button_C*& get_UI_ViewSkillTree_Button();
    _Script_UMG::HorizontalBox*& get_UpgradedAbility();
    _Script_UMG::TextBlock*& get_UpgradeTip();
    _Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C*& get_WallRun();
    _Script_UMG::WidgetSwitcher*& get_WidgetSwitcher_0();
    _Script_Engine::Actor*& get_MenuCapture();
    _Game_UI_GameMenu_SubMenus_UI_StarChartAnim::UI_StarChartAnim_C*& get_StarChartAnim1();
    static _Script_CoreUObject::Class* static_class();
    void UpdateAbilityInfoPanel(_Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C* AbilityNode);
    void Construct();
    void ReceivedFocus0();
    void ButtonFocusChanged(_Script_RsGameTechRT::RsUiButton* Button);
    void UpdateVisibility0(bool Visible);
    void BndEvt__UI_ViewSkillTree_Button_K2Node_ComponentBoundEvent_0_RsButtonEvent__DelegateSignature();
    void ExecuteUbergraph_UI_SubMenu_Abilities(int32_t EntryPoint);
}; // Size: 0x408
#pragma pack(pop)
}
