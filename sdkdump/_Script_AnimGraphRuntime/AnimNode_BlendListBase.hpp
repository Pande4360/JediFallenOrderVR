#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNode_Base.hpp"
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct BlendProfile;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimNode_BlendListBase : public _Script_Engine::AnimNode_Base {
    private: char pad_30[0x98]; public:
    void* get_BlendPose();
    void* get_BlendTime();
    void* get_BlendType();
    _Script_Engine::CurveFloat*& get_CustomBlendCurve();
    _Script_Engine::BlendProfile*& get_BlendProfile();
    void* get_Blends();
    void* get_BlendWeights();
    void* get_RemainingBlendTimes();
    int32_t& get_LastActiveChildIndex();
    void* get_PerBoneSampleData();
    bool get_bResetChildOnActivation();
    void set_bResetChildOnActivation(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc8
#pragma pack(pop)
}
