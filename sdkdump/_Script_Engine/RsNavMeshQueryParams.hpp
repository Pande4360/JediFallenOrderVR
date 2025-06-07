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
struct RsNavMeshQueryParams {
    private: char pad_0[0x14]; public:
    float& get_HeuristicScale();
    float& get_VerticalDeviationFromGroundCompensation();
    float& get_DefaultMaxSearchNodes();
    float& get_DefaultMaxHierarchicalSearchNodes();
    bool get_bUseVirtualFilters();
    void set_bUseVirtualFilters(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x14
#pragma pack(pop)
}
