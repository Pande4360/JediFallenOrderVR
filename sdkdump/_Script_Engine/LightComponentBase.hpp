#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "SceneComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct LightComponentBase : public SceneComponent {
    private: char pad_2d0[0x30]; public:
    void* get_LightGuid();
    float& get_Brightness();
    float& get_Intensity();
    void* get_LightColor();
    bool get_bAffectsWorld();
    void set_bAffectsWorld(bool value);
    bool get_CastShadows();
    void set_CastShadows(bool value);
    bool get_CastStaticShadows();
    void set_CastStaticShadows(bool value);
    bool get_CastDynamicShadows();
    void set_CastDynamicShadows(bool value);
    bool get_bAffectTranslucentLighting();
    void set_bAffectTranslucentLighting(bool value);
    bool get_bTransmission();
    void set_bTransmission(bool value);
    bool get_bCastVolumetricShadow();
    void set_bCastVolumetricShadow(bool value);
    bool get_bBakeDirectToVolumetricLightmap();
    void set_bBakeDirectToVolumetricLightmap(bool value);
    float& get_MaxDynamicShadowDistance();
    float& get_IndirectLightingIntensity();
    float& get_VolumetricScatteringIntensity();
    static _Script_CoreUObject::Class* static_class();
    void SetCastVolumetricShadow(bool bNewValue);
    void SetCastShadows(bool bNewValue);
    _Script_CoreUObject::LinearColor GetLightColor();
}; // Size: 0x300
#pragma pack(pop)
}
