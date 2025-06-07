#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleRotationBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleMeshRotation : public ParticleModuleRotationBase {
    private: char pad_30[0x58]; public:
    void* get_StartRotation();
    bool get_bInheritParent();
    void set_bInheritParent(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
