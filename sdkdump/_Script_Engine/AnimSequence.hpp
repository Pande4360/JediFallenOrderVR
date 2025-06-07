#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimSequenceBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimSequence : public AnimSequenceBase {
    private: char pad_a8[0x108]; public:
    int32_t& get_NumFrames();
    void* get_TrackToSkeletonMapTable();
    void* get_AdditiveAnimType();
    void* get_RefPoseType();
    _Script_Engine::AnimSequence*& get_RefPoseSeq();
    int32_t& get_RefFrameIndex();
    int32_t& get_EncodingPkgVersion();
    void* get_RetargetSource();
    void* get_Interpolation();
    bool get_bEnableRootMotion();
    void set_bEnableRootMotion(bool value);
    bool get_bRootMotionRotationOnly();
    void set_bRootMotionRotationOnly(bool value);
    void* get_RootMotionRootLock();
    bool get_bForceRootLock();
    void set_bForceRootLock(bool value);
    bool get_bUseNormalizedRootMotionScale();
    void set_bUseNormalizedRootMotionScale(bool value);
    bool get_bRootMotionSettingsCopiedFromMontage();
    void set_bRootMotionSettingsCopiedFromMontage(bool value);
    void* get_AuthoredSyncMarkers();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1b0
#pragma pack(pop)
}
