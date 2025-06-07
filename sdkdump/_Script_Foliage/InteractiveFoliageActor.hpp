#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\StaticMeshActor.hpp"
namespace _Script_Engine {
struct CapsuleComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Foliage {
#pragma pack(push, 1)
struct InteractiveFoliageActor : public _Script_Engine::StaticMeshActor {
    private: char pad_370[0x60]; public:
    _Script_Engine::CapsuleComponent*& get_CapsuleComponent();
    void* get_TouchingActorEntryPosition();
    void* get_FoliageVelocity();
    void* get_FoliageForce();
    void* get_FoliagePosition();
    float& get_FoliageDamageImpulseScale();
    float& get_FoliageTouchImpulseScale();
    float& get_FoliageStiffness();
    float& get_FoliageStiffnessQuadratic();
    float& get_FoliageDamping();
    float& get_MaxDamageImpulse();
    float& get_MaxTouchImpulse();
    float& get_MaxForce();
    float& get_Mass();
    static _Script_CoreUObject::Class* static_class();
    void CapsuleTouched(_Script_Engine::PrimitiveComponent* OverlappedComp, _Script_Engine::Actor* Other, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& OverlapInfo);
}; // Size: 0x3d0
#pragma pack(pop)
}
