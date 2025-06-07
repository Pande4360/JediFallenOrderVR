#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimationAsset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimSequenceBase : public AnimationAsset {
    private: char pad_80[0x28]; public:
    void* get_Notifies();
    float& get_SequenceLength();
    float& get_RateScale();
    void* get_RawCurveData();
    static _Script_CoreUObject::Class* static_class();
    float GetPlayLength();
}; // Size: 0xa8
#pragma pack(pop)
}
