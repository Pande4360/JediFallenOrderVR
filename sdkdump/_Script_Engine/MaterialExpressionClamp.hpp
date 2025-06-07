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
struct MaterialExpressionClamp : public MaterialExpression {
    private: char pad_40[0x58]; public:
    void* get_Input();
    void* get_Min();
    void* get_Max();
    void* get_ClampMode();
    float& get_MinDefault();
    float& get_MaxDefault();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
