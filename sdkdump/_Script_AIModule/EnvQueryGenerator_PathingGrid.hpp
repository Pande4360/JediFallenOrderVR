#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "EnvQueryGenerator_SimpleGrid.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct EnvQueryGenerator_PathingGrid : public EnvQueryGenerator_SimpleGrid {
    private: char pad_e8[0x68]; public:
    void* get_PathToItem();
    void* get_NavigationFilter();
    void* get_ScanRangeMultiplier();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x150
#pragma pack(pop)
}
