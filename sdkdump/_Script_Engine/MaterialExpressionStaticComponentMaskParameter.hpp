#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "MaterialExpressionParameter.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialExpressionStaticComponentMaskParameter : public MaterialExpressionParameter {
    private: char pad_58[0x20]; public:
    void* get_Input();
    bool get_DefaultR();
    void set_DefaultR(bool value);
    bool get_DefaultG();
    void set_DefaultG(bool value);
    bool get_DefaultB();
    void set_DefaultB(bool value);
    bool get_DefaultA();
    void set_DefaultA(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x78
#pragma pack(pop)
}
