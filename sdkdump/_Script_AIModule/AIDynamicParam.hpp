#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct AIDynamicParam {
    private: char pad_0[0x38]; public:
    void* get_ParamName();
    void* get_ParamType();
    float& get_Value();
    void* get_BBKey();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
