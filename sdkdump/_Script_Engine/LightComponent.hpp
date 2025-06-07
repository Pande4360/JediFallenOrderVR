#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Color.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "LightComponentBase.hpp"
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct TextureLightProfile;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct LightComponent : public LightComponentBase {
    private: char pad_300[0x100]; public:
    float& get_Temperature();
    float& get_MinDrawDistance();
    float& get_MinDistanceFadeRange();
    float& get_MaxDrawDistance();
    float& get_MaxDistanceFadeRange();
    bool get_bUseTemperature();
    void set_bUseTemperature(bool value);
    int32_t& get_ShadowMapChannel();
    float& get_MinRoughness();
    float& get_SpecularScale();
    float& get_ShadowResolutionScale();
    float& get_ShadowBias();
    float& get_ShadowSharpen();
    float& get_ContactShadowLength();
    bool get_ContactShadowLengthInWS();
    void set_ContactShadowLengthInWS(bool value);
    bool get_InverseSquaredFalloff();
    void set_InverseSquaredFalloff(bool value);
    bool get_CastTranslucentShadows();
    void set_CastTranslucentShadows(bool value);
    bool get_bCastShadowsFromCinematicObjectsOnly();
    void set_bCastShadowsFromCinematicObjectsOnly(bool value);
    bool get_bAffectDynamicIndirectLighting();
    void set_bAffectDynamicIndirectLighting(bool value);
    bool get_bForceCachedShadowsForMovablePrimitives();
    void set_bForceCachedShadowsForMovablePrimitives(bool value);
    bool get_bStaticSourceVisibleInReflectionCaptures();
    void set_bStaticSourceVisibleInReflectionCaptures(bool value);
    bool get_bVisibleInReflectionCaptures();
    void set_bVisibleInReflectionCaptures(bool value);
    void* get_LightingChannels();
    _Script_Engine::MaterialInterface*& get_LightFunctionMaterial();
    void* get_LightFunctionScale();
    _Script_Engine::TextureLightProfile*& get_IESTexture();
    bool get_bUseIESBrightness();
    void set_bUseIESBrightness(bool value);
    float& get_IESBrightnessScale();
    float& get_LightFunctionFadeDistance();
    float& get_DisabledBrightness();
    bool get_bEnableLightShaftBloom();
    void set_bEnableLightShaftBloom(bool value);
    float& get_BloomScale();
    float& get_BloomThreshold();
    void* get_BloomTint();
    bool get_bUseRayTracedDistanceFieldShadows();
    void set_bUseRayTracedDistanceFieldShadows(bool value);
    float& get_RayStartOffsetDepthScale();
    static _Script_CoreUObject::Class* static_class();
    void SetVolumetricScatteringIntensity(float NewIntensity);
    void SetTransmission(bool bNewValue);
    void SetTemperature(float NewTemperature);
    void SetShadowBias(float NewValue);
    void SetMinRoughness(float NewValue);
    void SetLightFunctionScale(_Script_CoreUObject::Vector NewLightFunctionScale);
    void SetLightFunctionMaterial(_Script_Engine::MaterialInterface* NewLightFunctionMaterial);
    void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance);
    void SetLightFunctionDisabledBrightness(float NewValue);
    void SetLightColor(_Script_CoreUObject::LinearColor NewLightColor, bool bSRGB);
    void SetIntensity(float NewIntensity);
    void SetIndirectLightingIntensity(float NewIntensity);
    void SetIESTexture(_Script_Engine::TextureLightProfile* NewValue);
    void SetForceCachedShadowsForMovablePrimitives(bool bNewValue);
    void SetEnableLightShaftBloom(bool bNewValue);
    void SetBloomTint(_Script_CoreUObject::Color NewValue);
    void SetBloomThreshold(float NewValue);
    void SetBloomScale(float NewValue);
    void SetAffectTranslucentLighting(bool bNewValue);
    void SetAffectDynamicIndirectLighting(bool bNewValue);
}; // Size: 0x400
#pragma pack(pop)
}
