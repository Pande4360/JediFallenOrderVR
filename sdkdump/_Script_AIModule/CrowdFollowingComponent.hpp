#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PathFollowingComponent.hpp"
namespace _Script_Engine {
struct CharacterMovementComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct CrowdFollowingComponent : public PathFollowingComponent {
    private: char pad_318[0x40]; public:
    _Script_Engine::CharacterMovementComponent*& get_CharacterMovement();
    void* get_CrowdAgentMoveDirection();
    static _Script_CoreUObject::Class* static_class();
    void SuspendCrowdSteering(bool bSuspend);
}; // Size: 0x358
#pragma pack(pop)
}
