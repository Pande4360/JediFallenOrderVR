#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwCollisionDamageData : public _Script_Engine::DataAsset {
    private: char pad_30[0xa8]; public:
    void* get_GlancingDamageToOther();
    void* get_DirectDamageToOther();
    bool get_bShouldAlwaysTakeDamageAgainstCharacter();
    void set_bShouldAlwaysTakeDamageAgainstCharacter(bool value);
    void* get_GlancingDamageToSelfAgainstCharacter();
    void* get_DirectDamageToSelfAgainstCharacter();
    void* get_GlancingDamageToSelfAgainstNonCharacter();
    void* get_DirectDamageToSelfAgainstNonCharacter();
    float& get_MinSpeedToCollide();
    float& get_ThresholdAngle();
    float& get_HeadOnAngle();
    _Script_Engine::MaterialInterface*& get_Decal();
    void* get_DecalSize();
    float& get_DecalLifetime();
    void* get_ShakeType();
    float& get_ShakeDistance();
    float& get_ControllerRumbleIntensity();
    float& get_ControllerRumbleDuration();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd8
#pragma pack(pop)
}
