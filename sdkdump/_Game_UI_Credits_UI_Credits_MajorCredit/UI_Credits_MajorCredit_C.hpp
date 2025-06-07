#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
namespace _Script_UMG {
struct Border;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Credits_UI_Credits_MajorCredit {
#pragma pack(push, 1)
struct UI_Credits_MajorCredit_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x1b8]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Border*& get_Border_0();
    _Script_UMG::TextBlock*& get_CREDITTITLE();
    _Script_UMG::TextBlock*& get_PersonNAME();
    void* get_CreditTitleString();
    void* get_Credit_Name();
    void* get_StyleSheet();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_UI_Credits_MajorCredit(int32_t EntryPoint);
}; // Size: 0x7c0
#pragma pack(pop)
}
