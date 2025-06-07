#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "LightComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct LocalLightComponent : public LightComponent {
    private: char pad_400[0x40]; public:
    void* get_IntensityUnits();
    float& get_Radius();
    float& get_AttenuationRadius();
    float& get_LightmassAttenuationRadius();
    float& get_MinLuxFalloff();
    float& get_DistancePercentFalloff();
    bool get_bSeparateLightmassAttenuationRadius();
    void set_bSeparateLightmassAttenuationRadius(bool value);
    float& get_StartFalloffAngle();
    float& get_EndFalloffAngle();
    float& get_AngularFalloffExponent();
    void* get_LightmassSettings();
    static _Script_CoreUObject::Class* static_class();
    void SetStartFalloffAngle(float NewValue);
    void SetEndFalloffAngle(float NewValue);
    void SetAttenuationRadius(float newRadius);
    float GetUnitsConversionFactor(void* SrcUnits, void* TargetUnits, float CosHalfConeAngle);
}; // Size: 0x440
#pragma pack(pop)
}
