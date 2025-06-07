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
struct SwSimpleDestructible_PhasePhysicsParameters {
    private: char pad_0[0x28]; public:
    float& get_PhysicsLinearImpulseStrength();
    float& get_PhysicsLinearImpulseRandomVariation();
    float& get_PhysicsAngularImpulseStrength();
    float& get_PhysicsAngularImpulseRandomVariation();
    bool get_StartPhysicsAtTheEndOfAnimation();
    void set_StartPhysicsAtTheEndOfAnimation(bool value);
    bool get_StartPhysicsOnAttachedComponents();
    void set_StartPhysicsOnAttachedComponents(bool value);
    bool get_InheritInitialVelocityFromParentComponent();
    void set_InheritInitialVelocityFromParentComponent(bool value);
    void* get_StartPhysicsOnBonesWithPrefix();
    float& get_DirectionalHitImpulseStrength();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
