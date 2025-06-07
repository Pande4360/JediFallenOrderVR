#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_WorldInteracts_Navigation_Rope_RopeForce {
#pragma pack(push, 1)
struct RopeForce {
    private: char pad_0[0x2c]; public:
    void* get_ForceDirection_2_53B094CF47BFE05DECC0C8A7E793DAFF();
    float& get_ForceMagnitude_5_859848E74352FFD3C9EAE29DEB985B7F();
    int32_t& get_ApplyToParticleIndex_12_CDAD1CA243EC8F365EF6DEA466EC1D21();
    int32_t& get_AffectedParticlesRadius_20_27CEFDA54FC7E943DAB08681B066D425();
    float& get_AffectedParticlesDropoff_19_17DA74364594C06241261AB1676714C7();
    float& get_Duration_16_4C663D334A4DC01404A2CD915705194B();
    float& get_ScaleForceWithTimeRatio_30_DF12AEDD41581E408635A59E2E94ED64();
    bool get_DebugDraw_22_0877CCD047884F326B762CBE241362A7();
    void set_DebugDraw_22_0877CCD047884F326B762CBE241362A7(bool value);
    float& get_INTERNAL_InitialDuration_28_BDCDE2C74CE71098246B668CCAA09708();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2c
#pragma pack(pop)
}
