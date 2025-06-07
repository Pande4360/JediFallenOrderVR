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
namespace _Script_Engine {
#pragma pack(push, 1)
struct TextSizingParameters {
    private: char pad_0[0x28]; public:
    float& get_DrawX();
    float& get_DrawY();
    float& get_DrawXL();
    float& get_DrawYL();
    void* get_Scaling();
    _Script_Engine::Font*& get_DrawFont();
    void* get_SpacingAdjust();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
