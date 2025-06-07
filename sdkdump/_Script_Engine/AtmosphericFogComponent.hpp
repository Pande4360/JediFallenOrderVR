#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "SceneComponent.hpp"
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AtmosphericFogComponent : public SceneComponent {
    private: char pad_2d0[0x1e0]; public:
    float& get_SunMultiplier();
    float& get_FogMultiplier();
    float& get_DensityMultiplier();
    float& get_DensityOffset();
    float& get_DistanceScale();
    float& get_AltitudeScale();
    float& get_DistanceOffset();
    float& get_GroundOffset();
    float& get_StartDistance();
    float& get_SunDiscScale();
    float& get_DefaultBrightness();
    void* get_DefaultLightColor();
    bool get_bDisableSunDisk();
    void set_bDisableSunDisk(bool value);
    bool get_bDisableGroundScattering();
    void set_bDisableGroundScattering(bool value);
    void* get_PrecomputeParams();
    _Script_Engine::Texture2D*& get_TransmittanceTexture();
    _Script_Engine::Texture2D*& get_IrradianceTexture();
    static _Script_CoreUObject::Class* static_class();
    void StartPrecompute();
    void SetSunMultiplier(float NewSunMultiplier);
    void SetStartDistance(float NewStartDistance);
    void SetPrecomputeParams(float DensityHeight, int32_t MaxScatteringOrder, int32_t InscatterAltitudeSampleNum);
    void SetFogMultiplier(float NewFogMultiplier);
    void SetDistanceScale(float NewDistanceScale);
    void SetDistanceOffset(float NewDistanceOffset);
    void SetDensityOffset(float NewDensityOffset);
    void SetDensityMultiplier(float NewDensityMultiplier);
    void SetDefaultLightColor(_Script_CoreUObject::LinearColor NewLightColor);
    void SetDefaultBrightness(float NewBrightness);
    void SetAltitudeScale(float NewAltitudeScale);
    void DisableSunDisk(bool NewSunDisk);
    void DisableGroundScattering(bool NewGroundScattering);
}; // Size: 0x4b0
#pragma pack(pop)
}
