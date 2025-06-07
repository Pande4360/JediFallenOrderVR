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
struct TextBlock;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Narrative_UI_CinematicPlaceholder_TextLine {
#pragma pack(push, 1)
struct UI_CinematicPlaceholder_TextLine_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x18]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Fade();
    _Script_UMG::TextBlock*& get_Text();
    static _Script_CoreUObject::Class* static_class();
    void SetText(void* Text);
    void Construct0();
    void ExecuteUbergraph_UI_CinematicPlaceholder_TextLine(int32_t EntryPoint);
}; // Size: 0x220
#pragma pack(pop)
}
