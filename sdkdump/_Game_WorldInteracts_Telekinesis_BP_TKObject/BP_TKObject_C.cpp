#include "..\FUObjectArray.hpp"
#include "BP_TKObject_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_SwGame\RsAbilityEffectVictimComponent.hpp"
void _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::set_forceSlowed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3b4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3b4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::get_angularVelocity_Slowdown() {
    return (void*)((uintptr_t)this + 0x398);
}
void _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::OnForcePushOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void* _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x370);
}
void _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::ExecuteUbergraph_BP_TKObject(int32_t EntryPoint) {
    return;
}
_Script_SwGame::RsAbilityEffectVictimComponent*& _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::get_RsAbilityEffectVictim() {
    return *(_Script_SwGame::RsAbilityEffectVictimComponent**)((uintptr_t)this + 0x378);
}
float& _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::get_slowdownTime() {
    return *(float*)((uintptr_t)this + 0x3a4);
}
_Script_Engine::StaticMesh*& _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::get_static_Mesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x380);
}
float& _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::get_tkPullUpOffset() {
    return *(float*)((uintptr_t)this + 0x3d4);
}
int32_t& _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::get_tkWeightClass() {
    return *(int32_t*)((uintptr_t)this + 0x388);
}
void* _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::get_linearVelocity_Slowdown() {
    return (void*)((uintptr_t)this + 0x38c);
}
bool _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::get_tkPulled() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d0 + 0)) & 1 != 0;
}
void* _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::get_Gravity() {
    return (void*)((uintptr_t)this + 0x3a8);
}
void _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::OnForcePullOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
bool _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::get_forceSlowed() {
    return (*(uint8_t*)((uintptr_t)this + 0x3b4 + 0)) & 1 != 0;
}
void* _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::get_endSlowdownTimer() {
    return (void*)((uintptr_t)this + 0x3b8);
}
void _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::OnForcePullEnterHold() {
    return;
}
float& _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::get_slowdownMultiplier() {
    return *(float*)((uintptr_t)this + 0x3c0);
}
float& _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::get_InvMass() {
    return *(float*)((uintptr_t)this + 0x3c4);
}
void _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::OnForceSlowEnd() {
    return;
}
bool _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::get_tkLifted() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c8 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::set_tkLifted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::get_RockDestination() {
    return (void*)((uintptr_t)this + 0x42c);
}
float& _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::get_SlowdownWarningTime() {
    return *(float*)((uintptr_t)this + 0x3cc);
}
void _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::EnableCollisionPhysics(bool Disable) {
    return;
}
void _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::set_tkPulled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/Telekinesis/BP_TKObject.BP_TKObject_C");
    return result;
}
float& _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::get_tkPullFwdOffset() {
    return *(float*)((uintptr_t)this + 0x3d8);
}
float& _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::get_tkPullRightOffset() {
    return *(float*)((uintptr_t)this + 0x3dc);
}
bool _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::get_tkPullJiggle() {
    return (*(uint8_t*)((uintptr_t)this + 0x3e0 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::OnForceTelekinesisOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::set_tkPullJiggle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3e0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::get_jiggleInterval() {
    return *(float*)((uintptr_t)this + 0x3e4);
}
float& _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::get_jiggleDownwardVelocity() {
    return *(float*)((uintptr_t)this + 0x3e8);
}
void* _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::get_pullStartTransform() {
    return (void*)((uintptr_t)this + 0x3f0);
}
void* _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::get_RockStartLocation() {
    return (void*)((uintptr_t)this + 0x420);
}
_Script_RsGameTechRT::RsCharacter*& _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::get_OtherActor() {
    return *(_Script_RsGameTechRT::RsCharacter**)((uintptr_t)this + 0x438);
}
void _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::UserConstructionScript() {
    return;
}
void _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::OnForcePullEnd() {
    return;
}
void _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::OnForcePullStart(_Script_Engine::Actor* Instigator, float PullDuration, _Script_CoreUObject::Vector& OriginalPullDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::OnForcePushEnd() {
    return;
}
void _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::OnForcePushStart(_Script_Engine::Actor* Instigator, _Script_CoreUObject::Vector& PushVector, void* PushHitType, _Script_CoreUObject::Vector& OriginalDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::OnForceSlowOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::OnForceSlowRenewed(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::OnForceSlowStart(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::OnForceTelekinesisEnd() {
    return;
}
void _Game_WorldInteracts_Telekinesis_BP_TKObject::BP_TKObject_C::OnForceTelekinesisStart(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
