#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNode_SkeletalControlBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimNode_ObserveBone : public AnimNode_SkeletalControlBase {
    private: char pad_f0[0x40]; public:
    void* get_BoneToObserve();
    void* get_DisplaySpace();
    bool get_bRelativeToRefPose();
    void set_bRelativeToRefPose(bool value);
    void* get_Translation();
    void* get_Rotation();
    void* get_Scale();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x130
#pragma pack(pop)
}
