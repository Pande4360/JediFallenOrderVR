#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "RsSplineCameraDefinition.hpp"
void _Script_RsGameTechRT::RsSplineCameraDefinition::set_bUseOverrideTrackingTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsSplineCameraDefinition::get_bUseOverrideTrackingTime() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
float& _Script_RsGameTechRT::RsSplineCameraDefinition::get_OverrideTrackingTime() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_RsGameTechRT::RsSplineCameraDefinition::get_DeviationTracking() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_RsGameTechRT::RsSplineCameraDefinition::get_CameraLookMaxYaw() {
    return *(float*)((uintptr_t)this + 0x3c);
}
float& _Script_RsGameTechRT::RsSplineCameraDefinition::get_CameraLookMaxPitch() {
    return *(float*)((uintptr_t)this + 0x40);
}
void _Script_RsGameTechRT::RsSplineCameraDefinition::set_bContainsValidData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::RsSplineCameraDefinition::get_MovementOffsetHorizontal() {
    return *(float*)((uintptr_t)this + 0x44);
}
float& _Script_RsGameTechRT::RsSplineCameraDefinition::get_MovementOffsetVertical() {
    return *(float*)((uintptr_t)this + 0x48);
}
float& _Script_RsGameTechRT::RsSplineCameraDefinition::get_FOVScale() {
    return *(float*)((uintptr_t)this + 0x4c);
}
float& _Script_RsGameTechRT::RsSplineCameraDefinition::get_TransitionTraceRadius() {
    return *(float*)((uintptr_t)this + 0x50);
}
float& _Script_RsGameTechRT::RsSplineCameraDefinition::get_TickRate() {
    return *(float*)((uintptr_t)this + 0x54);
}
bool _Script_RsGameTechRT::RsSplineCameraDefinition::get_bContainsValidData() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsSplineCameraDefinition::get_PlayerTrajectory() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_RsGameTechRT::RsSplineCameraDefinition::get_CameraLocationAxisCurves() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_RsGameTechRT::RsSplineCameraDefinition::get_CameraRotationAxisCurves() {
    return (void*)((uintptr_t)this + 0x250);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsSplineCameraDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsSplineCameraDefinition");
    return result;
}
