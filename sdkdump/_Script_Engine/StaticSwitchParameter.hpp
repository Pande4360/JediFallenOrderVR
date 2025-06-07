#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct StaticSwitchParameter {
    private: char pad_0[0x28]; public:
    void* get_ParameterInfo();
    bool get_Value();
    void set_Value(bool value);
    bool get_bOverride();
    void set_bOverride(bool value);
    void* get_ExpressionGUID();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
