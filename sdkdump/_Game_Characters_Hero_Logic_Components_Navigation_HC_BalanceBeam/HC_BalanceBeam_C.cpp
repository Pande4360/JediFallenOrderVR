#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_AB_Hero\AB_Hero_C.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_SwPlayerController\BP_SwPlayerController_C.hpp"
#include "HC_BalanceBeam_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_SwGame\SwBalanceBeamComponent.hpp"
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::get_RightOfBeam() {
    return (*(uint8_t*)((uintptr_t)this + 0xd10 + 0)) & 1 != 0;
}
_Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C*& _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::get_BP_SwPlayerController() {
    return *(_Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C**)((uintptr_t)this + 0xd08);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0xcf8);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::GetABHero(_Script_Engine::Actor* Actor, _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C*& AB_Hero) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::set_beamClimbing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd01 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd01 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::get_monkeyTransition() {
    return (*(uint8_t*)((uintptr_t)this + 0xd00 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::set_monkeyTransition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd00 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd00 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::get_beamClimbing() {
    return (*(uint8_t*)((uintptr_t)this + 0xd01 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::set_RightOfBeam(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd10 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::get_BeamClimbCamera() {
    return (*(uint8_t*)((uintptr_t)this + 0xd11 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::set_BeamClimbCamera(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd11 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd11 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::get_bIsSlowMovement() {
    return (*(uint8_t*)((uintptr_t)this + 0xd12 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::set_bIsSlowMovement(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd12 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd12 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::AnimMontage*& _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::get_ClimbingMontage() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0xd18);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::StopMontage(_Script_Engine::AnimMontage* Montage) {
    return;
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Components/Navigation/HC_BalanceBeam.HC_BalanceBeam_C");
    return result;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::IsParallelLanding(bool& IsParallel) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::GetIsSlow(bool& Slow) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::SetIsSlow(bool bSlow) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::DropFromBeam(bool bAllowAllStates, bool& Dropped) {
    return;
}
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::IsClimbingAnimationPlaying() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::EndNotOnBeam(void* NextState) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::BeginClimbingToBalanceBeam(void* PreviousState) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::BeginNotOnBeam(void* PreviousState) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::EndOnMonkeyBeam(void* NextState) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::ReceiveBeginPlay() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::BeginFallingToMonkeyBeam(void* PreviousState) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::BeginOnMonkeyBeam(void* PreviousState) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::AlignCameraAndAim() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::CancelMonkeyBeam() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::BalanceBeamJump() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::MonkeyBeamClimb() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::EndClimbingToBalanceBeam(void* NextState) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::EndFallingToMonkeyBeam(void* NextState) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::BeginOnBalanceBeam(void* PreviousState) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::Action_BalanceBeamCancel() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::OnGripNeededEnded() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C::ExecuteUbergraph_HC_BalanceBeam(int32_t EntryPoint) {
    return;
}
