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
namespace _Game_UI_Credits_UI_Credits_Scrolling_ColumnizedCredit {
#pragma pack(push, 1)
struct UI_Credits_Scrolling_ColumnizedCredit_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x50]; public:
    void* get_UberGraphFrame();
    _Script_UMG::TextBlock*& get_PersonNAME1();
    _Script_UMG::TextBlock*& get_PersonNAME2();
    _Script_UMG::TextBlock*& get_PersonNAME3();
    void* get_Credit_Name1();
    void* get_Credit_Name2();
    void* get_Credit_Name3();
    static _Script_CoreUObject::Class* static_class();
    void Construct();
    void ExecuteUbergraph_UI_Credits_Scrolling_ColumnizedCredit(int32_t EntryPoint);
}; // Size: 0x658
#pragma pack(pop)
}
