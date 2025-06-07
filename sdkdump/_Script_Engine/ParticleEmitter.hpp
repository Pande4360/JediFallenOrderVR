#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleEmitter : public _Script_CoreUObject::Object {
    private: char pad_28[0x130]; public:
    void* get_EmitterName();
    int32_t& get_SubUVDataOffset();
    void* get_EmitterRenderMode();
    void* get_SignificanceLevel();
    bool get_bUseLegacySpawningBehavior();
    void set_bUseLegacySpawningBehavior(bool value);
    bool get_ConvertedModules();
    void set_ConvertedModules(bool value);
    bool get_bIsSoloing();
    void set_bIsSoloing(bool value);
    bool get_bCookedOut();
    void set_bCookedOut(bool value);
    bool get_bDisabledLODsKeepEmitterAlive();
    void set_bDisabledLODsKeepEmitterAlive(bool value);
    bool get_bDisableWhenInsignficant();
    void set_bDisableWhenInsignficant(bool value);
    void* get_LODLevels();
    int32_t& get_PeakActiveParticles();
    int32_t& get_InitialAllocationCount();
    float& get_QualityLevelSpawnRateScale();
    void* get_DetailModeBitmask();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x158
#pragma pack(pop)
}
