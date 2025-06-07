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
struct DistributionLookupTable {
    private: char pad_0[0x28]; public:
    void* get_Op();
    void* get_EntryCount();
    void* get_EntryStride();
    void* get_SubEntryStride();
    float& get_TimeScale();
    float& get_TimeBias();
    void* get_Values();
    void* get_LockFlag();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
