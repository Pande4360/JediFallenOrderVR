#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct AnimState_Climb {
    private: char pad_0[0x24]; public:
    void* get_CurrentState();
    void* get_ClimbEntryType();
    bool get_bComingFromConstrainedJump();
    void set_bComingFromConstrainedJump(bool value);
    bool get_bShouldClimbHang();
    void set_bShouldClimbHang(bool value);
    float& get_ClimbMovementProgressionDriver();
    bool get_bShouldClimbHangAtMovementTarget();
    void set_bShouldClimbHangAtMovementTarget(bool value);
    bool get_bHasRetargetedCurrentMovement();
    void set_bHasRetargetedCurrentMovement(bool value);
    bool get_ClimbMovementContinuation();
    void set_ClimbMovementContinuation(bool value);
    float& get_ClimbPreviousMovementAngle();
    float& get_ClimbMovementAngleChange();
    float& get_CurrentPadMovementAngle();
    float& get_CurrentPadMovementAngleDifference();
    bool get_bShouldReach();
    void set_bShouldReach(bool value);
    float& get_ReachAngle();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x24
#pragma pack(pop)
}
