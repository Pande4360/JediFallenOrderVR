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
struct MaterialExpressionRotator : public MaterialExpression {
    private: char pad_40[0x40]; public:
    void* get_Coordinate();
    void* get_Time();
    float& get_CenterX();
    float& get_CenterY();
    float& get_Speed();
    void* get_ConstCoordinate();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
