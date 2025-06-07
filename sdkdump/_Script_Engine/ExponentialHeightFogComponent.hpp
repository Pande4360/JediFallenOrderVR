#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Color.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "SceneComponent.hpp"
namespace _Script_Engine {
struct TextureCube;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ExponentialHeightFogComponent : public SceneComponent {
    private: char pad_2d0[0x90]; public:
    float& get_FogDensity();
    void* get_FogInscatteringColor();
    _Script_Engine::TextureCube*& get_InscatteringColorCubemap();
    float& get_InscatteringColorCubemapAngle();
    void* get_InscatteringTextureTint();
    float& get_FullyDirectionalInscatteringColorDistance();
    float& get_NonDirectionalInscatteringColorDistance();
    float& get_DirectionalInscatteringExponent();
    float& get_DirectionalInscatteringStartDistance();
    void* get_DirectionalInscatteringColor();
    float& get_FogHeightFalloff();
    float& get_FogMaxOpacity();
    float& get_StartDistance();
    float& get_FogCutoffDistance();
    bool get_bEnableVolumetricFog();
    void set_bEnableVolumetricFog(bool value);
    float& get_VolumetricFogScatteringDistribution();
    void* get_VolumetricFogAlbedo();
    void* get_VolumetricFogEmissive();
    float& get_VolumetricFogExtinctionScale();
    float& get_VolumetricFogDistance();
    float& get_VolumetricFogStaticLightingScatteringIntensity();
    bool get_bOverrideLightColorsWithFogInscatteringColors();
    void set_bOverrideLightColorsWithFogInscatteringColors(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetVolumetricFogScatteringDistribution(float NewValue);
    void SetVolumetricFogExtinctionScale(float NewValue);
    void SetVolumetricFogEmissive(_Script_CoreUObject::LinearColor NewValue);
    void SetVolumetricFogDistance(float NewValue);
    void SetVolumetricFogAlbedo(_Script_CoreUObject::Color NewValue);
    void SetVolumetricFog(bool bNewValue);
    void SetStartDistance(float Value);
    void SetNonDirectionalInscatteringColorDistance(float Value);
    void SetInscatteringTextureTint(_Script_CoreUObject::LinearColor Value);
    void SetInscatteringColorCubemapAngle(float Value);
    void SetInscatteringColorCubemap(_Script_Engine::TextureCube* Value);
    void SetFullyDirectionalInscatteringColorDistance(float Value);
    void SetFogMaxOpacity(float Value);
    void SetFogInscatteringColor(_Script_CoreUObject::LinearColor Value);
    void SetFogHeightFalloff(float Value);
    void SetFogDensity(float Value);
    void SetFogCutoffDistance(float Value);
    void SetDirectionalInscatteringStartDistance(float Value);
    void SetDirectionalInscatteringExponent(float Value);
    void SetDirectionalInscatteringColor(_Script_CoreUObject::LinearColor Value);
}; // Size: 0x360
#pragma pack(pop)
}
