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
struct MaterialExpressionBranch : public MaterialExpression {
    private: char pad_40[0x78]; public:
    void* get_A();
    void* get_B();
    void* get_TrueExpr();
    void* get_FalseExpr();
    void* get_Condition();
    void* get_BranchAttribute();
    float& get_ConstB();
    void* get_ConstFalse();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb8
#pragma pack(pop)
}
