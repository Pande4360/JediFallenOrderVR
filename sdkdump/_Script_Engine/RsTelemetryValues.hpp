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
struct RsTelemetryValues {
    private: char pad_0[0x50]; public:
    void* get_IntegerValues();
    void* get_FloatValues();
    void* get_BooleanValues();
    void* get_IndexedStringValues();
    void* get_StringValues();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
