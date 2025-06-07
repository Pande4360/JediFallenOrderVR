#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleCollisionBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleCollision : public ParticleModuleCollisionBase {
    private: char pad_30[0x188]; public:
    void* get_DampingFactor();
    void* get_DampingFactorRotation();
    void* get_MaxCollisions();
    void* get_CollisionCompletionOption();
    void* get_CollisionTypes();
    bool get_bApplyPhysics();
    void set_bApplyPhysics(bool value);
    bool get_bIgnoreTriggerVolumes();
    void set_bIgnoreTriggerVolumes(bool value);
    void* get_ParticleMass();
    float& get_DirScalar();
    bool get_bPawnsDoNotDecrementCount();
    void set_bPawnsDoNotDecrementCount(bool value);
    bool get_bOnlyVerticalNormalsDecrementCount();
    void set_bOnlyVerticalNormalsDecrementCount(bool value);
    float& get_VerticalFudgeFactor();
    void* get_DelayAmount();
    bool get_bDropDetail();
    void set_bDropDetail(bool value);
    bool get_bCollideOnlyIfVisible();
    void set_bCollideOnlyIfVisible(bool value);
    bool get_bIgnoreSourceActor();
    void set_bIgnoreSourceActor(bool value);
    float& get_MaxCollisionDistance();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1b8
#pragma pack(pop)
}
