#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Credits_UI_Credits_FullscreenWhitespace {
#pragma pack(push, 1)
struct UI_Credits_FullscreenWhitespace_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x8]; public:
    void* get_UberGraphFrame();
    static _Script_CoreUObject::Class* static_class();
    void Construct();
    void ExecuteUbergraph_UI_Credits_FullscreenWhitespace(int32_t EntryPoint);
}; // Size: 0x610
#pragma pack(pop)
}
