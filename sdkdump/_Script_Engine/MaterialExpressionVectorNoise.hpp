#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MaterialExpression.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialExpressionVectorNoise : public MaterialExpression {
    private: char pad_40[0x28]; public:
    void* get_Position();
    void* get_NoiseFunction();
    int32_t& get_Quality();
    bool get_bTiling();
    void set_bTiling(bool value);
    void* get_TileSize();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
