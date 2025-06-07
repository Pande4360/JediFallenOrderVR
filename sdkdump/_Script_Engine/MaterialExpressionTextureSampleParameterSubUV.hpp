#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MaterialExpressionTextureSampleParameter2D.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialExpressionTextureSampleParameterSubUV : public MaterialExpressionTextureSampleParameter2D {
    private: char pad_118[0x8]; public:
    bool get_bBlend();
    void set_bBlend(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x120
#pragma pack(pop)
}
