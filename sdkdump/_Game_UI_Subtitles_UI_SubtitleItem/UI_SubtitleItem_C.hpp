#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Script_UMG {
struct ScaleBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct Border;
}
namespace _Game_UI_Subtitles_UI_SubtitleItem {
#pragma pack(push, 1)
struct UI_SubtitleItem_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x30]; public:
    _Script_UMG::HorizontalBox*& get_box_CharName();
    _Script_UMG::TextBlock*& get_CharacterName();
    _Script_UMG::Border*& get_LetterBoxName();
    _Script_UMG::Border*& get_LetterBoxText();
    _Script_UMG::TextBlock*& get_LineText();
    _Script_UMG::ScaleBox*& get_ScaleBox_0();
    static _Script_CoreUObject::Class* static_class();
    void UpdateLetterboxOpacity(float LetterBoxOpacity);
    void SetLineText(void* CharacterName, void* Text);
}; // Size: 0x238
#pragma pack(pop)
}
