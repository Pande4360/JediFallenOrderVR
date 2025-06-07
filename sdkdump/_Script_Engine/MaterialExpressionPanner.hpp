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
struct MaterialExpressionPanner : public MaterialExpression {
    private: char pad_40[0x58]; public:
    void* get_Coordinate();
    void* get_Time();
    void* get_Speed();
    float& get_SpeedX();
    float& get_SpeedY();
    void* get_ConstCoordinate();
    bool get_bFractionalPart();
    void set_bFractionalPart(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
