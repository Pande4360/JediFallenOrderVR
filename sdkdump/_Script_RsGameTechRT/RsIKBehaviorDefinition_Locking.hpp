#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsIKBehaviorDefinition.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsIKBehaviorDefinition_Locking : public RsIKBehaviorDefinition {
    private: char pad_30[0x50]; public:
    float& get_BlendInDelay();
    float& get_BlendInTime();
    float& get_BlendOutTime();
    void* get_DefaultBlendOption();
    float& get_ForceUnlockDistanceThreshold();
    float& get_ForceUnlockTime();
    float& get_ForceUnlockBlendOutTime();
    float& get_MaxSpeedToAllowAdjusts();
    void* get_AdjustUnlockOffset();
    float& get_AdjustDistanceThreshold();
    float& get_AdjustAfterTime();
    float& get_AdjustUnlockMinTime();
    float& get_AdjustUnlockMaxTime();
    float& get_AdjustBlendOutTime();
    void* get_AdjustBlendOption();
    bool get_bDebugDraw();
    void set_bDebugDraw(bool value);
    bool get_bUseDebugLockOffset();
    void set_bUseDebugLockOffset(bool value);
    void* get_bDebugLockOffsetCS();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
