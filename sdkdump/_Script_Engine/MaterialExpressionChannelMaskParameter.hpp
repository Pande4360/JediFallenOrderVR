#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MaterialExpressionVectorParameter.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialExpressionChannelMaskParameter : public MaterialExpressionVectorParameter {
    private: char pad_68[0x20]; public:
    void* get_MaskChannel();
    void* get_Input();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
