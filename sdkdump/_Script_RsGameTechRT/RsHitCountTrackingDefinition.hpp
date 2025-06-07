#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsHitCountTrackingDefinition : public _Script_Engine::DataAsset {
    private: char pad_30[0x20]; public:
    int32_t& get_HitCountThreshold();
    float& get_HitCountResetTime();
    bool get_ResetAfterThresholdReached();
    void set_ResetAfterThresholdReached(bool value);
    bool get_bTrackHitsWhenDead();
    void set_bTrackHitsWhenDead(bool value);
    void* get_IgnoredDamageTypes();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
