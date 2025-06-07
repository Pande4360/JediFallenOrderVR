#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModule.hpp"
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleRequired : public ParticleModule {
    private: char pad_30[0x140]; public:
    _Script_Engine::MaterialInterface*& get_Material();
    void* get_EmitterOrigin();
    void* get_EmitterRotation();
    void* get_ScreenAlignment();
    float& get_MinFacingCameraBlendDistance();
    float& get_MaxFacingCameraBlendDistance();
    bool get_bUseLocalSpace();
    void set_bUseLocalSpace(bool value);
    bool get_bKillOnDeactivate();
    void set_bKillOnDeactivate(bool value);
    bool get_bKillOnCompleted();
    void set_bKillOnCompleted(bool value);
    void* get_SortMode();
    bool get_bUseLegacyEmitterTime();
    void set_bUseLegacyEmitterTime(bool value);
    bool get_bRemoveHMDRoll();
    void set_bRemoveHMDRoll(bool value);
    float& get_EmitterDuration();
    float& get_EmitterDurationLow();
    bool get_bEmitterDurationUseRange();
    void set_bEmitterDurationUseRange(bool value);
    bool get_bDurationRecalcEachLoop();
    void set_bDurationRecalcEachLoop(bool value);
    int32_t& get_EmitterLoops();
    void* get_SpawnRate();
    void* get_ParticleBurstMethod();
    void* get_BurstList();
    float& get_EmitterDelay();
    float& get_EmitterDelayLow();
    bool get_bEmitterDelayUseRange();
    void set_bEmitterDelayUseRange(bool value);
    bool get_bDelayFirstLoopOnly();
    void set_bDelayFirstLoopOnly(bool value);
    void* get_InterpolationMethod();
    int32_t& get_SubImages_Horizontal();
    int32_t& get_SubImages_Vertical();
    bool get_bScaleUV();
    void set_bScaleUV(bool value);
    float& get_RandomImageTime();
    int32_t& get_RandomImageChanges();
    bool get_bOverrideSystemMacroUV();
    void set_bOverrideSystemMacroUV(bool value);
    void* get_MacroUVPosition();
    float& get_MacroUVRadius();
    bool get_bUseMaxDrawCount();
    void set_bUseMaxDrawCount(bool value);
    int32_t& get_MaxDrawCount();
    void* get_UVFlippingMode();
    _Script_Engine::Texture2D*& get_CutoutTexture();
    void* get_BoundingMode();
    void* get_OpacitySourceMode();
    float& get_AlphaThreshold();
    void* get_EmitterNormalsMode();
    void* get_NormalsSphereCenter();
    void* get_NormalsCylinderDirection();
    bool get_bOrbitModuleAffectsVelocityAlignment();
    void set_bOrbitModuleAffectsVelocityAlignment(bool value);
    void* get_NamedMaterialOverrides();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x170
#pragma pack(pop)
}
