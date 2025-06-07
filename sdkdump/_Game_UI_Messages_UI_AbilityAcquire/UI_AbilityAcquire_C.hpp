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
struct BackgroundBlur;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Script_UMG {
struct VerticalBox;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct Spacer;
}
namespace _Game_UI_UI_MenuButtonPrompt {
struct UI_MenuButtonPrompt_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Messages_UI_AbilityAcquire {
#pragma pack(push, 1)
struct UI_AbilityAcquire_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x2d0]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_EssenceAcquired();
    _Script_UMG::WidgetAnimation*& get_BossDefeated();
    _Script_UMG::WidgetAnimation*& get_Intro();
    _Script_UMG::WidgetAnimation*& get_FadeOut();
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Script_UMG::TextBlock*& get_AcquireText();
    _Script_UMG::BackgroundBlur*& get_blurbox();
    _Script_UMG::VerticalBox*& get_ButtonHolder();
    _Script_UMG::CanvasPanel*& get_CanvasPanel_1();
    _Script_UMG::Image*& get_darken();
    _Script_UMG::Image*& get_Diagonal();
    _Script_UMG::Image*& get_ForceEssenceIcon();
    _Script_UMG::HorizontalBox*& get_FractionBox();
    _Script_UMG::TextBlock*& get_FractionLabel();
    _Script_UMG::TextBlock*& get_HIDDENOBJECTIVELABEL();
    _Script_UMG::Image*& get_Horiz();
    _Script_UMG::Image*& get_Image_0();
    _Script_UMG::Image*& get_Image_4();
    _Script_UMG::Image*& get_LargeLinework();
    _Script_UMG::Image*& get_LifeEssenceIcon();
    _Script_UMG::RetainerBox*& get_RetainerBox_0();
    _Script_UMG::Image*& get_RingInner();
    _Script_UMG::Image*& get_RingOuter();
    _Script_UMG::HorizontalBox*& get_SingleInput();
    _Script_UMG::Image*& get_SkillFrame();
    _Script_UMG::Image*& get_SkillImage();
    _Script_UMG::Spacer*& get_Spacer_0();
    _Script_UMG::Image*& get_Strip();
    _Script_UMG::HorizontalBox*& get_TextContainer();
    _Script_UMG::HorizontalBox*& get_TwinBladeButtons();
    _Script_UMG::TextBlock*& get_TxtAbility();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_C_2();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_C_6();
    void* get_AbilityName();
    void* get_LVL_AbilityAcquire_Done();
    void* get_StyleSheet();
    void* get_Inputs();
    void* get_TwinBlade();
    void* get_LVL_BossDefeated_Done();
    void* get_LVL_ShowEssenceFanFare_Done();
    static _Script_CoreUObject::Class* static_class();
    void AnimFinished();
    void ShowAcquireFanfare(void* RowName);
    void ShowBossDefeatedFanfare(void* BossNameString);
    void OnAnimationFinished_Event_0();
    void ShowEssenceFanfare(int32_t Fraction, void* EssenceType, bool IsLastPiece);
    void ShowEssenceCompleted(void* EssenceType);
    void ExecuteUbergraph_UI_AbilityAcquire(int32_t EntryPoint);
    void LVL_ShowEssenceFanFare_Done__DelegateSignature();
    void LVL_BossDefeated_Done__DelegateSignature();
    void LVL_AbilityAcquire_Done__DelegateSignature();
}; // Size: 0x8d8
#pragma pack(pop)
}
