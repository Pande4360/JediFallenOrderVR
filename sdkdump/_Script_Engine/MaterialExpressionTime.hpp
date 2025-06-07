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
struct MaterialExpressionTime : public MaterialExpression {
    private: char pad_40[0x8]; public:
    bool get_bIgnorePause();
    void set_bIgnorePause(bool value);
    bool get_bOverride_Period();
    void set_bOverride_Period(bool value);
    float& get_Period();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
