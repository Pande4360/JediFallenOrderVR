#include "..\FUObjectArray.hpp"
#include "BP_GhostPawn_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\CapsuleComponent.hpp"
#include "..\_Script_RsGameTechRT\RsTargetableComponent.hpp"
#include "..\_Script_SwGame\RsAbilityEffectVictimComponent.hpp"
void _Game_Characters_ATST00_Misc_BP_GhostPawn::BP_GhostPawn_C::TelekinesisLift(bool& Success, int32_t& WeightClass) {
    return;
}
void* _Game_Characters_ATST00_Misc_BP_GhostPawn::BP_GhostPawn_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
void _Game_Characters_ATST00_Misc_BP_GhostPawn::BP_GhostPawn_C::IsTelekinesisObject(bool& Result, int32_t& tkWeightClass) {
    return;
}
_Script_CoreUObject::Class* _Game_Characters_ATST00_Misc_BP_GhostPawn::BP_GhostPawn_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/ATST00/Misc/BP_GhostPawn.BP_GhostPawn_C");
    return result;
}
_Script_SwGame::RsAbilityEffectVictimComponent*& _Game_Characters_ATST00_Misc_BP_GhostPawn::BP_GhostPawn_C::get_RsAbilityEffectVictim() {
    return *(_Script_SwGame::RsAbilityEffectVictimComponent**)((uintptr_t)this + 0x368);
}
_Script_RsGameTechRT::RsTargetableComponent*& _Game_Characters_ATST00_Misc_BP_GhostPawn::BP_GhostPawn_C::get_RsTargetable() {
    return *(_Script_RsGameTechRT::RsTargetableComponent**)((uintptr_t)this + 0x370);
}
_Script_Engine::CapsuleComponent*& _Game_Characters_ATST00_Misc_BP_GhostPawn::BP_GhostPawn_C::get_capsule() {
    return *(_Script_Engine::CapsuleComponent**)((uintptr_t)this + 0x378);
}
void _Game_Characters_ATST00_Misc_BP_GhostPawn::BP_GhostPawn_C::IsForceSlowdownObject(bool& Result) {
    return;
}
void _Game_Characters_ATST00_Misc_BP_GhostPawn::BP_GhostPawn_C::ForceCrushGrab(bool& Success) {
    return;
}
void _Game_Characters_ATST00_Misc_BP_GhostPawn::BP_GhostPawn_C::UserConstructionScript0() {
    return;
}
void _Game_Characters_ATST00_Misc_BP_GhostPawn::BP_GhostPawn_C::OnForcePullEnd() {
    return;
}
void _Game_Characters_ATST00_Misc_BP_GhostPawn::BP_GhostPawn_C::OnForcePullEnterHold() {
    return;
}
void _Game_Characters_ATST00_Misc_BP_GhostPawn::BP_GhostPawn_C::OnForcePullOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Characters_ATST00_Misc_BP_GhostPawn::BP_GhostPawn_C::OnForcePullStart(_Script_Engine::Actor* Instigator, float PullDuration, _Script_CoreUObject::Vector& OriginalPullDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Characters_ATST00_Misc_BP_GhostPawn::BP_GhostPawn_C::OnForcePushEnd() {
    return;
}
void _Game_Characters_ATST00_Misc_BP_GhostPawn::BP_GhostPawn_C::OnForcePushOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Characters_ATST00_Misc_BP_GhostPawn::BP_GhostPawn_C::OnForcePushStart(_Script_Engine::Actor* Instigator, _Script_CoreUObject::Vector& PushVector, void* PushHitType, _Script_CoreUObject::Vector& OriginalDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Characters_ATST00_Misc_BP_GhostPawn::BP_GhostPawn_C::OnForceSlowEnd() {
    return;
}
void _Game_Characters_ATST00_Misc_BP_GhostPawn::BP_GhostPawn_C::OnForceSlowOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Characters_ATST00_Misc_BP_GhostPawn::BP_GhostPawn_C::OnForceSlowRenewed(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityLevel) {
    return;
}
void _Game_Characters_ATST00_Misc_BP_GhostPawn::BP_GhostPawn_C::OnForceSlowStart(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Characters_ATST00_Misc_BP_GhostPawn::BP_GhostPawn_C::OnForceTelekinesisEnd() {
    return;
}
void _Game_Characters_ATST00_Misc_BP_GhostPawn::BP_GhostPawn_C::OnForceTelekinesisOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Characters_ATST00_Misc_BP_GhostPawn::BP_GhostPawn_C::OnForceTelekinesisStart(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Characters_ATST00_Misc_BP_GhostPawn::BP_GhostPawn_C::ExecuteUbergraph_BP_GhostPawn(int32_t EntryPoint) {
    return;
}
