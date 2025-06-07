#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Death_FadeScreen {
#pragma pack(push, 1)
struct FadeScreen_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x10]; public:
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Script_UMG::WidgetAnimation*& get_FadeOut();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x218
#pragma pack(pop)
}
