#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleLocationBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleLocationEmitter : public ParticleModuleLocationBase {
    private: char pad_30[0x20]; public:
    void* get_EmitterName();
    void* get_SelectionMethod();
    bool get_InheritSourceVelocity();
    void set_InheritSourceVelocity(bool value);
    float& get_InheritSourceVelocityScale();
    bool get_bInheritSourceRotation();
    void set_bInheritSourceRotation(bool value);
    float& get_InheritSourceRotationScale();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
