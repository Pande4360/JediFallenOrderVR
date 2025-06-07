#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct ParticleModuleRequired;
}
namespace _Script_Engine {
struct ParticleModuleTypeDataBase;
}
namespace _Script_Engine {
struct ParticleModuleEventGenerator;
}
namespace _Script_Engine {
struct ParticleModuleSpawn;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleLODLevel : public _Script_CoreUObject::Object {
    private: char pad_28[0x90]; public:
    int32_t& get_Level();
    bool get_bEnabled();
    void set_bEnabled(bool value);
    _Script_Engine::ParticleModuleRequired*& get_RequiredModule();
    void* get_Modules();
    _Script_Engine::ParticleModuleTypeDataBase*& get_TypeDataModule();
    _Script_Engine::ParticleModuleSpawn*& get_SpawnModule();
    _Script_Engine::ParticleModuleEventGenerator*& get_EventGenerator();
    void* get_SpawningModules();
    void* get_SpawnModules();
    void* get_UpdateModules();
    void* get_OrbitModules();
    void* get_EventReceiverModules();
    bool get_ConvertedModules();
    void set_ConvertedModules(bool value);
    int32_t& get_PeakActiveParticles();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb8
#pragma pack(pop)
}
