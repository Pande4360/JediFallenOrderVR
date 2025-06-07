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
namespace _Game_UI_Credits_UI_Credits_Scrolling_MajorHeader {
#pragma pack(push, 1)
struct UI_Credits_Scrolling_MajorHeader_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x198]; public:
    void* get_UberGraphFrame();
    _Script_UMG::TextBlock*& get_TextBlock_121();
    void* get_MajorHeader();
    void* get_StyleSheet();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_UI_Credits_Scrolling_MajorHeader(int32_t EntryPoint);
}; // Size: 0x7a0
#pragma pack(pop)
}
