#include "..\FUObjectArray.hpp"
#include "BP_SlideBlock_C.hpp"
#include "..\_Game_WorldInteracts_LevelObjects_BP_SlideBlock_TK\BP_SlideBlock_TK_C.hpp"
#include "..\_Script_AkAudio\AkBankLoadComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ArrowComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_SwGame\RsAbilityEffectVictimComponent.hpp"
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::set_TKBlockSpawned(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3f0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3f0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::get_bLock() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x388);
}
_Script_AkAudio::AkBankLoadComponent*& _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::get_AkBankLoad() {
    return *(_Script_AkAudio::AkBankLoadComponent**)((uintptr_t)this + 0x368);
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::ReceiveBeginPlay0() {
    return;
}
_Script_CoreUObject::Class* _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/LevelObjects/BP_SlideBlock.BP_SlideBlock_C");
    return result;
}
_Script_SwGame::RsAbilityEffectVictimComponent*& _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::get_RsAbilityEffectVictim() {
    return *(_Script_SwGame::RsAbilityEffectVictimComponent**)((uintptr_t)this + 0x370);
}
_Script_Engine::ArrowComponent*& _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::get_Arrow() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x378);
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::ForcePush_TL__UpdateFunc() {
    return;
}
float& _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::get_ForcePush_TL_progress_BFDD1C35437ADC0C27DA52BB89D5A169() {
    return *(float*)((uintptr_t)this + 0x398);
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::DisableForceHighlight() {
    return;
}
_Game_WorldInteracts_LevelObjects_BP_SlideBlock_TK::BP_SlideBlock_TK_C*& _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::get_SpawnedTKBlock() {
    return *(_Game_WorldInteracts_LevelObjects_BP_SlideBlock_TK::BP_SlideBlock_TK_C**)((uintptr_t)this + 0x3e8);
}
_Script_Engine::SceneComponent*& _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::get_EndLoc() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x380);
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::ReceiveEndPlay0(void* EndPlayReason) {
    return;
}
_Script_Engine::SceneComponent*& _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x390);
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::OnForceTelekinesisEnd() {
    return;
}
void* _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::get_ForcePush_TL__Direction_BFDD1C35437ADC0C27DA52BB89D5A169() {
    return (void*)((uintptr_t)this + 0x39c);
}
_Script_Engine::TimelineComponent*& _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::get_ForcePush_TL() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x3a0);
}
void* _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::get_EndLocation() {
    return (void*)((uintptr_t)this + 0x3a8);
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::HideBlock() {
    return;
}
float& _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::get_travelTime() {
    return *(float*)((uintptr_t)this + 0x3b4);
}
bool _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::get_ConvertToTKObject() {
    return (*(uint8_t*)((uintptr_t)this + 0x3b8 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::set_ConvertToTKObject(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::get_HasSlid() {
    return (*(uint8_t*)((uintptr_t)this + 0x3b9 + 0)) & 1 != 0;
}
void* _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::get_Lvl_Pushed() {
    return (void*)((uintptr_t)this + 0x3c0);
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::set_HasSlid(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3b9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3b9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::get_HasMidPoint() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d0 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::set_HasMidPoint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::get_midPoint() {
    return (void*)((uintptr_t)this + 0x3d4);
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::OnForcePushStart(_Script_Engine::Actor* Instigator, _Script_CoreUObject::Vector& PushVector, void* PushHitType, _Script_CoreUObject::Vector& OriginalDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
float& _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::get_midpointPercentage() {
    return *(float*)((uintptr_t)this + 0x3e0);
}
bool _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::get_ForcePullable() {
    return (*(uint8_t*)((uintptr_t)this + 0x3e4 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::OnForcePushOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::set_ForcePullable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3e4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3e4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::get_TKBlockSpawned() {
    return (*(uint8_t*)((uintptr_t)this + 0x3f0 + 0)) & 1 != 0;
}
void* _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::get_SpawnedTKBlockTransform() {
    return (void*)((uintptr_t)this + 0x400);
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::SetCanLedgeGrab(bool CanLedgeCrab) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::UserConstructionScript0() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::ForcePush_TL__FinishedFunc() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::OnForceTelekinesisStart(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::OnForcePullEnd() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::OnForceTelekinesisOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::OnForcePullOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::OnForcePullEnterHold() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::OnForcePushEnd() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::OnForceSlowEnd() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::OnForceSlowOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::OnForceSlowRenewed(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::OnForceSlowStart(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::OnForcePullStart(_Script_Engine::Actor* Instigator, float PullDuration, _Script_CoreUObject::Vector& OriginalPullDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::ExecuteUbergraph_BP_SlideBlock(int32_t EntryPoint) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock::BP_SlideBlock_C::Lvl_Pushed__DelegateSignature() {
    return;
}
