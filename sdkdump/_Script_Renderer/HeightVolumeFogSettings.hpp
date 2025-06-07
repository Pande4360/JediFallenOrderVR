#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct TextureCube;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Renderer {
#pragma pack(push, 1)
struct HeightVolumeFogSettings {
    private: char pad_0[0xa8]; public:
    bool get_bOverride_FogEnable();
    void set_bOverride_FogEnable(bool value);
    bool get_bOverride_FogHeight();
    void set_bOverride_FogHeight(bool value);
    bool get_bOverride_FogDensity();
    void set_bOverride_FogDensity(bool value);
    bool get_bOverride_FogInscatteringColor();
    void set_bOverride_FogInscatteringColor(bool value);
    bool get_bOverride_FogInscatteringColorCubemap();
    void set_bOverride_FogInscatteringColorCubemap(bool value);
    bool get_bOverride_FogInscatteringColorCubemapAngle();
    void set_bOverride_FogInscatteringColorCubemapAngle(bool value);
    bool get_bOverride_FogInscatteringTextureTint();
    void set_bOverride_FogInscatteringTextureTint(bool value);
    bool get_bOverride_FogFullyDirectionalInscatteringColorDistance();
    void set_bOverride_FogFullyDirectionalInscatteringColorDistance(bool value);
    bool get_bOverride_FogNonDirectionalInscatteringColorDistance();
    void set_bOverride_FogNonDirectionalInscatteringColorDistance(bool value);
    bool get_bOverride_FogDirectionalInscatteringExponent();
    void set_bOverride_FogDirectionalInscatteringExponent(bool value);
    bool get_bOverride_FogDirectionalInscatteringStartDistance();
    void set_bOverride_FogDirectionalInscatteringStartDistance(bool value);
    bool get_bOverride_FogDirectionalInscatteringColor();
    void set_bOverride_FogDirectionalInscatteringColor(bool value);
    bool get_bOverride_FogHeightFalloff();
    void set_bOverride_FogHeightFalloff(bool value);
    bool get_bOverride_FogMaxOpacity();
    void set_bOverride_FogMaxOpacity(bool value);
    bool get_bOverride_FogStartDistance();
    void set_bOverride_FogStartDistance(bool value);
    bool get_bOverride_FogCutoffDistance();
    void set_bOverride_FogCutoffDistance(bool value);
    bool get_bOverride_VolumetricFogEnable();
    void set_bOverride_VolumetricFogEnable(bool value);
    bool get_bOverride_VolumetricFogScatteringDistribution();
    void set_bOverride_VolumetricFogScatteringDistribution(bool value);
    bool get_bOverride_VolumetricFogAlbedo();
    void set_bOverride_VolumetricFogAlbedo(bool value);
    bool get_bOverride_VolumetricFogEmissive();
    void set_bOverride_VolumetricFogEmissive(bool value);
    bool get_bOverride_VolumetricFogExtinctionScale();
    void set_bOverride_VolumetricFogExtinctionScale(bool value);
    bool get_bOverride_VolumetricFogDistance();
    void set_bOverride_VolumetricFogDistance(bool value);
    bool get_bOverride_VolumetricFogStaticLightingScatteringIntensity();
    void set_bOverride_VolumetricFogStaticLightingScatteringIntensity(bool value);
    bool get_bOverride_VolumetricFogOverrideLightColorsWithFogInscatteringColors();
    void set_bOverride_VolumetricFogOverrideLightColorsWithFogInscatteringColors(bool value);
    bool get_bFogEnable();
    void set_bFogEnable(bool value);
    float& get_FogHeight();
    float& get_FogDensity();
    void* get_FogInscatteringColor();
    _Script_Engine::TextureCube*& get_FogInscatteringColorCubemap();
    float& get_FogInscatteringColorCubemapAngle();
    void* get_FogInscatteringTextureTint();
    float& get_FogFullyDirectionalInscatteringColorDistance();
    float& get_FogNonDirectionalInscatteringColorDistance();
    float& get_FogDirectionalInscatteringExponent();
    float& get_FogDirectionalInscatteringStartDistance();
    void* get_FogDirectionalInscatteringColor();
    float& get_FogHeightFalloff();
    float& get_FogMaxOpacity();
    float& get_FogStartDistance();
    float& get_FogCutoffDistance();
    bool get_bVolumetricFogEnable();
    void set_bVolumetricFogEnable(bool value);
    float& get_VolumetricFogScatteringDistribution();
    void* get_VolumetricFogAlbedo();
    void* get_VolumetricFogEmissive();
    float& get_VolumetricFogExtinctionScale();
    float& get_VolumetricFogDistance();
    float& get_VolumetricFogStaticLightingScatteringIntensity();
    bool get_bVolumetricFogOverrideLightColorsWithFogInscatteringColors();
    void set_bVolumetricFogOverrideLightColorsWithFogInscatteringColors(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa8
#pragma pack(pop)
}
