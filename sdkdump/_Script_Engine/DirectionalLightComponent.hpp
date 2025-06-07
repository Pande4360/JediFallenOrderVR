#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "LightComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct DirectionalLightComponent : public LightComponent {
    private: char pad_400[0x70]; public:
    bool get_bEnableLightShaftOcclusion();
    void set_bEnableLightShaftOcclusion(bool value);
    float& get_OcclusionMaskDarkness();
    float& get_OcclusionDepthRange();
    void* get_LightShaftOverrideDirection();
    float& get_WholeSceneDynamicShadowRadius();
    float& get_DynamicShadowDistanceMovableLight();
    float& get_DynamicShadowDistanceStationaryLight();
    int32_t& get_DynamicShadowCascades();
    float& get_CascadeDistributionExponent();
    float& get_CascadeTransitionFraction();
    float& get_ShadowDistanceFadeoutFraction();
    bool get_bUseInsetShadowsForMovableObjects();
    void set_bUseInsetShadowsForMovableObjects(bool value);
    int32_t& get_FarShadowCascadeCount();
    float& get_FarShadowDistance();
    float& get_DistanceFieldShadowDistance();
    float& get_LightSourceAngle();
    float& get_LightSourceSoftAngle();
    float& get_TraceDistance();
    void* get_LightmassSettings();
    bool get_bCastModulatedShadows();
    void set_bCastModulatedShadows(bool value);
    void* get_ModulatedShadowColor();
    bool get_bUsedAsAtmosphereSunLight();
    void set_bUsedAsAtmosphereSunLight(bool value);
    static _Script_CoreUObject::Class* static_class();
    void SetShadowDistanceFadeoutFraction(float NewValue);
    void SetOcclusionMaskDarkness(float NewValue);
    void SetLightShaftOverrideDirection(_Script_CoreUObject::Vector NewValue);
    void SetEnableLightShaftOcclusion(bool bNewValue);
    void SetDynamicShadowDistanceStationaryLight(float NewValue);
    void SetDynamicShadowDistanceMovableLight(float NewValue);
    void SetDynamicShadowCascades(int32_t NewValue);
    void SetCascadeTransitionFraction(float NewValue);
    void SetCascadeDistributionExponent(float NewValue);
}; // Size: 0x470
#pragma pack(pop)
}
