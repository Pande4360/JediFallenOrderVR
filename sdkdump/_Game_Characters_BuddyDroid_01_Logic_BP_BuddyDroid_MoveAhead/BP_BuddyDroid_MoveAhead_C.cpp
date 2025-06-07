#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_BuddyDroid_01_Logic_AB_BuddyDroid\AB_BuddyDroid_C.hpp"
#include "BP_BuddyDroid_MoveAhead_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BillboardComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_Engine\TriggerBase.hpp"
#include "..\_Script_RsGameTechRT\RsHero.hpp"
#include "..\_Script_SwGame\SwAIBuddyDroid.hpp"
#include "..\_Script_SwGame\SwAIBuddyDroidController.hpp"
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::ReadyToMove() {
    return;
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
_Script_Engine::TimelineComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::get_Timeline_0() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x380);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::DroidDestroyed(_Script_Engine::Actor* DestroyedActor) {
    return;
}
_Script_Engine::BillboardComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::get_Billboard2() {
    return *(_Script_Engine::BillboardComponent**)((uintptr_t)this + 0x368);
}
_Script_Engine::TriggerBase*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::get_Start_Trigger() {
    return *(_Script_Engine::TriggerBase**)((uintptr_t)this + 0x388);
}
_Script_Engine::SceneComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x370);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::get_Timeline_0__Direction_CC7AA9C34193315E171D7B8A2723A8C8() {
    return (void*)((uintptr_t)this + 0x378);
}
_Script_RsGameTechRT::RsHero*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::get_REF_RsHero() {
    return *(_Script_RsGameTechRT::RsHero**)((uintptr_t)this + 0x390);
}
_Script_SwGame::SwAIBuddyDroid*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::get_REF_SwBuddyDroid() {
    return *(_Script_SwGame::SwAIBuddyDroid**)((uintptr_t)this + 0x398);
}
_Game_Characters_BuddyDroid_01_Logic_AB_BuddyDroid::AB_BuddyDroid_C*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::get_REF_AB_BuddyDroid() {
    return *(_Game_Characters_BuddyDroid_01_Logic_AB_BuddyDroid::AB_BuddyDroid_C**)((uintptr_t)this + 0x3a0);
}
_Script_Engine::TriggerBase*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::get_Cancel_Trigger__Optional_() {
    return *(_Script_Engine::TriggerBase**)((uintptr_t)this + 0x3a8);
}
bool _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::get_Once_Only() {
    return (*(uint8_t*)((uintptr_t)this + 0x3b0 + 0)) & 1 != 0;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::set_Once_Only(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3b0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::get_Wait_Time_at_Objective() {
    return *(float*)((uintptr_t)this + 0x3b4);
}
bool _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::get_ReturnToHeroAfterReachingObjective() {
    return (*(uint8_t*)((uintptr_t)this + 0x3b8 + 0)) & 1 != 0;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::set_ReturnToHeroAfterReachingObjective(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_SwGame::SwAIBuddyDroidController*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::get_REF_BuddyDroid_Con() {
    return *(_Script_SwGame::SwAIBuddyDroidController**)((uintptr_t)this + 0x3c0);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::ExecuteUbergraph_BP_BuddyDroid_MoveAhead(int32_t EntryPoint) {
    return;
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::get_CurrentState() {
    return (void*)((uintptr_t)this + 0x3c8);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::LVL_MoveAheadAborted__DelegateSignature() {
    return;
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::get_DesiredState() {
    return (void*)((uintptr_t)this + 0x3c9);
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::get_BDDistanceFromHero() {
    return *(float*)((uintptr_t)this + 0x3cc);
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::get_BDDistanceToObjective() {
    return *(float*)((uintptr_t)this + 0x3d0);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::get_LVL_ObjectiveReached() {
    return (void*)((uintptr_t)this + 0x3d8);
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::get_HeroDistanceToObjective() {
    return *(float*)((uintptr_t)this + 0x3e8);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::get_LVL_MoveAheadStarted() {
    return (void*)((uintptr_t)this + 0x3f0);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::LVL_ObjectiveReached__DelegateSignature() {
    return;
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::get_LVL_MoveAheadAborted() {
    return (void*)((uintptr_t)this + 0x400);
}
_Script_CoreUObject::Class* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/BuddyDroid_01/Logic/BP_BuddyDroid_MoveAhead.BP_BuddyDroid_MoveAhead_C");
    return result;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::Check_FollowHero_Transitions() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::Check_WaitOnPath_Transitions() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::UpdateVars() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::Check_MoveToObjective_Transitions() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::WaitAtObjective() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::UserConstructionScript0() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::Timeline_0__FinishedFunc() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::Timeline_0__UpdateFunc() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::HeroHitTrigger(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::StartTicking() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::LVL_StartMoveAhead() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::Return_To_Hero() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::HeroHitCancelTrigger(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::StopTicking() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::UnbindTriggers() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::DismountHero() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::MoveToObjective() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::WaitOnPath() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::FollowHero() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::EndMoveAhead() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::LVL_AbortMoveAhead() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::MoveToWaypoint() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead::BP_BuddyDroid_MoveAhead_C::LVL_MoveAheadStarted__DelegateSignature() {
    return;
}
