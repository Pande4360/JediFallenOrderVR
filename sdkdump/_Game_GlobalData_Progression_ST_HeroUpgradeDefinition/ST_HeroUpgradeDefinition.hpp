#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_GlobalData_Progression_ST_HeroUpgradeDefinition {
#pragma pack(push, 1)
struct ST_HeroUpgradeDefinition {
    private: char pad_0[0x4]; public:
    float& get_AmountPerUpgrade_46_4CF4B5DF46912389C9BB20BAE10D2338();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4
#pragma pack(pop)
}
