#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleBeamBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleBeamTarget : public ParticleModuleBeamBase {
    private: char pad_30[0x108]; public:
    void* get_TargetMethod();
    void* get_TargetName();
    void* get_Target();
    bool get_bTargetAbsolute();
    void set_bTargetAbsolute(bool value);
    bool get_bLockTarget();
    void set_bLockTarget(bool value);
    void* get_TargetTangentMethod();
    void* get_TargetTangent();
    bool get_bLockTargetTangent();
    void set_bLockTargetTangent(bool value);
    void* get_TargetStrength();
    bool get_bLockTargetStength();
    void set_bLockTargetStength(bool value);
    float& get_LockRadius();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x138
#pragma pack(pop)
}
