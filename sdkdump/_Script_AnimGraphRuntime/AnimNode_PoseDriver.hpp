#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNode_PoseHandler.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimNode_PoseDriver : public AnimNode_PoseHandler {
    private: char pad_98[0xd0]; public:
    void* get_SourcePose();
    void* get_SourceBones();
    bool get_bOnlyDriveSelectedBones();
    void set_bOnlyDriveSelectedBones(bool value);
    void* get_OnlyDriveBones();
    void* get_EvalSpaceBone();
    void* get_RBFParams();
    void* get_DriveSource();
    void* get_DriveOutput();
    void* get_PoseTargets();
    void* get_SourceBone();
    void* get_TwistAxis();
    void* get_Type();
    float& get_RadialScaling();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x168
#pragma pack(pop)
}
