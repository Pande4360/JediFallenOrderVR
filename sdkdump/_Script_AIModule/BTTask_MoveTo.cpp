#include "..\FUObjectArray.hpp"
#include "BTTask_BlackboardBase.hpp"
#include "BTTask_MoveTo.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_AIModule::BTTask_MoveTo::get_AcceptableRadius() {
    return *(float*)((uintptr_t)this + 0x98);
}
bool _Script_AIModule::BTTask_MoveTo::get_bObserveBlackboardValue() {
    return (*(uint8_t*)((uintptr_t)this + 0xac + 0)) & 1 != 0;
}
void* _Script_AIModule::BTTask_MoveTo::get_FilterClass() {
    return (void*)((uintptr_t)this + 0xa0);
}
float& _Script_AIModule::BTTask_MoveTo::get_ObservedBlackboardValueTolerance() {
    return *(float*)((uintptr_t)this + 0xa8);
}
void _Script_AIModule::BTTask_MoveTo::set_bObserveBlackboardValue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xac + 0);
    *(uint8_t*)((uintptr_t)this + 0xac + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AIModule::BTTask_MoveTo::get_bStopOnOverlapNeedsUpdate() {
    return (*(uint8_t*)((uintptr_t)this + 0xad + 0)) & 1 != 0;
}
bool _Script_AIModule::BTTask_MoveTo::get_bAllowStrafe() {
    return (*(uint8_t*)((uintptr_t)this + 0xac + 0)) & 2 != 0;
}
bool _Script_AIModule::BTTask_MoveTo::get_bAllowPartialPath() {
    return (*(uint8_t*)((uintptr_t)this + 0xac + 0)) & 4 != 0;
}
void _Script_AIModule::BTTask_MoveTo::set_bAllowStrafe(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xac + 0);
    *(uint8_t*)((uintptr_t)this + 0xac + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_AIModule::BTTask_MoveTo::set_bAllowPartialPath(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xac + 0);
    *(uint8_t*)((uintptr_t)this + 0xac + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_AIModule::BTTask_MoveTo::get_bTrackMovingGoal() {
    return (*(uint8_t*)((uintptr_t)this + 0xac + 0)) & 8 != 0;
}
void _Script_AIModule::BTTask_MoveTo::set_bTrackMovingGoal(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xac + 0);
    *(uint8_t*)((uintptr_t)this + 0xac + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_AIModule::BTTask_MoveTo::get_bProjectGoalLocation() {
    return (*(uint8_t*)((uintptr_t)this + 0xac + 0)) & 16 != 0;
}
void _Script_AIModule::BTTask_MoveTo::set_bProjectGoalLocation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xac + 0);
    *(uint8_t*)((uintptr_t)this + 0xac + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_AIModule::BTTask_MoveTo::get_bReachTestIncludesAgentRadius() {
    return (*(uint8_t*)((uintptr_t)this + 0xac + 0)) & 32 != 0;
}
void _Script_AIModule::BTTask_MoveTo::set_bReachTestIncludesAgentRadius(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xac + 0);
    *(uint8_t*)((uintptr_t)this + 0xac + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_AIModule::BTTask_MoveTo::get_bReachTestIncludesGoalRadius() {
    return (*(uint8_t*)((uintptr_t)this + 0xac + 0)) & 64 != 0;
}
void _Script_AIModule::BTTask_MoveTo::set_bReachTestIncludesGoalRadius(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xac + 0);
    *(uint8_t*)((uintptr_t)this + 0xac + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_AIModule::BTTask_MoveTo::get_bStopOnOverlap() {
    return (*(uint8_t*)((uintptr_t)this + 0xac + 0)) & 128 != 0;
}
void _Script_AIModule::BTTask_MoveTo::set_bStopOnOverlap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xac + 0);
    *(uint8_t*)((uintptr_t)this + 0xac + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void _Script_AIModule::BTTask_MoveTo::set_bStopOnOverlapNeedsUpdate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xad + 0);
    *(uint8_t*)((uintptr_t)this + 0xad + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AIModule::BTTask_MoveTo::get_bFacePathCorner() {
    return (*(uint8_t*)((uintptr_t)this + 0xad + 0)) & 8 != 0;
}
void _Script_AIModule::BTTask_MoveTo::set_bFacePathCorner(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xad + 0);
    *(uint8_t*)((uintptr_t)this + 0xad + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_AIModule::BTTask_MoveTo::get_bMaintainHeightFromTarget() {
    return (*(uint8_t*)((uintptr_t)this + 0xad + 0)) & 16 != 0;
}
void _Script_AIModule::BTTask_MoveTo::set_bMaintainHeightFromTarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xad + 0);
    *(uint8_t*)((uintptr_t)this + 0xad + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_AIModule::BTTask_MoveTo::get_bErrorOnFail() {
    return (*(uint8_t*)((uintptr_t)this + 0xad + 0)) & 32 != 0;
}
void _Script_AIModule::BTTask_MoveTo::set_bErrorOnFail(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xad + 0);
    *(uint8_t*)((uintptr_t)this + 0xad + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
_Script_CoreUObject::Class* _Script_AIModule::BTTask_MoveTo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTTask_MoveTo");
    return result;
}
