#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNotify.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct RsAnimNotify_TriggerAbility : public _Script_Engine::AnimNotify {
    private: char pad_38[0x10]; public:
    void* get_AbilityType();
    bool get_bShouldUseHighestAcquiredUpgrade();
    void set_bShouldUseHighestAcquiredUpgrade(bool value);
    void* get_UpgradeLevel();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
