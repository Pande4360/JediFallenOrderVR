#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NavigationData.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_NavigationSystem {
#pragma pack(push, 1)
struct RecastNavMesh : public NavigationData {
    private: char pad_580[0x1b0]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x730
#pragma pack(pop)
}
