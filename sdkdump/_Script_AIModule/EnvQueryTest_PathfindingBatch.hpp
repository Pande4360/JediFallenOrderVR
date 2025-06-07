#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "EnvQueryTest_Pathfinding.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct EnvQueryTest_PathfindingBatch : public EnvQueryTest_Pathfinding {
    private: char pad_238[0x30]; public:
    void* get_ScanRangeMultiplier();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x268
#pragma pack(pop)
}
