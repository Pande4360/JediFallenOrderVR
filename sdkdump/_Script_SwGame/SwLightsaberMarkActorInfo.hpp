#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\TableRowBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwLightsaberMarkActorInfo : public _Script_Engine::TableRowBase {
    private: char pad_8[0x70]; public:
    void* get_ActorClass();
    bool get_bPerformAllRaytracesOnHit();
    void set_bPerformAllRaytracesOnHit(bool value);
    int32_t& get_MinSubframeRaycasts();
    int32_t& get_MaxSubframeRaycasts();
    int32_t& get_UVChannel();
    float& get_LineWidth();
    float& get_Intensity();
    float& get_EdgeIntensity();
    void* get_Mask();
    void* get_ParticleEffect();
    float& get_ParticleOffsetAlongNormal();
    bool get_bPlayAudio();
    void set_bPlayAudio(bool value);
    void* get_SurfaceTypeAudioOverride();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x78
#pragma pack(pop)
}
