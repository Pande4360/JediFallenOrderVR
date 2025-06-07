#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "LightComponentBase.hpp"
namespace _Script_Engine {
struct TextureCube;
}
namespace _Script_CoreUObject {
struct Color;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SkyLightComponent : public LightComponentBase {
    private: char pad_300[0x1c0]; public:
    void* get_SourceType();
    _Script_Engine::TextureCube*& get_Cubemap();
    float& get_SourceCubemapAngle();
    int32_t& get_CubemapResolution();
    float& get_SkyDistanceThreshold();
    float& get_SkyLightNearPlane();
    bool get_bCaptureEmissiveOnly();
    void set_bCaptureEmissiveOnly(bool value);
    bool get_bLowerHemisphereIsBlack();
    void set_bLowerHemisphereIsBlack(bool value);
    void* get_LowerHemisphereColor();
    float& get_OcclusionMaxDistance();
    float& get_Contrast();
    float& get_OcclusionExponent();
    float& get_MinOcclusion();
    void* get_OcclusionTint();
    void* get_OcclusionCombineMode();
    void* get_SkyBuildDataId();
    _Script_Engine::TextureCube*& get_BlendDestinationCubemap();
    static _Script_CoreUObject::Class* static_class();
    void SetVolumetricScatteringIntensity(float NewIntensity);
    void SetOcclusionTint(_Script_CoreUObject::Color& InTint);
    void SetOcclusionExponent(float InOcclusionExponent);
    void SetOcclusionContrast(float InOcclusionContrast);
    void SetMinOcclusion(float InMinOcclusion);
    void SetLowerHemisphereColor(_Script_CoreUObject::LinearColor& InLowerHemisphereColor);
    void SetLightColor(_Script_CoreUObject::LinearColor NewLightColor);
    void SetIntensity(float NewIntensity);
    void SetIndirectLightingIntensity(float NewIntensity);
    void SetCubemapBlend(_Script_Engine::TextureCube* SourceCubemap, _Script_Engine::TextureCube* DestinationCubemap, float InBlendFraction);
    void SetCubemap(_Script_Engine::TextureCube* NewCubemap);
    void RecaptureSky();
}; // Size: 0x4c0
#pragma pack(pop)
}
