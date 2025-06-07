#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct LightmassWorldInfoSettings {
    private: char pad_0[0x54]; public:
    float& get_StaticLightingLevelScale();
    int32_t& get_NumIndirectLightingBounces();
    int32_t& get_NumSkyLightingBounces();
    float& get_IndirectLightingQuality();
    float& get_IndirectLightingSmoothness();
    void* get_EnvironmentColor();
    float& get_EnvironmentIntensity();
    float& get_EmissiveBoost();
    float& get_DiffuseBoost();
    void* get_VolumeLightingMethod();
    float& get_VolumetricLightmapDetailCellSize();
    float& get_VolumetricLightmapMaximumBrickMemoryMb();
    float& get_VolumetricLightmapSphericalHarmonicSmoothing();
    float& get_VolumeLightSamplePlacementScale();
    bool get_bUseAmbientOcclusion();
    void set_bUseAmbientOcclusion(bool value);
    bool get_bGenerateAmbientOcclusionMaterialMask();
    void set_bGenerateAmbientOcclusionMaterialMask(bool value);
    float& get_DirectIlluminationOcclusionFraction();
    float& get_IndirectIlluminationOcclusionFraction();
    float& get_OcclusionExponent();
    float& get_FullyOccludedSamplesFraction();
    float& get_MaxOcclusionDistance();
    bool get_bVisualizeMaterialDiffuse();
    void set_bVisualizeMaterialDiffuse(bool value);
    bool get_bVisualizeAmbientOcclusion();
    void set_bVisualizeAmbientOcclusion(bool value);
    bool get_bCompressLightmaps();
    void set_bCompressLightmaps(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x54
#pragma pack(pop)
}
