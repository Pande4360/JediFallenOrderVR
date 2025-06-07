#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ApexDestruction {
#pragma pack(push, 1)
struct DestructibleSpecialHierarchyDepths {
    private: char pad_0[0x14]; public:
    int32_t& get_SupportDepth();
    int32_t& get_MinimumFractureDepth();
    bool get_bEnableDebris();
    void set_bEnableDebris(bool value);
    int32_t& get_DebrisDepth();
    int32_t& get_EssentialDepth();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x14
#pragma pack(pop)
}
