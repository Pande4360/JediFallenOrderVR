#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\MovementComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwLightsaberMovementComponent : public _Script_Engine::MovementComponent {
    private: char pad_1b0[0x110]; public:
    void* get_OnThrowReturned();
    void* get_OnStartCatch();
    void* get_RotationRate();
    void* get_PivotTranslation();
    bool get_bRotationInLocalSpace();
    void set_bRotationInLocalSpace(bool value);
    bool get_bReturnToThrower();
    void set_bReturnToThrower(bool value);
    bool get_bThrowFixedDistance();
    void set_bThrowFixedDistance(bool value);
    float& get_CatchDistance();
    float& get_DefaultThrowDistance();
    float& get_ArcAmount();
    float& get_HomingDuration();
    void* get_HitEvent();
    float& get_HitDebounceTime();
    static _Script_CoreUObject::Class* static_class();
    void ThrowWithDuration(float InTimeToDestination);
    void ThrowAtSpeed(float Speed);
    void SetCollision(bool EnableCollision);
    void ReturnWithDuration(float Duration);
    void ReturnAtSpeed(float Speed);
    void InitSaberMovement(_Script_Engine::Actor* SaberOwner, _Script_Engine::PrimitiveComponent* Collision, void* AttackType);
    void FlyToWithDuration(_Script_Engine::Actor* InHomingTarget, _Script_CoreUObject::Vector& InTargetLocation, float InTimeToDestination, bool ReturnToThrower);
    void FlyToAtSpeed(_Script_Engine::Actor* InHomingTarget, _Script_CoreUObject::Vector& InTargetLocation, float Speed, bool ReturnToThrower);
}; // Size: 0x2c0
#pragma pack(pop)
}
