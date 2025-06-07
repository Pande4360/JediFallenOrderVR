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
struct AnimNode_BlendBoneByChannel : public _Script_Engine::AnimNode_Base {
    private: char pad_30[0x60]; public:
    void* get_A();
    void* get_B();
    float& get_Alpha();
    void* get_AlphaScaleBias();
    void* get_BoneDefinitions();
    void* get_TransformsSpace();
    float& get_InternalBlendAlpha();
    bool get_bBIsRelevant();
    void set_bBIsRelevant(bool value);
    void* get_ValidBoneEntries();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
