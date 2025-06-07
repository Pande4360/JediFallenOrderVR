#include "..\FUObjectArray.hpp"
#include "BP_SlideBlock_TK_C.hpp"
#include "..\_Game_WorldInteracts_Telekinesis_BP_TKObject\BP_TKObject_C.hpp"
#include "..\_Script_AkAudio\AkBankLoadComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapStateTransitionGatewayComponent.hpp"
void* _Game_WorldInteracts_LevelObjects_BP_SlideBlock_TK::BP_SlideBlock_TK_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x440);
}
bool _Game_WorldInteracts_LevelObjects_BP_SlideBlock_TK::BP_SlideBlock_TK_C::get_LimitRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x474 + 0)) & 1 != 0;
}
_Script_AkAudio::AkBankLoadComponent*& _Game_WorldInteracts_LevelObjects_BP_SlideBlock_TK::BP_SlideBlock_TK_C::get_AkBankLoad() {
    return *(_Script_AkAudio::AkBankLoadComponent**)((uintptr_t)this + 0x448);
}
_Script_RsGameTechRT::RsWorldMapStateTransitionGatewayComponent*& _Game_WorldInteracts_LevelObjects_BP_SlideBlock_TK::BP_SlideBlock_TK_C::get_RsWorldMapStateTransitionGateway() {
    return *(_Script_RsGameTechRT::RsWorldMapStateTransitionGatewayComponent**)((uintptr_t)this + 0x450);
}
void* _Game_WorldInteracts_LevelObjects_BP_SlideBlock_TK::BP_SlideBlock_TK_C::get_CanLedgeGrabTick__Direction_4164CB924A8D407D5A97F094959E9199() {
    return (void*)((uintptr_t)this + 0x458);
}
_Script_Engine::TimelineComponent*& _Game_WorldInteracts_LevelObjects_BP_SlideBlock_TK::BP_SlideBlock_TK_C::get_CanLedgeGrabTick() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x460);
}
void* _Game_WorldInteracts_LevelObjects_BP_SlideBlock_TK::BP_SlideBlock_TK_C::get_initialVelocity() {
    return (void*)((uintptr_t)this + 0x468);
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock_TK::BP_SlideBlock_TK_C::set_LimitRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x474 + 0);
    *(uint8_t*)((uintptr_t)this + 0x474 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::StaticMesh*& _Game_WorldInteracts_LevelObjects_BP_SlideBlock_TK::BP_SlideBlock_TK_C::get_Mesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x478);
}
void* _Game_WorldInteracts_LevelObjects_BP_SlideBlock_TK::BP_SlideBlock_TK_C::get_PrevCheckLocation() {
    return (void*)((uintptr_t)this + 0x480);
}
bool _Game_WorldInteracts_LevelObjects_BP_SlideBlock_TK::BP_SlideBlock_TK_C::get_HasPrevCheckLocation() {
    return (*(uint8_t*)((uintptr_t)this + 0x48c + 0)) & 1 != 0;
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock_TK::BP_SlideBlock_TK_C::set_HasPrevCheckLocation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48c + 0);
    *(uint8_t*)((uintptr_t)this + 0x48c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_WorldInteracts_LevelObjects_BP_SlideBlock_TK::BP_SlideBlock_TK_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/LevelObjects/BP_SlideBlock_TK.BP_SlideBlock_TK_C");
    return result;
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock_TK::BP_SlideBlock_TK_C::EnableCanLedgeGrabTick() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock_TK::BP_SlideBlock_TK_C::SetCanLedgeGrab(bool CanLedgeGrab) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock_TK::BP_SlideBlock_TK_C::UserConstructionScript0() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock_TK::BP_SlideBlock_TK_C::CanLedgeGrabTick__FinishedFunc() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock_TK::BP_SlideBlock_TK_C::CanLedgeGrabTick__UpdateFunc() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock_TK::BP_SlideBlock_TK_C::ReceiveBeginPlay() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock_TK::BP_SlideBlock_TK_C::OnForcePushStart0(_Script_Engine::Actor* Instigator, _Script_CoreUObject::Vector& PushVector, void* PushHitType, _Script_CoreUObject::Vector& OriginalDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock_TK::BP_SlideBlock_TK_C::OnForceTelekinesisStart0(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock_TK::BP_SlideBlock_TK_C::OnForceTelekinesisEnd0() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock_TK::BP_SlideBlock_TK_C::OnForcePullStart0(_Script_Engine::Actor* Instigator, float PullDuration, _Script_CoreUObject::Vector& OriginalPullDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock_TK::BP_SlideBlock_TK_C::ExecuteUbergraph_BP_SlideBlock_TK(int32_t EntryPoint) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlideBlock_TK::BP_SlideBlock_TK_C::ReceiveTick(float DeltaSeconds) {
    return;
}
