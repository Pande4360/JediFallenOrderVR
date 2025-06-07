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
struct AnimNode_TwoWayBlend : public _Script_Engine::AnimNode_Base {
    private: char pad_30[0xc8]; public:
    void* get_A();
    void* get_B();
    void* get_AlphaInputType();
    float& get_Alpha();
    void* get_AlphaScaleBias();
    bool get_bAlphaBoolEnabled();
    void set_bAlphaBoolEnabled(bool value);
    void* get_AlphaBoolBlend();
    void* get_AlphaCurveName();
    void* get_AlphaScaleBiasClamp();
    float& get_InternalBlendAlpha();
    bool get_bAIsRelevant();
    void set_bAIsRelevant(bool value);
    bool get_bBIsRelevant();
    void set_bBIsRelevant(bool value);
    bool get_bResetChildOnActivation();
    void set_bResetChildOnActivation(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf8
#pragma pack(pop)
}
