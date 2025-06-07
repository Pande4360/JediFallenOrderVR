#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTTaskNode.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTTask_DirectMoveToBase.hpp"
void _Script_RsGameTechRT::RsBTTask_DirectMoveToBase::set_bMaintainHeightFromTarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_RsGameTechRT::RsBTTask_DirectMoveToBase::get_MotionParmName() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTTask_DirectMoveToBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTTask_DirectMoveToBase");
    return result;
}
void* _Script_RsGameTechRT::RsBTTask_DirectMoveToBase::get_FilterClass() {
    return (void*)((uintptr_t)this + 0x70);
}
void _Script_RsGameTechRT::RsBTTask_DirectMoveToBase::set_bProjectGoalLocation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_RsGameTechRT::RsBTTask_DirectMoveToBase::get_bUseMotionParmName() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsBTTask_DirectMoveToBase::set_bUseMotionParmName(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsBTTask_DirectMoveToBase::get_bProjectGoalLocation() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 2 != 0;
}
bool _Script_RsGameTechRT::RsBTTask_DirectMoveToBase::get_bMaintainHeightFromTarget() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 4 != 0;
}
float& _Script_RsGameTechRT::RsBTTask_DirectMoveToBase::get_ArrivalTolerance() {
    return *(float*)((uintptr_t)this + 0x84);
}
