#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsHeroComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct AnimSequence;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct DamageType;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsSpeederBikeComponent : public RsHeroComponent {
    private: char pad_180[0x140]; public:
    float& get_DesiredHeight();
    float& get_WaveHeight();
    float& get_WaveLengthModifier();
    void* get_PushAccelerationCurveAsset();
    float& get_GravitationalForce();
    float& get_ForwardAngleDeadZone();
    float& get_RightAngleDeadZone();
    float& get_UpAngleDeadZone();
    float& get_StrafeDeadZone();
    float& get_MaxForwardLagSpeed();
    float& get_MaxStrafeLagSpeed();
    void* get_ForwardAngleCurveAsset();
    void* get_UpAngleCurveAsset();
    void* get_RightAngleCurveAsset();
    void* get_ForwardAccelerationCurveAsset();
    void* get_StrafeAccelerationCurveAsset();
    static _Script_CoreUObject::Class* static_class();
    void SetEnterAnimation(_Script_Engine::AnimSequence* Animation);
    void OnTakeAnyDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser);
    void EnableBike(_Script_Engine::Actor* Bike);
    void DisableBike();
}; // Size: 0x2c0
#pragma pack(pop)
}
