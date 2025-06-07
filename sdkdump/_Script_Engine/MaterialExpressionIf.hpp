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
struct MaterialExpressionIf : public MaterialExpression {
    private: char pad_40[0x88]; public:
    void* get_A();
    void* get_B();
    void* get_AGreaterThanB();
    void* get_AEqualsB();
    void* get_ALessThanB();
    float& get_EqualsThreshold();
    float& get_ConstB();
    float& get_ConstAEqualsB();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc8
#pragma pack(pop)
}
