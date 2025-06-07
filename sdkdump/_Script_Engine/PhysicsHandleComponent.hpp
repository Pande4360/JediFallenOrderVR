#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "ActorComponent.hpp"
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PhysicsHandleComponent : public ActorComponent {
    private: char pad_170[0xb0]; public:
    _Script_Engine::PrimitiveComponent*& get_GrabbedComponent();
    bool get_bSoftAngularConstraint();
    void set_bSoftAngularConstraint(bool value);
    bool get_bSoftLinearConstraint();
    void set_bSoftLinearConstraint(bool value);
    bool get_bInterpolateTarget();
    void set_bInterpolateTarget(bool value);
    float& get_LinearDamping();
    float& get_LinearStiffness();
    float& get_AngularDamping();
    float& get_AngularStiffness();
    float& get_InterpolationSpeed();
    static _Script_CoreUObject::Class* static_class();
    void SetTargetRotation(_Script_CoreUObject::Rotator NewRotation);
    void SetTargetLocationAndRotation(_Script_CoreUObject::Vector NewLocation, _Script_CoreUObject::Rotator NewRotation);
    void SetTargetLocation(_Script_CoreUObject::Vector NewLocation);
    void SetLinearStiffness(float NewLinearStiffness);
    void SetLinearDamping(float newLinearDamping);
    void SetInterpolationSpeed(float NewInterpolationSpeed);
    void SetAngularStiffness(float NewAngularStiffness);
    void SetAngularDamping(float newAngularDamping);
    void ReleaseComponent();
    void GrabComponentAtLocationWithRotation(_Script_Engine::PrimitiveComponent* Component, void* InBoneName, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation);
    void GrabComponentAtLocation(_Script_Engine::PrimitiveComponent* Component, void* InBoneName, _Script_CoreUObject::Vector GrabLocation);
    void GrabComponent(_Script_Engine::PrimitiveComponent* Component, void* InBoneName, _Script_CoreUObject::Vector GrabLocation, bool bConstrainRotation);
    void GetTargetLocationAndRotation(_Script_CoreUObject::Vector& TargetLocation, _Script_CoreUObject::Rotator& TargetRotation);
    _Script_Engine::PrimitiveComponent* GetGrabbedComponent();
}; // Size: 0x220
#pragma pack(pop)
}
