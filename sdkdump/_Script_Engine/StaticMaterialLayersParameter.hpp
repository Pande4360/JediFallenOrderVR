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
struct StaticMaterialLayersParameter {
    private: char pad_0[0x68]; public:
    void* get_ParameterInfo();
    void* get_Value();
    bool get_bOverride();
    void set_bOverride(bool value);
    void* get_ExpressionGUID();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
