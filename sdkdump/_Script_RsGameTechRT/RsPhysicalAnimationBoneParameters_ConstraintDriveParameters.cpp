#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsPhysicalAnimationBoneParameters_ConstraintDriveParameters.hpp"
void _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters_ConstraintDriveParameters::set_FreeLinearMovement(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters_ConstraintDriveParameters::get_FreeLinearMovement() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
bool _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters_ConstraintDriveParameters::get_UseSmoothedVelocities() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 8 != 0;
}
bool _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters_ConstraintDriveParameters::get_EnableVariableConstraintLimits() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 4 != 0;
}
bool _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters_ConstraintDriveParameters::get_FreeAngularMovement() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 2 != 0;
}
void _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters_ConstraintDriveParameters::set_FreeAngularMovement(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters_ConstraintDriveParameters::set_EnableVariableConstraintLimits(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters_ConstraintDriveParameters::set_UseSmoothedVelocities(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters_ConstraintDriveParameters::get_DebugDrawMotorLimits() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 16 != 0;
}
void _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters_ConstraintDriveParameters::set_DebugDrawMotorLimits(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters_ConstraintDriveParameters::get_DebugLogVelocity() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 32 != 0;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters_ConstraintDriveParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsPhysicalAnimationBoneParameters_ConstraintDriveParameters");
    return result;
}
void _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters_ConstraintDriveParameters::set_DebugLogVelocity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
float& _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters_ConstraintDriveParameters::get_LinearVelocityMin() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters_ConstraintDriveParameters::get_LinearVelocityMax() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters_ConstraintDriveParameters::get_ConstraintLimitForVelocityMin() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters_ConstraintDriveParameters::get_ConstraintLimitForVelocityMax() {
    return *(float*)((uintptr_t)this + 0x10);
}
