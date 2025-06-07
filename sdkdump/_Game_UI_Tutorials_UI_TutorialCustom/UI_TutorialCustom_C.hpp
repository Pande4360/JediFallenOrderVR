#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Script_UMG {
struct VerticalBox;
}
namespace _Game_UI_UI_MenuButtonPrompt {
struct UI_MenuButtonPrompt_C;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_UMG {
struct Border;
}
namespace _Script_UMG {
struct SizeBox;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_UI_Tutorials_UI_TutorialCustom {
#pragma pack(push, 1)
struct UI_TutorialCustom_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x2d8]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Confirm2();
    _Script_UMG::WidgetAnimation*& get_Confirm1();
    _Script_UMG::WidgetAnimation*& get_BlockParry_Anim();
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Script_UMG::WidgetAnimation*& get_FadeOut();
    _Script_UMG::TextBlock*& get_Action1Txt();
    _Script_UMG::TextBlock*& get_Action2Text();
    _Script_UMG::VerticalBox*& get_Action_Evade();
    _Script_UMG::VerticalBox*& get_Action_Roll();
    _Script_UMG::VerticalBox*& get_ActionBlock();
    _Script_UMG::VerticalBox*& get_ActionParry();
    _Script_UMG::VerticalBox*& get_ActionTargetSwitch();
    _Script_UMG::VerticalBox*& get_ActionTargetToggle();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_BlockButton();
    _Script_UMG::SizeBox*& get_BlockParry();
    _Script_UMG::Border*& get_Border_0();
    _Script_UMG::Border*& get_Border_1();
    _Script_UMG::Border*& get_Border_2();
    _Script_UMG::Border*& get_Border_3();
    _Script_UMG::Border*& get_Border_4();
    _Script_UMG::Border*& get_Border_5();
    _Script_UMG::HorizontalBox*& get_ButtonBox();
    _Script_UMG::CanvasPanel*& get_ContainerCanvas();
    _Script_UMG::Image*& get_Dot();
    _Script_UMG::SizeBox*& get_EvadeRoll();
    _Script_UMG::HorizontalBox*& get_HorizontalBox_1();
    _Script_UMG::HorizontalBox*& get_HorizontalBox_3();
    _Script_UMG::HorizontalBox*& get_HorizontalBox_4();
    _Script_UMG::HorizontalBox*& get_HorizontalBox_6();
    _Script_UMG::HorizontalBox*& get_HorizontalBox_9();
    _Script_UMG::HorizontalBox*& get_HorizontalBox_10();
    _Script_UMG::HorizontalBox*& get_HorizontalBox_11();
    _Script_UMG::HorizontalBox*& get_HorizontalBox_13();
    _Script_UMG::HorizontalBox*& get_HorizontalBox_14();
    _Script_UMG::Image*& get_Image_0();
    _Script_UMG::Image*& get_Image_1();
    _Script_UMG::Image*& get_Image_2();
    _Script_UMG::Image*& get_Image_3();
    _Script_UMG::Image*& get_Image_4();
    _Script_UMG::Image*& get_Image_5();
    _Script_UMG::Image*& get_Image_6();
    _Script_UMG::Image*& get_Image_7();
    _Script_UMG::Image*& get_Image_8();
    _Script_UMG::Image*& get_Image_9();
    _Script_UMG::Image*& get_Image_10();
    _Script_UMG::Image*& get_Image_11();
    _Script_UMG::Image*& get_Image_38();
    _Script_UMG::Image*& get_Image_89();
    _Script_UMG::Image*& get_Image_91();
    _Script_UMG::Image*& get_Image_92();
    _Script_UMG::Image*& get_Image_94();
    _Script_UMG::Image*& get_Image_95();
    _Script_UMG::Image*& get_Image_102();
    _Script_UMG::Image*& get_Image_103();
    _Script_UMG::Image*& get_Image_104();
    _Script_UMG::Image*& get_Image_106();
    _Script_UMG::Image*& get_Outline();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_ParryButton();
    _Script_UMG::SizeBox*& get_TargetSwitchLock();
    _Script_UMG::SizeBox*& get_Telekinesis();
    _Script_UMG::TextBlock*& get_TextBlock_0();
    _Script_UMG::TextBlock*& get_TextBlock_1();
    _Script_UMG::TextBlock*& get_TextBlock_2();
    _Script_UMG::TextBlock*& get_TextBlock_3();
    _Script_UMG::TextBlock*& get_TextBlock_4();
    _Script_UMG::TextBlock*& get_TextBlock_5();
    _Script_UMG::TextBlock*& get_TextBlock_6();
    _Script_UMG::TextBlock*& get_TextBlock_7();
    _Script_UMG::SizeBox*& get_TKMode();
    _Script_UMG::SizeBox*& get_TwinBlade();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_C_0();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_C_1();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_C_2();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_C_3();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_C_4();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_C_5();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_C_6();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_C_7();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_C_8();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_C_9();
    void* get_Dismissed();
    bool get_Success1();
    void set_Success1(bool value);
    bool get_Success2();
    void set_Success2(bool value);
    bool get_Success3();
    void set_Success3(bool value);
    void* get_LVL_Tutorial_ZTarget_Complete();
    void* get_LVL_Tutorial_EvadeRoll_Complete();
    void* get_LVL_Tutorial_BlockParry_Complete();
    static _Script_CoreUObject::Class* static_class();
    void* Get_ContainerCanvas_Visibility_0();
    void HeroRolled_Event_0();
    void HeroEvaded_Event_0();
    void HeroExitedZTarget_Event();
    void HeroSwitchedZTarget_Event();
    void HeroZTargeted_Event(_Script_Engine::Actor* NewTarget);
    void HeroParrySuccess_Event(_Script_RsGameTechRT::RsCharacter* Parried_Character);
    void HeroEnterBlock_Event();
    void NotifyHidden();
    void UnbindAllEvents();
    void ShowEvadeRoll();
    void ShowTargetSwitchLock();
    void ShowBlockParry();
    void ShowTwinBlade();
    void ShowTelekinesis();
    void ShowTKMode();
    void Shown();
    void Dismiss(bool Instant);
    void ExecuteUbergraph_UI_TutorialCustom(int32_t EntryPoint);
    void LVL_Tutorial_BlockParry_Complete__DelegateSignature();
    void LVL_Tutorial_EvadeRoll_Complete__DelegateSignature();
    void LVL_Tutorial_ZTarget_Complete__DelegateSignature();
    void Dismissed__DelegateSignature();
}; // Size: 0x4e0
#pragma pack(pop)
}
