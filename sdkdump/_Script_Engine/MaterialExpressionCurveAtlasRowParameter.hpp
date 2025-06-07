#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MaterialExpressionScalarParameter.hpp"
namespace _Script_Engine {
struct CurveLinearColor;
}
namespace _Script_Engine {
struct CurveLinearColorAtlas;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialExpressionCurveAtlasRowParameter : public MaterialExpressionScalarParameter {
    private: char pad_60[0x28]; public:
    _Script_Engine::CurveLinearColor*& get_Curve();
    _Script_Engine::CurveLinearColorAtlas*& get_Atlas();
    void* get_InputTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
