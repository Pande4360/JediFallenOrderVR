#include "..\FUObjectArray.hpp"
#include "BP_Elevator_C.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_AkAudio\AkBankLoadComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\ChildActorComponent.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_RsGameTechRT\RsNavModifierComponent.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapStateTransitionGatewayComponent.hpp"
#include "..\_Script_SwGame\RsAbilityEffectVictimComponent.hpp"
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::set_callDownSwitchExists(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x459 + 0);
    *(uint8_t*)((uintptr_t)this + 0x459 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::set_Active(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x430 + 0);
    *(uint8_t*)((uintptr_t)this + 0x430 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_AkAudio::AkBankLoadComponent*& _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_AkBankLoad() {
    return *(_Script_AkAudio::AkBankLoadComponent**)((uintptr_t)this + 0x378);
}
_Script_Engine::BoxComponent*& _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_SquishBox() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x368);
}
_Script_RsGameTechRT::RsWorldMapStateTransitionGatewayComponent*& _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_RsWorldMapOneWayGateway() {
    return *(_Script_RsGameTechRT::RsWorldMapStateTransitionGatewayComponent**)((uintptr_t)this + 0x370);
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::set_callUpSwitchExists(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x458 + 0);
    *(uint8_t*)((uintptr_t)this + 0x458 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::BoxComponent*& _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_NavBlockerDown() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x398);
}
void* _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_Lvl_Elevator_ReachedBottom() {
    return (void*)((uintptr_t)this + 0x420);
}
_Script_RsGameTechRT::RsNavModifierComponent*& _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_RsNavModifierDown() {
    return *(_Script_RsGameTechRT::RsNavModifierComponent**)((uintptr_t)this + 0x380);
}
_Script_RsGameTechRT::RsNavModifierComponent*& _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_RsNavModifierUp() {
    return *(_Script_RsGameTechRT::RsNavModifierComponent**)((uintptr_t)this + 0x388);
}
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_Elevator() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x3c8);
}
_Script_Engine::BoxComponent*& _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_NavBlockerUp() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x390);
}
bool _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_leaveLowerNavOff() {
    return (*(uint8_t*)((uintptr_t)this + 0x491 + 0)) & 1 != 0;
}
_Script_Engine::BoxComponent*& _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_onElevator() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x3a0);
}
_Script_AkAudio::AkAudioEvent*& _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_Audio_Elevator_Start() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x460);
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::Lvl_Elevator_LeavingBottom__DelegateSignature() {
    return;
}
_Script_Engine::BoxComponent*& _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_platformOverlap() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x3a8);
}
_Script_Engine::ChildActorComponent*& _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_callUpSwitch() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x3b8);
}
_Script_Engine::ChildActorComponent*& _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_callDownSwitch() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x3b0);
}
void* _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_Lvl_Elevator_FirstActivation() {
    return (void*)((uintptr_t)this + 0x470);
}
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_endLoc___WillBuildNav() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x3c0);
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::set_isElevatorInUse(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x490 + 0);
    *(uint8_t*)((uintptr_t)this + 0x490 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SceneComponent*& _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_Root() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x3d0);
}
float& _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_PressurePlateMoveDistance() {
    return *(float*)((uintptr_t)this + 0x484);
}
_Script_SwGame::RsAbilityEffectVictimComponent*& _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_RsAbilityEffectVictim() {
    return *(_Script_SwGame::RsAbilityEffectVictimComponent**)((uintptr_t)this + 0x3d8);
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::set_bShowButtonMsgWhenInActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x481 + 0);
    *(uint8_t*)((uintptr_t)this + 0x481 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_upSwitchLight() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x3e0);
}
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_downSwitchPanel() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x3f0);
}
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_downSwitchLight() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x3e8);
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::set_IsMoving(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x45a + 0);
    *(uint8_t*)((uintptr_t)this + 0x45a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_upSwitchPanel() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x3f8);
}
float& _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_Elevator_Animate_Alpha_7BC179C14B70724185312BA8F2162C3C() {
    return *(float*)((uintptr_t)this + 0x400);
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::set_ShortcutUnlockedMessage(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x492 + 0);
    *(uint8_t*)((uintptr_t)this + 0x492 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_Elevator_Animate__Direction_7BC179C14B70724185312BA8F2162C3C() {
    return (void*)((uintptr_t)this + 0x404);
}
_Script_Engine::TimelineComponent*& _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_Elevator_Animate() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x408);
}
int32_t& _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_VL_Material_Index() {
    return *(int32_t*)((uintptr_t)this + 0x494);
}
void* _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_Lvl_Elevator_ReachedTop() {
    return (void*)((uintptr_t)this + 0x410);
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::Elevator_Animate__FinishedFunc() {
    return;
}
bool _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_Active() {
    return (*(uint8_t*)((uintptr_t)this + 0x430 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::Elevator_Animate__Audio_Backward_Stop__EventFunc() {
    return;
}
bool _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_atEndLoc() {
    return (*(uint8_t*)((uintptr_t)this + 0x431 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::set_atEndLoc(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x431 + 0);
    *(uint8_t*)((uintptr_t)this + 0x431 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_ElevatorTime() {
    return *(float*)((uintptr_t)this + 0x434);
}
void* _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_Lvl_Elevator_LeavingBottom() {
    return (void*)((uintptr_t)this + 0x438);
}
void* _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_Lvl_Elevator_LeavingTop() {
    return (void*)((uintptr_t)this + 0x448);
}
bool _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_callUpSwitchExists() {
    return (*(uint8_t*)((uintptr_t)this + 0x458 + 0)) & 1 != 0;
}
bool _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_callDownSwitchExists() {
    return (*(uint8_t*)((uintptr_t)this + 0x459 + 0)) & 1 != 0;
}
bool _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_IsMoving() {
    return (*(uint8_t*)((uintptr_t)this + 0x45a + 0)) & 1 != 0;
}
_Script_AkAudio::AkAudioEvent*& _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_Audio_Elevator_Stop() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x468);
}
bool _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_isDisabled_NOSAVE() {
    return (*(uint8_t*)((uintptr_t)this + 0x480 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::set_isDisabled_NOSAVE(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x480 + 0);
    *(uint8_t*)((uintptr_t)this + 0x480 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_bShowButtonMsgWhenInActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x481 + 0)) & 1 != 0;
}
void* _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_CameraShakeClass() {
    return (void*)((uintptr_t)this + 0x488);
}
bool _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_isElevatorInUse() {
    return (*(uint8_t*)((uintptr_t)this + 0x490 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::set_leaveLowerNavOff(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x491 + 0);
    *(uint8_t*)((uintptr_t)this + 0x491 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_ShortcutUnlockedMessage() {
    return (*(uint8_t*)((uintptr_t)this + 0x492 + 0)) & 1 != 0;
}
bool _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_Elevator_Lights_VL() {
    return (*(uint8_t*)((uintptr_t)this + 0x493 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::set_Elevator_Lights_VL(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x493 + 0);
    *(uint8_t*)((uintptr_t)this + 0x493 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::get_saveShortcut() {
    return (*(uint8_t*)((uintptr_t)this + 0x498 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::set_saveShortcut(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x498 + 0);
    *(uint8_t*)((uintptr_t)this + 0x498 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/LevelObjects/BP_Elevator.BP_Elevator_C");
    return result;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::SetElevatorPlatformLights(bool On) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::UserConstructionScript0() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::Elevator_Animate__UpdateFunc() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::Elevator_Animate__Audio_Backward_Start__EventFunc() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::Elevator_Animate__Audio_Forward_Stop__EventFunc() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::Elevator_Animate__Audio_Forward_Start__EventFunc() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::OnForcePullEnd() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::OnForcePullEnterHold() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::OnForcePullOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::Lvl_Elevator_FirstActivation__DelegateSignature() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::OnForcePullStart(_Script_Engine::Actor* Instigator, float PullDuration, _Script_CoreUObject::Vector& OriginalPullDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::OnForcePushEnd() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::OnForcePushOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::OnForcePushStart(_Script_Engine::Actor* Instigator, _Script_CoreUObject::Vector& PushVector, void* PushHitType, _Script_CoreUObject::Vector& OriginalDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::OnForceSlowEnd() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::OnForceSlowOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::OnForceSlowRenewed(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::OnForceSlowStart(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::OnForceTelekinesisEnd() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::OnForceTelekinesisOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::OnForceTelekinesisStart(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::Lvl_Elevator_ReachedTop__DelegateSignature() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::ReceiveBeginPlay0() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::LVL_setActive(bool Active) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::startElevator() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::PoweredOn(bool BeginPlay) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::PoweredOff(bool BeginPlay) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::LVL_CallDownInstant() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::LVL_CallUpInstant() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::SetupCallSwitches(bool On_, bool Up_) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::LVL_setDisabled(bool IsDisabled) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::LVL_SetupSwitches(bool CallUpExists, bool CallDownExists, bool Destroy_) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::BndEvt__onElevator_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::BndEvt__SquishBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::LVL_CallDown() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::LVL_CallUp() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::ExecuteUbergraph_BP_Elevator(int32_t EntryPoint) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::Lvl_Elevator_LeavingTop__DelegateSignature() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_Elevator::BP_Elevator_C::Lvl_Elevator_ReachedBottom__DelegateSignature() {
    return;
}
