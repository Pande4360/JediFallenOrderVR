#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ProjectileMovementComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwMissileMovementComponent : public _Script_Engine::ProjectileMovementComponent {
    private: char pad_270[0x40]; public:
    void* get_OnFinishedHoming();
    float& get_Acceleration();
    float& get_TrackingLerpValue();
    float& get_Speed();
    float& get_Jerk();
    static _Script_CoreUObject::Class* static_class();
    void StopHoming();
    void SetSpeed(float InSpeed);
    void SetMaxSpeed(float InMaxSpeed);
    void SetJerk(float InJerk);
    void SetHomingTarget(_Script_Engine::Actor* HomingTargetActor);
    void SetAcceleration(float InAcceleration);
    void NotifyEndForcePull();
    void NotifyBeginForcePull();
    bool IsInteruptedByTK();
    void InteruptByTK();
    float GetSpeed();
    float GetMissileMaxSpeed();
    float GetJerk();
    _Script_Engine::Actor* GetHomingTarget();
    float GetAcceleration();
}; // Size: 0x2b0
#pragma pack(pop)
}
