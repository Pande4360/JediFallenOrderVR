#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_AB_Hero\AB_Hero_C.hpp"
#include "HC_LedgeGrab_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_RsGameTechRT\RsActorLedgeComponent.hpp"
#include "..\_Script_RsGameTechRT\RsLedgeSurveyFrameInfo.hpp"
#include "..\_Script_SwGame\SwActorLedgeComponent.hpp"
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::OnStaminaMeterEmptied(void* ResponsibleStaminaName, float TimeUntilStaminaRegen) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::set_bigImpactLedgeGrab(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x49cc + 0);
    *(uint8_t*)((uintptr_t)this + 0x49cc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::NotifyShimmyJump() {
    return;
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x49c0);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::DoForcePullEntry() {
    return;
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::get_IdlePullUpRange() {
    return *(float*)((uintptr_t)this + 0x49d0);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::Check_Shimmy_Jump(void* Shimmy_Direction) {
    return;
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::get_BigImpactVelocityThreshold() {
    return *(float*)((uintptr_t)this + 0x49c8);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::Anim_OnPullupCommitted() {
    return;
}
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::get_bigImpactLedgeGrab() {
    return (*(uint8_t*)((uintptr_t)this + 0x49cc + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::NotifyShimmyTransition(float Duration) {
    return;
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::get_ShimmyRange() {
    return *(float*)((uintptr_t)this + 0x49d4);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::get_EntryPullupRange() {
    return *(float*)((uintptr_t)this + 0x49d8);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::CanForcePullEntry(void* ActionName, bool& Can_Do_Force_Pull_Entry) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::OnShimmyTargetReached(void* Target) {
    return;
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::get_IdleMaxPullupAngle() {
    return *(float*)((uintptr_t)this + 0x49dc);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::get_LedgeTickDt() {
    return *(float*)((uintptr_t)this + 0x49e0);
}
_Script_Engine::AnimMontage*& _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::get_CornerMontage() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x49e8);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::Check_Movement_Input() {
    return;
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::get_EntryMaxPullupAngle() {
    return *(float*)((uintptr_t)this + 0x49f0);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::get_LedgePullupAngle() {
    return *(float*)((uintptr_t)this + 0x49f4);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::get_storeShimmyDir() {
    return (void*)((uintptr_t)this + 0x4a00);
}
_Script_Engine::AnimMontage*& _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::get_leapMontage() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x49f8);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::GetLedgeMaxPullupAngle(float& MaxPullupAngle) {
    return;
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::get_EntryMinimumAngleForSpecialPullup() {
    return *(float*)((uintptr_t)this + 0x4a04);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::get_BackJumpSideRange() {
    return *(float*)((uintptr_t)this + 0x4a08);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::get_WaitTimeBeforeReaching() {
    return *(float*)((uintptr_t)this + 0x4a10);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::get_StoredReachAngle() {
    return *(float*)((uintptr_t)this + 0x4a0c);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::OnLedgeEntryFinished() {
    return;
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::get_ReachTimer() {
    return (void*)((uintptr_t)this + 0x4a18);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::Ledge_Pullup_Complete() {
    return;
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::get_StoredReachMode() {
    return (void*)((uintptr_t)this + 0x4a20);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::get_FramePadInputDirection() {
    return (void*)((uintptr_t)this + 0x4a21);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::DisableLedgeGrab() {
    return;
}
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::get_canLedgeJumpOff() {
    return (*(uint8_t*)((uintptr_t)this + 0x4a22 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::set_canLedgeJumpOff(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4a22 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4a22 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::GetLedgePullupAngle(float& pullupAngle) {
    return;
}
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::get_bFromJump() {
    return (*(uint8_t*)((uintptr_t)this + 0x4a23 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::set_bFromJump(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4a23 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4a23 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::LedgeJump() {
    return;
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::get_ShimmyInputTimeHeld() {
    return *(float*)((uintptr_t)this + 0x4a24);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::get_PullupInputTimeHeld() {
    return *(float*)((uintptr_t)this + 0x4a28);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::get_30FPSFrameTime() {
    return *(float*)((uintptr_t)this + 0x4a2c);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Components/Navigation/HC_LedgeGrab.HC_LedgeGrab_C");
    return result;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::LedgeGrabAudio() {
    return;
}
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::ShouldUseStamina() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::GetPlayerControllerDirection(_Script_CoreUObject::Vector& ControllerDirection, float& Controller_Magnitude) {
    return;
}
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::CanRelease() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::Start_Jump_Off_Ledge(void* Jump_Direction) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::GetABHero(_Script_Engine::Actor* Actor, _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C*& AB_Hero) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::DoMantle() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::CanMantle(void* ActionName, bool& Can_Mantle) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::CanReleaseFromCancelButton(void* Action_Name, bool& Can_Perform_Action) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::UpdateGripInputUI(void* previousMode, void* newMode) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::CategorizePadInput(void*& PadInputDirection) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::GetLedgePullupRange(float& Ledge_Pullup_Range) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::ShimmyAllowed(bool& Can_Shimmy) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::ChooseLedgeEntryType(_Script_RsGameTechRT::RsLedgeSurveyFrameInfo Ledge_Survey_Info, void*& Ledge_Entry_Type) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::ShimmyJump(void* Direction, bool Vertical, float Dist) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::UpdateShimmyAnimationState(void* Shimmy_Direction) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::ShimmyCornerTransition(bool inside, void* Direction) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::ExitShimmy() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::Anim_OnReturnToIdleFromPullup() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::EnterShimmy(void* ShimmyDirection) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::Jump_Off_Ledge_Impulse() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::Anim_OnLedgePullup() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::Reset_Animation_State() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::OnLedge_Event(_Script_RsGameTechRT::RsActorLedgeComponent* LedgeComponent) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::ReceiveBeginPlay() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::OnTransitionOutComplete() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::OnLedgeReleased() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::OnModeChanged(void* previousMode, void* newMode) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::OnLedgeTick(float Dt) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::OnFoundLedge(_Script_RsGameTechRT::RsLedgeSurveyFrameInfo& frameSurveyInfo) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::LedgeAnim_Forced_Release() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::StartPullup() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::AttachRumble(void* EntryType) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::ImpactRumble() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::ReceiveTick(float DeltaSeconds) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::SetUpLedgeGrab(void* LedgeEntryType) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::StopPullup() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::Release() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C::ExecuteUbergraph_HC_LedgeGrab(int32_t EntryPoint) {
    return;
}
