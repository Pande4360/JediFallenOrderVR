#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\BTTaskNode.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsBTTask_DirectMoveToBase : public _Script_AIModule::BTTaskNode {
    private: char pad_70[0x18]; public:
    void* get_FilterClass();
    void* get_MotionParmName();
    bool get_bUseMotionParmName();
    void set_bUseMotionParmName(bool value);
    bool get_bProjectGoalLocation();
    void set_bProjectGoalLocation(bool value);
    bool get_bMaintainHeightFromTarget();
    void set_bMaintainHeightFromTarget(bool value);
    float& get_ArrivalTolerance();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
