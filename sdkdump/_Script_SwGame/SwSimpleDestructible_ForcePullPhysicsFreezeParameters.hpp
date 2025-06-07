#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwSimpleDestructible_ForcePullPhysicsFreezeParameters {
    private: char pad_0[0x18]; public:
    bool get_FreezePhysicsOnForceHold();
    void set_FreezePhysicsOnForceHold(bool value);
    bool get_FreezePhysicsLinearMovement();
    void set_FreezePhysicsLinearMovement(bool value);
    bool get_FreezePhysicsAngularMovement();
    void set_FreezePhysicsAngularMovement(bool value);
    float& get_TimeToFreezePhysicsOnForceHold();
    void* get_HeroControlBoneName();
    float& get_ControlBoneStartTime();
    float& get_ControlBoneFinishTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
