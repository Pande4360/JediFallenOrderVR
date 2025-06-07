#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimCompositeBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimMontage : public AnimCompositeBase {
    private: char pad_a8[0x138]; public:
    void* get_BlendIn();
    float& get_BlendInTime();
    void* get_BlendOut();
    float& get_BlendOutTime();
    float& get_BlendOutTriggerTime();
    void* get_SyncGroup();
    int32_t& get_SyncSlotIndex();
    void* get_MarkerData();
    void* get_CompositeSections();
    void* get_SlotAnimTracks();
    void* get_BranchingPoints();
    bool get_bEnableRootMotionTranslation();
    void set_bEnableRootMotionTranslation(bool value);
    bool get_bEnableRootMotionRotation();
    void set_bEnableRootMotionRotation(bool value);
    bool get_bEnableAutoBlendOut();
    void set_bEnableAutoBlendOut(bool value);
    void* get_RootMotionRootLock();
    bool get_bHasBlendspaces();
    void set_bHasBlendspaces(bool value);
    void* get_BranchingPointMarkers();
    void* get_BranchingPointStateNotifyIndices();
    void* get_TimeStretchCurve();
    void* get_TimeStretchCurveName();
    static _Script_CoreUObject::Class* static_class();
    float GetDefaultBlendOutTime();
}; // Size: 0x1e0
#pragma pack(pop)
}
