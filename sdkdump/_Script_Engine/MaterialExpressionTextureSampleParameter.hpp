#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MaterialExpressionTextureSample.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialExpressionTextureSampleParameter : public MaterialExpressionTextureSample {
    private: char pad_f8[0x20]; public:
    void* get_ParameterName();
    void* get_ExpressionGUID();
    void* get_Group();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x118
#pragma pack(pop)
}
