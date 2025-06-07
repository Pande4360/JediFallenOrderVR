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
struct MaterialExpressionSceneColor : public MaterialExpression {
    private: char pad_40[0x40]; public:
    void* get_InputMode();
    void* get_Input();
    void* get_OffsetFraction();
    void* get_ConstInput();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
