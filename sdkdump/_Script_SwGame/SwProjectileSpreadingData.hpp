#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwProjectileSpreadingData : public _Script_Engine::DataAsset {
    private: char pad_30[0x20]; public:
    float& get_TrackingPercentage();
    float& get_MinDeviationX();
    float& get_MaxDeviationX();
    float& get_MinDeviationY();
    float& get_MaxDeviationY();
    float& get_OffsetX();
    float& get_OffsetY();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
