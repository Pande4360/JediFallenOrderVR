#include "..\FUObjectArray.hpp"
#include "AnimNode_AnimDynamics.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bWindWasEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x17d + 0)) & 1 != 0;
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_SimulationSpace() {
    return (void*)((uintptr_t)this + 0xf0);
}
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bOverrideAngularBias() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b8 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bChain(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x110 + 0);
    *(uint8_t*)((uintptr_t)this + 0x110 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_RelativeSpaceBone() {
    return (void*)((uintptr_t)this + 0xf8);
}
float& _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_LinearDampingOverride() {
    return *(float*)((uintptr_t)this + 0x1ac);
}
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bChain() {
    return (*(uint8_t*)((uintptr_t)this + 0x110 + 0)) & 1 != 0;
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_BoundBone() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_ChainEnd() {
    return (void*)((uintptr_t)this + 0x130);
}
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bUsePlanarLimit() {
    return (*(uint8_t*)((uintptr_t)this + 0x228 + 0)) & 1 != 0;
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_BoxExtents() {
    return (void*)((uintptr_t)this + 0x148);
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_LocalJointOffset() {
    return (void*)((uintptr_t)this + 0x154);
}
float& _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_GravityScale() {
    return *(float*)((uintptr_t)this + 0x160);
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_GravityOverride() {
    return (void*)((uintptr_t)this + 0x164);
}
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bUseGravityOverride() {
    return (*(uint8_t*)((uintptr_t)this + 0x170 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bUseGravityOverride(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x170 + 0);
    *(uint8_t*)((uintptr_t)this + 0x170 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bLinearSpring() {
    return (*(uint8_t*)((uintptr_t)this + 0x171 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bLinearSpring(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x171 + 0);
    *(uint8_t*)((uintptr_t)this + 0x171 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bAngularSpring() {
    return (*(uint8_t*)((uintptr_t)this + 0x172 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bAngularSpring(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x172 + 0);
    *(uint8_t*)((uintptr_t)this + 0x172 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_LinearSpringConstant() {
    return *(float*)((uintptr_t)this + 0x174);
}
float& _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_AngularSpringConstant() {
    return *(float*)((uintptr_t)this + 0x178);
}
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bEnableWind() {
    return (*(uint8_t*)((uintptr_t)this + 0x17c + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bEnableWind(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x17c + 0);
    *(uint8_t*)((uintptr_t)this + 0x17c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bWindWasEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x17d + 0);
    *(uint8_t*)((uintptr_t)this + 0x17d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_WindScale() {
    return *(float*)((uintptr_t)this + 0x180);
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_ComponentLinearAccScale() {
    return (void*)((uintptr_t)this + 0x184);
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_ComponentLinearVelScale() {
    return (void*)((uintptr_t)this + 0x190);
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_ComponentAppliedLinearAccClamp() {
    return (void*)((uintptr_t)this + 0x19c);
}
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bOverrideLinearDamping() {
    return (*(uint8_t*)((uintptr_t)this + 0x1a8 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bOverrideLinearDamping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bOverrideAngularDamping() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b0 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bOverrideAngularDamping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_AngularDampingOverride() {
    return *(float*)((uintptr_t)this + 0x1b4);
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bOverrideAngularBias(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_AngularBiasOverride() {
    return *(float*)((uintptr_t)this + 0x1bc);
}
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bDoUpdate() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c0 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bDoUpdate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bDoEval() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c1 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bDoEval(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_ExternalForce() {
    return (void*)((uintptr_t)this + 0x260);
}
int32_t& _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_NumSolverIterationsPreUpdate() {
    return *(int32_t*)((uintptr_t)this + 0x1c4);
}
int32_t& _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_NumSolverIterationsPostUpdate() {
    return *(int32_t*)((uintptr_t)this + 0x1c8);
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_ConstraintSetup() {
    return (void*)((uintptr_t)this + 0x1cc);
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bUsePlanarLimit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x228 + 0);
    *(uint8_t*)((uintptr_t)this + 0x228 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_PlanarLimits() {
    return (void*)((uintptr_t)this + 0x230);
}
bool _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_bUseSphericalLimits() {
    return (*(uint8_t*)((uintptr_t)this + 0x240 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_AnimDynamics::set_bUseSphericalLimits(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x240 + 0);
    *(uint8_t*)((uintptr_t)this + 0x240 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_SphericalLimits() {
    return (void*)((uintptr_t)this + 0x248);
}
void* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_CollisionType() {
    return (void*)((uintptr_t)this + 0x258);
}
float& _Script_AnimGraphRuntime::AnimNode_AnimDynamics::get_SphereCollisionRadius() {
    return *(float*)((uintptr_t)this + 0x25c);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_AnimDynamics::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_AnimDynamics");
    return result;
}
