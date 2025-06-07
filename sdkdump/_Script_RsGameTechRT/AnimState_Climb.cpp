#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimState_Climb.hpp"
void* _Script_RsGameTechRT::AnimState_Climb::get_CurrentState() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_RsGameTechRT::AnimState_Climb::get_bComingFromConstrainedJump() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::AnimState_Climb::get_ClimbEntryType() {
    return (void*)((uintptr_t)this + 0x1);
}
void _Script_RsGameTechRT::AnimState_Climb::set_bComingFromConstrainedJump(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::AnimState_Climb::get_bShouldClimbHang() {
    return (*(uint8_t*)((uintptr_t)this + 0x3 + 0)) & 1 != 0;
}
bool _Script_RsGameTechRT::AnimState_Climb::get_bShouldClimbHangAtMovementTarget() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::AnimState_Climb::set_bShouldClimbHang(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::AnimState_Climb::get_ClimbMovementProgressionDriver() {
    return *(float*)((uintptr_t)this + 0x4);
}
void _Script_RsGameTechRT::AnimState_Climb::set_bShouldClimbHangAtMovementTarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::AnimState_Climb::get_bHasRetargetedCurrentMovement() {
    return (*(uint8_t*)((uintptr_t)this + 0x9 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::AnimState_Climb::set_bHasRetargetedCurrentMovement(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::AnimState_Climb::get_ClimbMovementContinuation() {
    return (*(uint8_t*)((uintptr_t)this + 0xa + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::AnimState_Climb::set_ClimbMovementContinuation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa + 0);
    *(uint8_t*)((uintptr_t)this + 0xa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::AnimState_Climb::get_ClimbPreviousMovementAngle() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_RsGameTechRT::AnimState_Climb::get_ReachAngle() {
    return *(float*)((uintptr_t)this + 0x20);
}
float& _Script_RsGameTechRT::AnimState_Climb::get_ClimbMovementAngleChange() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_RsGameTechRT::AnimState_Climb::get_CurrentPadMovementAngle() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_RsGameTechRT::AnimState_Climb::get_CurrentPadMovementAngleDifference() {
    return *(float*)((uintptr_t)this + 0x18);
}
bool _Script_RsGameTechRT::AnimState_Climb::get_bShouldReach() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::AnimState_Climb::set_bShouldReach(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::AnimState_Climb::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.AnimState_Climb");
    return result;
}
