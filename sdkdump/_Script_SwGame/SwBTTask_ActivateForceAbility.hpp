#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\BTTaskNode.hpp"
namespace _Script_Engine {
struct AnimationAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwBTTask_ActivateForceAbility : public _Script_AIModule::BTTaskNode {
    private: char pad_70[0x28]; public:
    void* get_AbilityTypeToActivate();
    void* get_UpgradeLevel();
    _Script_Engine::AnimationAsset*& get_OverrideAnimation();
    bool get_bMaintainCharacterMotion();
    void set_bMaintainCharacterMotion(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
