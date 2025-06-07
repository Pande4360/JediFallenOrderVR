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
struct AnimNode_RotateRootBone : public _Script_Engine::AnimNode_Base {
    private: char pad_30[0x90]; public:
    void* get_BasePose();
    float& get_Pitch();
    float& get_Yaw();
    void* get_PitchScaleBiasClamp();
    void* get_YawScaleBiasClamp();
    void* get_MeshToComponent();
    float& get_ActualPitch();
    float& get_ActualYaw();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
