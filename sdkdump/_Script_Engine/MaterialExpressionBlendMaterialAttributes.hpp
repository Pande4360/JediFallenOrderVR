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
struct MaterialExpressionBlendMaterialAttributes : public MaterialExpression {
    private: char pad_40[0x60]; public:
    void* get_A();
    void* get_B();
    void* get_Alpha();
    void* get_PixelAttributeBlendType();
    void* get_VertexAttributeBlendType();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
