#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_UI_MenuButtonPrompt_Content {
#pragma pack(push, 1)
struct UI_MenuButtonPrompt_Content_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x28]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Image*& get_Image_0();
    _Script_UMG::TextBlock*& get_KeyLabel();
    _Script_UMG::Overlay*& get_MKOverlay();
    _Script_UMG::Image*& get_Prompt();
    static _Script_CoreUObject::Class* static_class();
    void ShowMKOverlay();
    void ShowPrompt();
    void ExecuteUbergraph_UI_MenuButtonPrompt_Content(int32_t EntryPoint);
}; // Size: 0x230
#pragma pack(pop)
}
