#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct MaterialExpressionFunctionInput;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct FunctionExpressionInput {
    private: char pad_0[0x30]; public:
    _Script_Engine::MaterialExpressionFunctionInput*& get_ExpressionInput();
    void* get_ExpressionInputId();
    void* get_Input();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
