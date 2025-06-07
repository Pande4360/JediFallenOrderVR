#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct ParticleModuleRequired;
}
namespace _Script_Engine {
struct ParticleModuleSpawn;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct ParticleModuleSpawnPerUnit;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct GPUSpriteEmitterInfo {
    private: char pad_0[0x2d0]; public:
    _Script_Engine::ParticleModuleRequired*& get_RequiredModule();
    _Script_Engine::ParticleModuleSpawn*& get_SpawnModule();
    _Script_Engine::ParticleModuleSpawnPerUnit*& get_SpawnPerUnitModule();
    void* get_SpawnModules();
    void* get_LocalVectorField();
    void* get_VectorFieldScale();
    void* get_DragCoefficient();
    void* get_PointAttractorStrength();
    void* get_Resilience();
    void* get_ConstantAcceleration();
    void* get_PointAttractorPosition();
    float& get_PointAttractorRadiusSq();
    void* get_OrbitOffsetBase();
    void* get_OrbitOffsetRange();
    void* get_InvMaxSize();
    float& get_InvRotationRateScale();
    float& get_MaxLifetime();
    int32_t& get_MaxParticleCount();
    void* get_ScreenAlignment();
    void* get_LockAxisFlag();
    bool get_bEnableCollision();
    void set_bEnableCollision(bool value);
    void* get_CollisionMode();
    bool get_bRemoveHMDRoll();
    void set_bRemoveHMDRoll(bool value);
    float& get_MinFacingCameraBlendDistance();
    float& get_MaxFacingCameraBlendDistance();
    void* get_DynamicColor();
    void* get_DynamicAlpha();
    void* get_DynamicColorScale();
    void* get_DynamicAlphaScale();
    bool get_bGPUReadGBufferColor();
    void set_bGPUReadGBufferColor(bool value);
    float& get_SnapToDepthThreshold();
    float& get_SnapToNormalThreshold();
    float& get_ParticleFieldSize();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2d0
#pragma pack(pop)
}
