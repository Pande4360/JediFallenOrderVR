#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MaterialExpressionStaticBoolParameter.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialExpressionStaticSwitchParameter : public MaterialExpressionStaticBoolParameter {
    private: char pad_60[0x30]; public:
    void* get_A();
    void* get_B();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
