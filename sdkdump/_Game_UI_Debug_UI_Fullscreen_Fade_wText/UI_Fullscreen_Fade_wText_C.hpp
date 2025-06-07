#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct Border;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Debug_UI_Fullscreen_Fade_wText {
#pragma pack(push, 1)
struct UI_Fullscreen_Fade_wText_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x40]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Fade_Out();
    _Script_UMG::WidgetAnimation*& get_Fade_In();
    _Script_UMG::Border*& get_Border_2();
    _Script_UMG::TextBlock*& get_Text();
    bool get_Done();
    void set_Done(bool value);
    void* get_Colour();
    static _Script_CoreUObject::Class* static_class();
    _Script_CoreUObject::LinearColor GetBrushColor_0();
    void isFinished_(bool& Done);
    void Construct0();
    void LVL_FadeIn(float Speed);
    void LVL_FadeOut(float Speed);
    void LVL_SetMessage(void* InText);
    void LVL_SetFadeManual(float Percentage);
    void ExecuteUbergraph_UI_Fullscreen_Fade_wText(int32_t EntryPoint);
}; // Size: 0x248
#pragma pack(pop)
}
