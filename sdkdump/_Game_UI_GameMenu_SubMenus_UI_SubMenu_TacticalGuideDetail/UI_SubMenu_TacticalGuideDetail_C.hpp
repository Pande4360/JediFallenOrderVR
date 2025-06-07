#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_GameMenu_SubMenus_UI_SubMenu_Base\UI_SubMenu_Base_C.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct Button;
}
namespace _Script_UMG {
struct VerticalBox;
}
namespace _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight {
struct UI_Button_LeftRight_C;
}
namespace _Script_UMG {
struct SizeBox;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Script_RsTechRT {
struct RsLine;
}
namespace _Script_UMG {
struct ScrollBox;
}
namespace _Game_UI_GameMenu_Widgets_UI_Widget_PipHolder {
struct UI_Widget_PipHolder_C;
}
namespace _Game_UI_GameMenu_SubMenus_UI_StarChartAnim2 {
struct UI_StarChartAnim2_C;
}
namespace _Game_UI_GameMenu_SubMenus_UI_StarChartAnimSmall {
struct UI_StarChartAnimSmall_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail {
#pragma pack(push, 1)
struct UI_SubMenu_TacticalGuideDetail_C : public _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C {
    private: char pad_278[0x140]; public:
    void* get_UberGraphFrame0();
    _Script_UMG::WidgetAnimation*& get_CircleLoop();
    _Script_UMG::WidgetAnimation*& get_Intro();
    _Script_UMG::Button*& get_ArrowLeft();
    _Script_UMG::Button*& get_ArrowRight();
    _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C*& get_btnLeft();
    _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C*& get_btnRight();
    _Script_UMG::CanvasPanel*& get_CanvasPanel_0();
    _Script_UMG::VerticalBox*& get_CombatHint();
    _Script_UMG::Image*& get_FeaturedImage();
    _Script_UMG::SizeBox*& get_IconHolder2();
    _Script_UMG::Image*& get_Image_0();
    _Script_UMG::Image*& get_Image_1();
    _Script_UMG::SizeBox*& get_InnerBounds();
    _Script_UMG::VerticalBox*& get_MetaInfo();
    _Script_UMG::TextBlock*& get_MetaTags();
    _Script_UMG::Image*& get_NoiseBG();
    _Script_UMG::TextBlock*& get_PlanetOrFaction();
    _Script_UMG::TextBlock*& get_PlanetOrFaction2();
    _Script_UMG::RetainerBox*& get_RetainerBox_2();
    _Script_UMG::CanvasPanel*& get_Root();
    _Script_RsTechRT::RsLine*& get_RsLine_247();
    _Script_UMG::RetainerBox*& get_ScrollBox();
    _Script_UMG::ScrollBox*& get_ScrollText();
    _Script_UMG::Image*& get_SolidColor();
    _Script_UMG::Image*& get_TinyIcon();
    _Script_UMG::Image*& get_TinyIconOptional();
    _Game_UI_GameMenu_Widgets_UI_Widget_PipHolder::UI_Widget_PipHolder_C*& get_UI_Widget_PipHolder();
    _Script_UMG::TextBlock*& get_Widget_Book();
    _Script_UMG::TextBlock*& get_Widget_CombatHint1();
    _Script_UMG::TextBlock*& get_Widget_CombatHint2();
    _Script_UMG::TextBlock*& get_Widget_StoryBody();
    _Script_UMG::TextBlock*& get_Widget_StoryTitle();
    void* get_CurrentBookStories();
    int32_t& get_CurrentStoryIndex();
    void* get_PreviousParentURL();
    _Game_UI_GameMenu_SubMenus_UI_StarChartAnim2::UI_StarChartAnim2_C*& get_StarChartAnim2();
    _Game_UI_GameMenu_SubMenus_UI_StarChartAnimSmall::UI_StarChartAnimSmall_C*& get_StarChartSmall();
    _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C*& get_ButtonLeftRight_Ref();
    static _Script_CoreUObject::Class* static_class();
    void TryNavigateStories(void* Direction);
    void UMG_UpdateURL0(_Script_GameplayTags::GameplayTag NewUrl, bool& Result);
    void OnLoaded_685913AC4661CD19F40C54938DB6D7D3(_Script_CoreUObject::Object* Loaded);
    void Construct();
    void LoadFeaturedImage(void* Texture);
    void AnimationReset();
    void CustomEvent_0();
    void ReceivedFocus0();
    void LostFocus0();
    void UpdateVisibility0(bool Visible);
    void BndEvt__btnLeft_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void BndEvt__btnRight_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void ExecuteUbergraph_UI_SubMenu_TacticalGuideDetail(int32_t EntryPoint);
}; // Size: 0x3b8
#pragma pack(pop)
}
