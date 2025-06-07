#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsTelemetryValue.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RsTelemetryValue_Boolean : public RsTelemetryValue {
    private: char pad_8[0x8]; public:
    bool get_bValue();
    void set_bValue(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
