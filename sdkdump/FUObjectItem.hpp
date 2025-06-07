#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Object;
}
#pragma pack(push, 1)
struct FUObjectItem {
    _Script_CoreUObject::Object* object; // 0x0
    int32_t flags; // 0x8
    int32_t cluster_index; // 0xc
    int32_t serial_number; // 0x10
}; // Size: 0x14
#pragma pack(pop)
