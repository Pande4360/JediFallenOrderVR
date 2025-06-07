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
struct MaterialInstanceBasePropertyOverrides {
    private: char pad_0[0x24]; public:
    bool get_bOverride_OpacityMaskClipValue();
    void set_bOverride_OpacityMaskClipValue(bool value);
    bool get_bOverride_BlendMode();
    void set_bOverride_BlendMode(bool value);
    bool get_bOverride_ShadingModel();
    void set_bOverride_ShadingModel(bool value);
    bool get_bOverride_DitheredLODTransition();
    void set_bOverride_DitheredLODTransition(bool value);
    bool get_bOverride_CastDynamicShadowAsMasked();
    void set_bOverride_CastDynamicShadowAsMasked(bool value);
    bool get_bOverride_TwoSided();
    void set_bOverride_TwoSided(bool value);
    bool get_bOverride_UsesDitherFactor();
    void set_bOverride_UsesDitherFactor(bool value);
    bool get_bOverride_GroundBlending();
    void set_bOverride_GroundBlending(bool value);
    bool get_bOverride_DitheredOpacityFadeStart();
    void set_bOverride_DitheredOpacityFadeStart(bool value);
    bool get_bOverride_DitheredOpacityFadeEnd();
    void set_bOverride_DitheredOpacityFadeEnd(bool value);
    bool get_bOverride_EmissiveBrightnessRange();
    void set_bOverride_EmissiveBrightnessRange(bool value);
    float& get_DitheredOpacityFadeStart();
    float& get_DitheredOpacityFadeEnd();
    float& get_EmissiveBrightnessRange();
    float& get_OpacityMaskClipValue();
    void* get_BlendMode();
    void* get_ShadingModel();
    bool get_TwoSided();
    void set_TwoSided(bool value);
    bool get_DitheredLODTransition();
    void set_DitheredLODTransition(bool value);
    bool get_bCastDynamicShadowAsMasked();
    void set_bCastDynamicShadowAsMasked(bool value);
    bool get_bUsesDitherFactor();
    void set_bUsesDitherFactor(bool value);
    bool get_bUsesGroundBlending();
    void set_bUsesGroundBlending(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x24
#pragma pack(pop)
}
