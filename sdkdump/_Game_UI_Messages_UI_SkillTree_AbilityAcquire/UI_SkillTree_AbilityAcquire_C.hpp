#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Script_UMG {
struct Image;
}
namespace _Game_UI_UI_MenuButtonPrompt {
struct UI_MenuButtonPrompt_C;
}
namespace _Game_UI_SkillTree_UI_SkillTree_Node {
struct UI_SkillTree_Node_C;
}
namespace _Script_RsGameTechRT {
struct RsUiButton;
}
namespace _Game_UI_Messages_UI_SkillTree_AbilityAcquire {
#pragma pack(push, 1)
struct UI_SkillTree_AbilityAcquire_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x280]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_RotateLinework();
    _Script_UMG::WidgetAnimation*& get_NoVideoCelebration();
    _Script_UMG::WidgetAnimation*& get_BossDefeated();
    _Script_UMG::WidgetAnimation*& get_VideoCelebration();
    _Script_UMG::WidgetAnimation*& get_FadeOut();
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Script_UMG::TextBlock*& get_AcquireText();
    _Script_UMG::HorizontalBox*& get_ButtonHolder();
    _Script_UMG::TextBlock*& get_HoldText();
    _Script_UMG::Image*& get_Horiz();
    _Script_UMG::Image*& get_Horiz2();
    _Script_UMG::Image*& get_Image_0();
    _Script_UMG::Image*& get_Image_3();
    _Script_UMG::Image*& get_Image_4();
    _Script_UMG::Image*& get_Image_6();
    _Script_UMG::Image*& get_LargeLinework();
    _Script_UMG::Image*& get_PipLeft();
    _Script_UMG::Image*& get_PipRight();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_PrimaryInput();
    _Script_UMG::RetainerBox*& get_RetainerBox_2();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_SecondaryInput();
    _Script_UMG::Image*& get_SkillImage();
    _Script_UMG::TextBlock*& get_TextBlock_0();
    _Script_UMG::TextBlock*& get_TxtAbility();
    void* get_AbilityName();
    void* get_LVL_AbilityAcquire_Done();
    void* get_StyleSheet();
    void* get_Inputs();
    void* get_TwinBlade();
    void* get_LVL_BossDefeated_Done();
    bool get_SkillNode();
    void set_SkillNode(bool value);
    _Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& get_NewVar_0();
    static _Script_CoreUObject::Class* static_class();
    void ShowNoVideoAcquireFanfare(_Script_RsGameTechRT::RsUiButton* AcceptedButton);
    void ShowVideoAcquireFanfare();
    void ExecuteUbergraph_UI_SkillTree_AbilityAcquire(int32_t EntryPoint);
    void LVL_BossDefeated_Done__DelegateSignature();
    void LVL_AbilityAcquire_Done__DelegateSignature();
}; // Size: 0x888
#pragma pack(pop)
}
