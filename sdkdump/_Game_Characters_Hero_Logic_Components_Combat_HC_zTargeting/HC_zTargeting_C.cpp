#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Hero\BP_Hero_C.hpp"
#include "HC_zTargeting_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_RsGameTechRT\RsHeroComponent.hpp"
#include "..\_Script_RsGameTechRT\RsHeroStateModifierDefinition.hpp"
#include "..\_Script_RsTechRT\RsTweaks.hpp"
#include "..\_Script_SwGame\R4PlayerController.hpp"
#include "..\_Script_SwGame\SWGameUserSettings.hpp"
float& _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_brutePitchMin() {
    return *(float*)((uintptr_t)this + 0x210);
}
_Script_Engine::ParticleSystemComponent*& _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_zTargeting_Icon_Active() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x1a8);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x180);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_HeroZTargeted() {
    return (void*)((uintptr_t)this + 0x238);
}
_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_BP_Hero() {
    return *(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C**)((uintptr_t)this + 0x188);
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_MaxAngle() {
    return *(float*)((uintptr_t)this + 0x270);
}
_Script_Engine::ParticleSystemComponent*& _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_zTargeting_Icon() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x190);
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_bestProximityValue() {
    return *(float*)((uintptr_t)this + 0x1b0);
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_MaxDistance() {
    return *(float*)((uintptr_t)this + 0x1b4);
}
_Script_SwGame::R4PlayerController*& _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_PlayerController() {
    return *(_Script_SwGame::R4PlayerController**)((uintptr_t)this + 0x198);
}
bool _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_zTargetActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x229 + 0)) & 1 != 0;
}
_Script_Engine::Actor*& _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_LockOnTarget() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x1a0);
}
int32_t& _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_telemetry_NumZTargets() {
    return *(int32_t*)((uintptr_t)this + 0x234);
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_maxDistMultiplier() {
    return *(float*)((uintptr_t)this + 0x1b8);
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_PitchOffset() {
    return *(float*)((uintptr_t)this + 0x1cc);
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_currentMaxDistance() {
    return *(float*)((uintptr_t)this + 0x1bc);
}
_Script_Engine::Actor*& _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_tempBestTarget() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x1c0);
}
bool _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_nonHostileTargeted() {
    return (*(uint8_t*)((uintptr_t)this + 0x220 + 0)) & 1 != 0;
}
bool _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_autoTargetSwap() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c8 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::ReceiveTick(float DeltaSeconds) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::set_autoTargetSwap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_HeroExitedZTarget() {
    return (void*)((uintptr_t)this + 0x258);
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_PitchMin() {
    return *(float*)((uintptr_t)this + 0x1d0);
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_PitchMax() {
    return *(float*)((uintptr_t)this + 0x1d4);
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::TargetFound() {
    return;
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_crabPitchOffset() {
    return *(float*)((uintptr_t)this + 0x1d8);
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_zTargetStartTimeStampAI() {
    return *(float*)((uintptr_t)this + 0x230);
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_crabPitchMin() {
    return *(float*)((uintptr_t)this + 0x1dc);
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_crabPitchMax() {
    return *(float*)((uintptr_t)this + 0x1e0);
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::CanZTarget(void* Action_Name, bool& CanZTarget) {
    return;
}
_Script_RsTechRT::RsTweaks*& _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_zTargetTweaks() {
    return *(_Script_RsTechRT::RsTweaks**)((uintptr_t)this + 0x1e8);
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_defaultPitchOffset() {
    return *(float*)((uintptr_t)this + 0x1f0);
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::CalculateRotationToCamera(_Script_Engine::SceneComponent* componentAttachedTo, _Script_CoreUObject::Rotator& Rotation) {
    return;
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_defaultPitchMin() {
    return *(float*)((uintptr_t)this + 0x1f4);
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::OnDebugFlyEntered(void* NewState, void* PrevState) {
    return;
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_defaultPitchMax() {
    return *(float*)((uintptr_t)this + 0x1f8);
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::ReceiveBeginPlay() {
    return;
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_occludedTimer() {
    return *(float*)((uintptr_t)this + 0x1fc);
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_occlusionTimeOut() {
    return *(float*)((uintptr_t)this + 0x200);
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_cameraLagMin() {
    return *(float*)((uintptr_t)this + 0x204);
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_cameraLagMax() {
    return *(float*)((uintptr_t)this + 0x208);
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_brutePitchOffset() {
    return *(float*)((uintptr_t)this + 0x20c);
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_brutePitchMax() {
    return *(float*)((uintptr_t)this + 0x214);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_CameraMode() {
    return (void*)((uintptr_t)this + 0x218);
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::set_nonHostileTargeted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x220 + 0);
    *(uint8_t*)((uintptr_t)this + 0x220 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_LookDeadZone() {
    return *(float*)((uintptr_t)this + 0x224);
}
bool _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_zSwitching() {
    return (*(uint8_t*)((uintptr_t)this + 0x228 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::set_zSwitching(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x228 + 0);
    *(uint8_t*)((uintptr_t)this + 0x228 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::set_zTargetActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x229 + 0);
    *(uint8_t*)((uintptr_t)this + 0x229 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_noIcon() {
    return (*(uint8_t*)((uintptr_t)this + 0x22a + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::set_noIcon(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x22a + 0);
    *(uint8_t*)((uintptr_t)this + 0x22a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_zTargetStartTimeStamp() {
    return *(float*)((uintptr_t)this + 0x22c);
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::zTargetExit() {
    return;
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_HeroSwitchedZTarget() {
    return (void*)((uintptr_t)this + 0x248);
}
_Script_SwGame::SWGameUserSettings*& _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::get_UserSettings() {
    return *(_Script_SwGame::SWGameUserSettings**)((uintptr_t)this + 0x268);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Components/Combat/HC_zTargeting.HC_zTargeting_C");
    return result;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::zTargetSwitch(_Script_CoreUObject::Vector& inputDir) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::InitZTargetLogTime() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::LogZTargetExit() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::UpdateZTargetingIcon() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::SetZTarget(_Script_Engine::Actor* NewZTarget, _Script_Engine::Actor*& zTarget) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::AutoDetachTarget() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::zTarget_Activate(bool forceNone, bool ResetCamera, bool noIcon) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::TargetSwitch(float x_axis_input, float y_axis_input) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::OcclusionTest(float Delta) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::Unbind_DeathEvent() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::Bind_Death_Event() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::zTargetDead(_Script_Engine::Actor* DeadActor) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::zTargetDestroyed(_Script_Engine::Actor* DestroyedActor) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::ModifierRemoved(_Script_RsGameTechRT::RsHeroStateModifierDefinition* Modifier) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::Action_zTargetActivate() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::Action_ExitZTarget() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::ZTargetHandleResult(_Script_Engine::Actor* Target) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::Reset_Camera_Rotation() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::Turn_To_Target() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::Spawn_ZTarget_Icon() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::Delayed_Unsheathe() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::SetCameraMode() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::AutoActivateZTarget(_Script_Engine::Actor* Target) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::Set_ZTarget_Focus_Actor() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::TargetSwitchPC(float XAxis, float YAxis) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::Update_Photomode_Visibility() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::ExecuteUbergraph_HC_zTargeting(int32_t EntryPoint) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::HeroExitedZTarget__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::HeroSwitchedZTarget__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C::HeroZTargeted__DelegateSignature(_Script_Engine::Actor* NewTarget) {
    return;
}
