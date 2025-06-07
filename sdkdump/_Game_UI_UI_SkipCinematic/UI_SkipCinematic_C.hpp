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
struct CanvasPanel;
}
namespace _Script_UMG {
struct Border;
}
namespace _Script_UMG {
struct ProgressBar;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_UI_SkipCinematic {
#pragma pack(push, 1)
struct UI_SkipCinematic_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x70]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_FadeToGame();
    _Script_UMG::WidgetAnimation*& get_FadeToBlack();
    _Script_UMG::WidgetAnimation*& get_FadeSkipButton();
    _Script_UMG::CanvasPanel*& get_Canvas();
    _Script_UMG::Border*& get_MainContainer();
    _Script_UMG::ProgressBar*& get_SkipProgress();
    _Script_UMG::TextBlock*& get_TextBlock_151();
    _Script_UMG::TextBlock*& get_Txt_CannotSkip();
    bool get_IsButtonHeld();
    void set_IsButtonHeld(bool value);
    bool get_SuccessfulSkip();
    void set_SuccessfulSkip(bool value);
    bool get_ButtonEnabled();
    void set_ButtonEnabled(bool value);
    void* get_LVL_CinematicSkipTriggered();
    float& get_SkipProgressAmount();
    bool get_SkipPermitted();
    void set_SkipPermitted(bool value);
    void* get_RTPC_Cinematic_Skip();
    static _Script_CoreUObject::Class* static_class();
    void PermitSkipping(bool Permitted);
    void* Get_SkipProgress_Visibility_0();
    void* Get_Txt_CannotSkip_Visibility_0();
    void Construct0();
    void OnButtonPress();
    void OnButtonRelease();
    void Anim_SkipButtonCompleted();
    void OnAnimationFinished_Event_0();
    void Anim_FadeToGame();
    void timeOutSkipDisable();
    void EnableSkipButton();
    void LVL_FadeToGame();
    void ExecuteUbergraph_UI_SkipCinematic(int32_t EntryPoint);
    void LVL_CinematicSkipTriggered__DelegateSignature();
}; // Size: 0x278
#pragma pack(pop)
}
