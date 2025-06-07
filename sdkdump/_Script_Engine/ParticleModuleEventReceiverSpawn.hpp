#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleEventReceiverBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleEventReceiverSpawn : public ParticleModuleEventReceiverBase {
    private: char pad_40[0xa8]; public:
    void* get_SpawnCount();
    bool get_bUseParticleTime();
    void set_bUseParticleTime(bool value);
    bool get_bUsePSysLocation();
    void set_bUsePSysLocation(bool value);
    bool get_bInheritVelocity();
    void set_bInheritVelocity(bool value);
    void* get_InheritVelocityScale();
    void* get_PhysicalMaterials();
    bool get_bBanPhysicalMaterials();
    void set_bBanPhysicalMaterials(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe8
#pragma pack(pop)
}
