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
struct BranchingPointMarker {
    private: char pad_0[0xc]; public:
    int32_t& get_NotifyIndex();
    float& get_TriggerTime();
    void* get_NotifyEventType();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
