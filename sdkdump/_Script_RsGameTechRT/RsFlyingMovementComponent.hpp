#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\CrowdFollowingComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsFlyingMovementComponent : public _Script_AIModule::CrowdFollowingComponent {
    private: char pad_358[0x10]; public:
    static _Script_CoreUObject::Class* static_class();
    void SetEnableFlying(bool enable);
    void OnTopologyChanged(void* previousMode, void* newMode, float Proximity);
    bool IsFlyingEnabled();
}; // Size: 0x368
#pragma pack(pop)
}
