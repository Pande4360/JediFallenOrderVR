#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BTTask_BlackboardBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct BTTask_MoveTo : public BTTask_BlackboardBase {
    private: char pad_98[0x18]; public:
    float& get_AcceptableRadius();
    void* get_FilterClass();
    float& get_ObservedBlackboardValueTolerance();
    bool get_bObserveBlackboardValue();
    void set_bObserveBlackboardValue(bool value);
    bool get_bAllowStrafe();
    void set_bAllowStrafe(bool value);
    bool get_bAllowPartialPath();
    void set_bAllowPartialPath(bool value);
    bool get_bTrackMovingGoal();
    void set_bTrackMovingGoal(bool value);
    bool get_bProjectGoalLocation();
    void set_bProjectGoalLocation(bool value);
    bool get_bReachTestIncludesAgentRadius();
    void set_bReachTestIncludesAgentRadius(bool value);
    bool get_bReachTestIncludesGoalRadius();
    void set_bReachTestIncludesGoalRadius(bool value);
    bool get_bStopOnOverlap();
    void set_bStopOnOverlap(bool value);
    bool get_bStopOnOverlapNeedsUpdate();
    void set_bStopOnOverlapNeedsUpdate(bool value);
    bool get_bFacePathCorner();
    void set_bFacePathCorner(bool value);
    bool get_bMaintainHeightFromTarget();
    void set_bMaintainHeightFromTarget(bool value);
    bool get_bErrorOnFail();
    void set_bErrorOnFail(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb0
#pragma pack(pop)
}
