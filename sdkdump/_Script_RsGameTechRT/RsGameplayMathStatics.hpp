#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsGameplayMathStatics : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void SelectRandomVectorFromArray(void*& Array, _Script_CoreUObject::Vector& OutVector, int32_t& SelectedIndex);
    float RandomSign();
    float RandomFloatAroundBaseValue(float BaseValue, float MaxNegativeDifference, float MaxPositiveDifference);
    _Script_CoreUObject::Vector ProjectDirectionOnHorizontal(_Script_CoreUObject::Vector Direction);
    _Script_CoreUObject::Vector GetDecalNormalFromHit(_Script_Engine::Actor* MovingActor, _Script_CoreUObject::Vector ImpactPoint, _Script_CoreUObject::Vector ImpactNormal);
    void* GetActorRelativeQuadrant(_Script_Engine::Actor* SelfActor, _Script_Engine::Actor* TargetActor, float CenterRadius);
    _Script_CoreUObject::Vector CalculateStaggeringShotVector(_Script_CoreUObject::Vector Direction, float MinAngle, float MaxAngle, _Script_CoreUObject::Vector Axis);
    _Script_CoreUObject::Vector ApproximateTrackingShotVector(_Script_CoreUObject::Vector ProjectilePosition, float ProjectileSpeed, _Script_CoreUObject::Vector TargetPosition, _Script_CoreUObject::Vector TargetVelocity);
    _Script_CoreUObject::Vector ActorRelativeVectorToWorldVector(_Script_Engine::Actor* Actor, _Script_CoreUObject::Vector LocalVector);
    _Script_CoreUObject::Vector ActorRelativeVectorToWorldDirection(_Script_Engine::Actor* Actor, _Script_CoreUObject::Vector Vector);
}; // Size: 0x28
#pragma pack(pop)
}
