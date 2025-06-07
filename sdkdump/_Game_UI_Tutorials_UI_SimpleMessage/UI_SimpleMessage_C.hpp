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
struct Border;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct VerticalBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Tutorials_UI_SimpleMessage {
#pragma pack(push, 1)
struct UI_SimpleMessage_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x68]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_FadeOut();
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Script_UMG::Border*& get_Border_0();
    _Script_UMG::TextBlock*& get_Texttojump();
    _Script_UMG::VerticalBox*& get_VerticalBox_0();
    void* get_Text();
    float& get_Delay();
    bool get_StayForever();
    void set_StayForever(bool value);
    void* get_Dismissed();
    void* get_DismissTimer();
    static _Script_CoreUObject::Class* static_class();
    void FadeInFinished();
    void FadeOutFinished();
    void Dismiss();
    void ShowMessage();
    void Construct0();
    void ExecuteUbergraph_UI_SimpleMessage(int32_t EntryPoint);
    void Dismissed__DelegateSignature();
}; // Size: 0x270
#pragma pack(pop)
}
