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
struct MaterialExpressionCustom : public MaterialExpression {
    private: char pad_40[0x38]; public:
    void* get_Code();
    void* get_OutputType();
    void* get_Description();
    void* get_Inputs();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x78
#pragma pack(pop)
}
