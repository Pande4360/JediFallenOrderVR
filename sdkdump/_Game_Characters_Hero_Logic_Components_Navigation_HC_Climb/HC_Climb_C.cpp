#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_AB_Hero\AB_Hero_C.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Hero\BP_Hero_C.hpp"
#include "HC_Climb_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BlendSpaceBase.hpp"
#include "..\_Script_RsGameTechRT\RsConstrainedJumpWeights.hpp"
#include "..\_Script_SwGame\SwClimbComponent.hpp"
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::get_ReachTimer() {
    return (void*)((uintptr_t)this + 0x3ae0);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::OnStateChanged__DelegateSignature(void* Climb_State) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::UpdateGripInputUI(void* PreviousState, void* NewState) {
    return;
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x3ac0);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::get_StoredReachAngle() {
    return *(float*)((uintptr_t)this + 0x3ae8);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::get_Climb_Jump_Input() {
    return (void*)((uintptr_t)this + 0x3ac8);
}
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::get_Initially_on_Ground() {
    return (*(uint8_t*)((uintptr_t)this + 0x3ad8 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::Notify_Climb_Jump() {
    return;
}
_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::get_BPHero_REF() {
    return *(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C**)((uintptr_t)this + 0x3ad0);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::OnClimbingTargetReached() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::set_Initially_on_Ground(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3ad8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3ad8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::Jump_Input(_Script_CoreUObject::Vector2D& Pad_Input, _Script_RsGameTechRT::RsConstrainedJumpWeights& Jump_Weights) {
    return;
}
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::get_StoredShouldReach() {
    return (*(uint8_t*)((uintptr_t)this + 0x3aec + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::Anim_ForcedRelease() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::OnClimbStateChanged(void* previousMode, void* newMode) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::set_StoredShouldReach(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3aec + 0);
    *(uint8_t*)((uintptr_t)this + 0x3aec + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::get_WaitTimeBeforeReaching() {
    return *(float*)((uintptr_t)this + 0x3af0);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::Notify_Begin_Pivot() {
    return;
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::get_TimeInIdle() {
    return *(float*)((uintptr_t)this + 0x3af4);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::Climb_Interact_Pressed(void* ActionName, bool& Attached) {
    return;
}
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::get_ShowingGripInput() {
    return (*(uint8_t*)((uintptr_t)this + 0x3af8 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::ReceiveBeginPlay() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::set_ShowingGripInput(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3af8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3af8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::Climb_Jump() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::ReceiveTick(float DeltaSeconds) {
    return;
}
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::get_bFromLedge() {
    return (*(uint8_t*)((uintptr_t)this + 0x3af9 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::set_bFromLedge(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3af9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3af9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::get_OnStateChanged() {
    return (void*)((uintptr_t)this + 0x3b00);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::get_ClimbInputTimeHeld() {
    return *(float*)((uintptr_t)this + 0x3b10);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::get_FrameDeltaTime() {
    return *(float*)((uintptr_t)this + 0x3b14);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::get_30FPSFrameTime() {
    return *(float*)((uintptr_t)this + 0x3b18);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Components/Navigation/HC_Climb.HC_Climb_C");
    return result;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::HideGripInputUI() {
    return;
}
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::ShouldUseStamina() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::GetOutsideCornerTransitionAnimation(bool Going_Left, _Script_Engine::BlendSpaceBase*& Animation) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::GetInsideCornerTransitionAnimation(bool GoingLeft, _Script_Engine::BlendSpaceBase*& Animation) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::UpdateTimeInIdle(float TimeInIdle) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::GetABHero(_Script_Engine::Actor* Actor, _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C*& AB_Hero) {
    return;
}
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::CanRelease() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::ClimbAttachedTick(float DeltaTime) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::CanReleaseFromCancelButton(void* Action_Name, bool& Can_Release) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::Can_Climb_Jump(bool& Can_Jump) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::ExecuteUbergraph_HC_Climb(int32_t EntryPoint) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::Can_Climb_Move(bool& Can_Climb_Move) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::OnAttached() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::OnClimbEntryFinished() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::Notify_Corner_Transition(float Duration) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::LVL_ForceRelease() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::Release() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::OnStaminaMeterEmptied0(void* ResponsibleStaminaName, float TimeUntilForceRegen) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::Check_Climb_Input(float Delta_Time) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::BeginIdle() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C::ShowGripInputUI() {
    return;
}
