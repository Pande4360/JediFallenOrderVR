#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MaterialExpressionTextureSample.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialExpressionParticleSubUV : public MaterialExpressionTextureSample {
    private: char pad_f8[0x8]; public:
    bool get_bBlend();
    void set_bBlend(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x100
#pragma pack(pop)
}
