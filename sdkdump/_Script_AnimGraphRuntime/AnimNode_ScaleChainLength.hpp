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
struct AnimNode_ScaleChainLength : public _Script_Engine::AnimNode_Base {
    private: char pad_30[0x80]; public:
    void* get_InputPose();
    float& get_DefaultChainLength();
    void* get_ChainStartBone();
    void* get_ChainEndBone();
    void* get_ChainInitialLength();
    void* get_TargetLocation();
    float& get_Alpha();
    float& get_ActualAlpha();
    void* get_AlphaScaleBias();
    bool get_bBoneIndicesCached();
    void set_bBoneIndicesCached(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb0
#pragma pack(pop)
}
