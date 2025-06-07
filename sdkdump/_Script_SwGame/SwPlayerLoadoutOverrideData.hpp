#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwPlayerLoadoutOverrideData : public _Script_Engine::DataAsset {
    private: char pad_30[0x50]; public:
    void* get_Loadout();
    void* get_Upgrades();
    int32_t& get_HealthMeterLevel();
    int32_t& get_ForceMeterLevel();
    int32_t& get_HealthPotCount();
    void* get_LevelTags();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
