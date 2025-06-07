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
struct LightmassPrimitiveSettings {
    private: char pad_0[0x18]; public:
    bool get_bUseTwoSidedLighting();
    void set_bUseTwoSidedLighting(bool value);
    bool get_bShadowIndirectOnly();
    void set_bShadowIndirectOnly(bool value);
    bool get_bUseEmissiveForStaticLighting();
    void set_bUseEmissiveForStaticLighting(bool value);
    bool get_bUseVertexNormalForHemisphereGather();
    void set_bUseVertexNormalForHemisphereGather(bool value);
    float& get_EmissiveLightFalloffExponent();
    float& get_EmissiveLightExplicitInfluenceRadius();
    float& get_EmissiveBoost();
    float& get_DiffuseBoost();
    float& get_FullyOccludedSamplesFraction();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
