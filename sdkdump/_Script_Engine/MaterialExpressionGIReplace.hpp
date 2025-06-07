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
struct MaterialExpressionGIReplace : public MaterialExpression {
    private: char pad_40[0x48]; public:
    void* get_Default();
    void* get_StaticIndirect();
    void* get_DynamicIndirect();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
