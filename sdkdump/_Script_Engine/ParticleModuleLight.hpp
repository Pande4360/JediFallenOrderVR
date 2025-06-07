#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleLightBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleLight : public ParticleModuleLightBase {
    private: char pad_30[0x110]; public:
    bool get_bUseInverseSquaredFalloff();
    void set_bUseInverseSquaredFalloff(bool value);
    bool get_bAffectsTranslucency();
    void set_bAffectsTranslucency(bool value);
    bool get_bPreviewLightRadius();
    void set_bPreviewLightRadius(bool value);
    float& get_SpawnFraction();
    void* get_ColorScaleOverLife();
    void* get_BrightnessOverLife();
    void* get_RadiusScale();
    void* get_LightExponent();
    void* get_LightingChannels();
    float& get_VolumetricScatteringIntensity();
    bool get_bHighQualityLights();
    void set_bHighQualityLights(bool value);
    bool get_bShadowCastingLights();
    void set_bShadowCastingLights(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x140
#pragma pack(pop)
}
