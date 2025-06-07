#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_GameMenu_SubMenus_UI_SubMenu_Base\UI_SubMenu_Base_C.hpp"
namespace _Game_UI_SkillTree_UI_SkillTree_Main {
struct UI_SkillTree_Main_C;
}
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_RsGameTechRT {
struct RsUiButton;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Game_UI_GameMenu_SubMenus_UI_StarChartAnim3 {
struct UI_StarChartAnim3_C;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities {
struct UI_SubMenu_Abilities_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_SubMenus_UI_SubMenu_SkillTree {
#pragma pack(push, 1)
struct UI_SubMenu_SkillTree_C : public _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C {
    private: char pad_278[0x60]; public:
    void* get_UberGraphFrame0();
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Script_UMG::Overlay*& get_HeaderText();
    _Script_UMG::Image*& get_Image_0();
    _Script_UMG::Image*& get_M_Noise();
    _Script_UMG::RetainerBox*& get_SectionHeader_Retainer();
    _Script_UMG::TextBlock*& get_SectionTitle();
    _Script_UMG::TextBlock*& get_SectionTitleBacking();
    _Script_UMG::CanvasPanel*& get_SkillTree_Canvas();
    _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C*& get_UI_SkillTree_Main();
    _Game_UI_GameMenu_SubMenus_UI_StarChartAnim3::UI_StarChartAnim3_C*& get_StarChart3();
    _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C*& get_Abilities();
    static _Script_CoreUObject::Class* static_class();
    void OnFocusChanged(_Script_RsGameTechRT::RsUiButton* FocusedButton);
    void UpdateVisibility0(bool Visible);
    void Construct();
    void ExecuteUbergraph_UI_SubMenu_SkillTree(int32_t EntryPoint);
}; // Size: 0x2d8
#pragma pack(pop)
}
