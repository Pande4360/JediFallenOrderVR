#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsIKBehaviorDefinition.hpp"
#include "RsIKBehaviorDefinition_HandsVerticalAdjust.hpp"
float& _Script_RsGameTechRT::RsIKBehaviorDefinition_HandsVerticalAdjust::get_MinAngleFromSurfaceBoneDegrees() {
    return *(float*)((uintptr_t)this + 0x3c);
}
float& _Script_RsGameTechRT::RsIKBehaviorDefinition_HandsVerticalAdjust::get_VerticalTraceDistance() {
    return *(float*)((uintptr_t)this + 0x30);
}
bool _Script_RsGameTechRT::RsIKBehaviorDefinition_HandsVerticalAdjust::get_bRotationEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x52 + 0)) & 1 != 0;
}
float& _Script_RsGameTechRT::RsIKBehaviorDefinition_HandsVerticalAdjust::get_LedgeVerticalTraceDistance() {
    return *(float*)((uintptr_t)this + 0x34);
}
void _Script_RsGameTechRT::RsIKBehaviorDefinition_HandsVerticalAdjust::set_bDebugDraw(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::RsIKBehaviorDefinition_HandsVerticalAdjust::get_VerticalTraceRadius() {
    return *(float*)((uintptr_t)this + 0x38);
}
void* _Script_RsGameTechRT::RsIKBehaviorDefinition_HandsVerticalAdjust::get_RefBoneName() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_RsGameTechRT::RsIKBehaviorDefinition_HandsVerticalAdjust::get_LedgeRefBoneName() {
    return (void*)((uintptr_t)this + 0x48);
}
bool _Script_RsGameTechRT::RsIKBehaviorDefinition_HandsVerticalAdjust::get_bDebugDraw() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
bool _Script_RsGameTechRT::RsIKBehaviorDefinition_HandsVerticalAdjust::get_bDebugDrawTrace() {
    return (*(uint8_t*)((uintptr_t)this + 0x51 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsIKBehaviorDefinition_HandsVerticalAdjust::set_bDebugDrawTrace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x51 + 0);
    *(uint8_t*)((uintptr_t)this + 0x51 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsGameTechRT::RsIKBehaviorDefinition_HandsVerticalAdjust::set_bRotationEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x52 + 0);
    *(uint8_t*)((uintptr_t)this + 0x52 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsIKBehaviorDefinition_HandsVerticalAdjust::get_bRefMovementOffsetEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x53 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsIKBehaviorDefinition_HandsVerticalAdjust::set_bRefMovementOffsetEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x53 + 0);
    *(uint8_t*)((uintptr_t)this + 0x53 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsIKBehaviorDefinition_HandsVerticalAdjust::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsIKBehaviorDefinition_HandsVerticalAdjust");
    return result;
}
