#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct MaterialExpressionFunctionOutput;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct FunctionExpressionOutput {
    private: char pad_0[0x20]; public:
    _Script_Engine::MaterialExpressionFunctionOutput*& get_ExpressionOutput();
    void* get_ExpressionOutputId();
    void* get_Output();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
