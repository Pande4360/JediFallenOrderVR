#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsPhysicalAnimationNotifyParameters {
    private: char pad_0[0x20]; public:
    void* get_BoneName();
    bool get_ModifyVelocityDriveStrength();
    void set_ModifyVelocityDriveStrength(bool value);
    float& get_VelocityDriveStrength();
    bool get_ModifyPhysicsBlendWeight();
    void set_ModifyPhysicsBlendWeight(bool value);
    float& get_PhysicsBlendWeight();
    float& get_PhysicsBlendWeightFadeInTime();
    float& get_PhysicsBlendWeightFadeOutTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
