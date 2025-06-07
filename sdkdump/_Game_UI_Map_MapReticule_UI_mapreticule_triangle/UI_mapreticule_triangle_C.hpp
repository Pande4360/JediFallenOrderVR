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
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Map_MapReticule_UI_mapreticule_triangle {
#pragma pack(push, 1)
struct UI_mapreticule_triangle_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x20]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Blink();
    _Script_UMG::Image*& get_filled();
    _Script_UMG::Image*& get_hollow();
    static _Script_CoreUObject::Class* static_class();
    void PlayBlink();
    void ExecuteUbergraph_UI_mapreticule_triangle(int32_t EntryPoint);
}; // Size: 0x228
#pragma pack(pop)
}
