#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNode_Base.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimNode_SkeletalControlBase : public _Script_Engine::AnimNode_Base {
    private: char pad_30[0xc0]; public:
    void* get_ComponentPose();
    int32_t& get_LODThreshold();
    float& get_ActualAlpha();
    void* get_AlphaInputType();
    bool get_bAlphaBoolEnabled();
    void set_bAlphaBoolEnabled(bool value);
    float& get_Alpha();
    void* get_AlphaScaleBias();
    void* get_AlphaBoolBlend();
    void* get_AlphaCurveName();
    void* get_AlphaScaleBiasClamp();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf0
#pragma pack(pop)
}
