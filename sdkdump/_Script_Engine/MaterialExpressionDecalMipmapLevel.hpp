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
struct MaterialExpressionDecalMipmapLevel : public MaterialExpression {
    private: char pad_40[0x20]; public:
    void* get_TextureSize();
    float& get_ConstWidth();
    float& get_ConstHeight();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
