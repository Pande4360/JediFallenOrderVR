#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Texture2D.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct CurveLinearColor;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct CurveLinearColorAtlas : public Texture2D {
    private: char pad_e8[0x18]; public:
    void* get_TextureSize();
    void* get_GradientPixelSize();
    void* get_GradientCurves();
    static _Script_CoreUObject::Class* static_class();
    bool GetCurvePosition(_Script_Engine::CurveLinearColor* InCurve, float& Position);
}; // Size: 0x100
#pragma pack(pop)
}
