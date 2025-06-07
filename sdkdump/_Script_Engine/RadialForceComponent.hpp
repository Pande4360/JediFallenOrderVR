#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SceneComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RadialForceComponent : public SceneComponent {
    private: char pad_2d0[0x30]; public:
    float& get_Radius();
    void* get_Falloff();
    float& get_ImpulseStrength();
    bool get_bImpulseVelChange();
    void set_bImpulseVelChange(bool value);
    bool get_bIgnoreOwningActor();
    void set_bIgnoreOwningActor(bool value);
    float& get_ForceStrength();
    float& get_DestructibleDamage();
    void* get_ObjectTypesToAffect();
    static _Script_CoreUObject::Class* static_class();
    void RemoveObjectTypeToAffect(void* ObjectType);
    void FireImpulse();
    void AddObjectTypeToAffect(void* ObjectType);
}; // Size: 0x300
#pragma pack(pop)
}
