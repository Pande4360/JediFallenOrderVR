#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Renderer {
#pragma pack(push, 1)
struct LightPropagationVolumeSettings {
    private: char pad_0[0x40]; public:
    bool get_bOverride_LPVIntensity();
    void set_bOverride_LPVIntensity(bool value);
    bool get_bOverride_LPVDirectionalOcclusionIntensity();
    void set_bOverride_LPVDirectionalOcclusionIntensity(bool value);
    bool get_bOverride_LPVDirectionalOcclusionRadius();
    void set_bOverride_LPVDirectionalOcclusionRadius(bool value);
    bool get_bOverride_LPVDiffuseOcclusionExponent();
    void set_bOverride_LPVDiffuseOcclusionExponent(bool value);
    bool get_bOverride_LPVSpecularOcclusionExponent();
    void set_bOverride_LPVSpecularOcclusionExponent(bool value);
    bool get_bOverride_LPVDiffuseOcclusionIntensity();
    void set_bOverride_LPVDiffuseOcclusionIntensity(bool value);
    bool get_bOverride_LPVSpecularOcclusionIntensity();
    void set_bOverride_LPVSpecularOcclusionIntensity(bool value);
    bool get_bOverride_LPVSize();
    void set_bOverride_LPVSize(bool value);
    bool get_bOverride_LPVSecondaryOcclusionIntensity();
    void set_bOverride_LPVSecondaryOcclusionIntensity(bool value);
    bool get_bOverride_LPVSecondaryBounceIntensity();
    void set_bOverride_LPVSecondaryBounceIntensity(bool value);
    bool get_bOverride_LPVGeometryVolumeBias();
    void set_bOverride_LPVGeometryVolumeBias(bool value);
    bool get_bOverride_LPVVplInjectionBias();
    void set_bOverride_LPVVplInjectionBias(bool value);
    bool get_bOverride_LPVEmissiveInjectionIntensity();
    void set_bOverride_LPVEmissiveInjectionIntensity(bool value);
    float& get_LPVIntensity();
    float& get_LPVVplInjectionBias();
    float& get_LPVSize();
    float& get_LPVSecondaryOcclusionIntensity();
    float& get_LPVSecondaryBounceIntensity();
    float& get_LPVGeometryVolumeBias();
    float& get_LPVEmissiveInjectionIntensity();
    float& get_LPVDirectionalOcclusionIntensity();
    float& get_LPVDirectionalOcclusionRadius();
    float& get_LPVDiffuseOcclusionExponent();
    float& get_LPVSpecularOcclusionExponent();
    float& get_LPVDiffuseOcclusionIntensity();
    float& get_LPVSpecularOcclusionIntensity();
    float& get_LPVFadeRange();
    float& get_LPVDirectionalOcclusionFadeRange();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
