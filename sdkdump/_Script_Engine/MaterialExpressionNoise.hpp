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
struct MaterialExpressionNoise : public MaterialExpression {
    private: char pad_40[0x58]; public:
    void* get_Position();
    void* get_FilterWidth();
    float& get_Scale();
    int32_t& get_Quality();
    void* get_NoiseFunction();
    bool get_bTurbulence();
    void set_bTurbulence(bool value);
    int32_t& get_Levels();
    float& get_OutputMin();
    float& get_OutputMax();
    float& get_LevelScale();
    bool get_bTiling();
    void set_bTiling(bool value);
    void* get_RepeatSize();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
