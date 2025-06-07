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
struct Image;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Game_UI_UI_MenuButtonPrompt {
struct UI_MenuButtonPrompt_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_UI_ButtonScreenSpace {
#pragma pack(push, 1)
struct UI_ButtonScreenSpace_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x58]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Intro();
    _Script_UMG::Image*& get_Dot();
    _Script_UMG::Image*& get_Image_0();
    _Script_UMG::TextBlock*& get_InteractText();
    _Script_UMG::CanvasPanel*& get_MainContainer();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt();
    void* get_PromptText();
    bool get_NewVar_0();
    void set_NewVar_0(bool value);
    static _Script_CoreUObject::Class* static_class();
    void* GetVisibility_0();
    void UpdateButton();
    void Display();
    void SetType(void* Type);
    void Dismiss();
    void ExecuteUbergraph_UI_ButtonScreenSpace(int32_t EntryPoint);
}; // Size: 0x260
#pragma pack(pop)
}
