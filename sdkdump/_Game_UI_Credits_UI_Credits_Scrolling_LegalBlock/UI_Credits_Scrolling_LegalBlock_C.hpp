#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Credits_UI_Credits_Scrolling_LegalBlock {
#pragma pack(push, 1)
struct UI_Credits_Scrolling_LegalBlock_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x28]; public:
    void* get_UberGraphFrame();
    _Script_UMG::TextBlock*& get_TextBlock_121();
    void* get_LegalText();
    static _Script_CoreUObject::Class* static_class();
    void Construct();
    void ExecuteUbergraph_UI_Credits_Scrolling_LegalBlock(int32_t EntryPoint);
}; // Size: 0x630
#pragma pack(pop)
}
