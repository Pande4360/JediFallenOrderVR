#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_GameMenu_SubMenus_UI_SubMenu_Base\UI_SubMenu_Base_C.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
namespace _Script_UMG {
struct ProgressBar;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Game_UI_GameMenu_Elements_Buttons_UI_Button_TopNav {
struct UI_Button_TopNav_C;
}
namespace _Game_UI_UI_MenuButtonPrompt {
struct UI_MenuButtonPrompt_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_SubMenus_UI_SubMenu_TopNav {
#pragma pack(push, 1)
struct UI_SubMenu_TopNav_C : public _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C {
    private: char pad_278[0xa0]; public:
    void* get_UberGraphFrame0();
    _Script_UMG::ProgressBar*& get_Backing();
    _Script_UMG::TextBlock*& get_ForcePointText();
    _Script_UMG::Image*& get_Image_0();
    _Script_UMG::Image*& get_Image_1();
    _Script_UMG::CanvasPanel*& get_Root();
    _Script_UMG::ProgressBar*& get_SkillPointBar();
    _Script_UMG::CanvasPanel*& get_SkillPointProgress();
    _Script_UMG::HorizontalBox*& get_TopNavButtonContainer();
    _Game_UI_GameMenu_Elements_Buttons_UI_Button_TopNav::UI_Button_TopNav_C*& get_UI_Button_TopNav_Abilities();
    _Game_UI_GameMenu_Elements_Buttons_UI_Button_TopNav::UI_Button_TopNav_C*& get_UI_Button_TopNav_Customization();
    _Game_UI_GameMenu_Elements_Buttons_UI_Button_TopNav::UI_Button_TopNav_C*& get_UI_Button_TopNav_Databank();
    _Game_UI_GameMenu_Elements_Buttons_UI_Button_TopNav::UI_Button_TopNav_C*& get_UI_Button_TopNav_Debug();
    _Game_UI_GameMenu_Elements_Buttons_UI_Button_TopNav::UI_Button_TopNav_C*& get_UI_Button_TopNav_Settings();
    _Game_UI_GameMenu_Elements_Buttons_UI_Button_TopNav::UI_Button_TopNav_C*& get_UI_Button_TopNav_TacticalGuide();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_0();
    _Script_UMG::TextBlock*& get_UnspentForcePoints();
    _Script_Engine::MaterialInstanceDynamic*& get_SkillPointMaterial();
    void*& get_UI_HUD_XP_Element();
    static _Script_CoreUObject::Class* static_class();
    void UpdateSkillPoints();
    void MaterialInstanceSetup();
    void UMG_UpdateURL0(_Script_GameplayTags::GameplayTag NewUrl, bool& Result);
    void Construct();
    void ExecuteUbergraph_UI_SubMenu_TopNav(int32_t EntryPoint);
}; // Size: 0x318
#pragma pack(pop)
}
