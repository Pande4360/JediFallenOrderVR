#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct Font;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_UI_SS_Holomap {
#pragma pack(push, 1)
struct UI_SS_Holomap {
    private: char pad_0[0x28]; public:
    void* get_SlateBlue_13_BDD013DC4DF6AABC4BEA3E97D144BB75();
    void* get_LightBlue_14_7CFB44BB43F8C894BB1533938898C0B2();
    _Script_Engine::Font*& get_UtilityTypefaceAvantGardeMedium_15_4DB526134348DAF1610BE8A336B6BA09();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
