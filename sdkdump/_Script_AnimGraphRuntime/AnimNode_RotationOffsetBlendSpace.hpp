#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNode_BlendSpacePlayer.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimNode_RotationOffsetBlendSpace : public AnimNode_BlendSpacePlayer {
    private: char pad_130[0xb8]; public:
    void* get_BasePose();
    int32_t& get_LODThreshold();
    bool get_bIsLODEnabled();
    void set_bIsLODEnabled(bool value);
    void* get_AlphaInputType();
    float& get_Alpha();
    void* get_AlphaScaleBias();
    float& get_ActualAlpha();
    bool get_bAlphaBoolEnabled();
    void set_bAlphaBoolEnabled(bool value);
    void* get_AlphaBoolBlend();
    void* get_AlphaCurveName();
    void* get_AlphaScaleBiasClamp();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1e8
#pragma pack(pop)
}
