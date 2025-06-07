#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PlatformInterfaceData {
    private: char pad_0[0x30]; public:
    void* get_DataName();
    void* get_Type();
    int32_t& get_IntValue();
    float& get_FloatValue();
    void* get_StringValue();
    _Script_CoreUObject::Object*& get_ObjectValue();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
