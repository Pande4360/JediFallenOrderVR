#include "..\FUObjectArray.hpp"
#include "..\_Game_Narrative_Interactables_BP_DroidScan_LocationMarker\BP_DroidScan_LocationMarker_C.hpp"
#include "BP_Door_C.hpp"
#include "..\_Game_WorldInteracts_EventZones_Interact_Zone_Interact\Zone_Interact_C.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_AkAudio\AkBankLoadComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\AnimSequence.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\ChildActorComponent.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\TextRenderComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_RsGameTechRT\RsAISenseComponent.hpp"
#include "..\_Script_RsGameTechRT\RsNavModifierComponent.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapDoorComponent.hpp"
#include "..\_Script_SwGame\RsAbilityEffectVictimComponent.hpp"
void* _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x418);
}
bool _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_RelativePositionsUninitialized() {
    return (*(uint8_t*)((uintptr_t)this + 0x602 + 0)) & 1 != 0;
}
_Script_Engine::SceneComponent*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_DoorButtonFingerPushLocation_LockedSide() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x420);
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::PoweredOff(bool BeginPlay) {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::set_ShowDoorDebugEditorText(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x688 + 0);
    *(uint8_t*)((uintptr_t)this + 0x688 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::BoxComponent*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_DefaultDoorAutoCloseTrigger() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x440);
}
bool _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_ReopenOnceClosed() {
    return (*(uint8_t*)((uintptr_t)this + 0x6ab + 0)) & 1 != 0;
}
_Script_Engine::SceneComponent*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_AnimSync_UnlockSide() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x4d8);
}
_Script_Engine::SceneComponent*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_DoorButtonFingerPushLocation_UnlockSide() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x428);
}
void* _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_LVL_DoorClosed() {
    return (void*)((uintptr_t)this + 0x638);
}
_Script_AkAudio::AkBankLoadComponent*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_AkBankLoad() {
    return *(_Script_AkAudio::AkBankLoadComponent**)((uintptr_t)this + 0x438);
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::UpdateAutomaticTriggerOverlaps(_Script_Engine::PrimitiveComponent* Component) {
    return;
}
bool _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_AutomaticCloseOnLeaveTrigger() {
    return (*(uint8_t*)((uintptr_t)this + 0x51b + 0)) & 1 != 0;
}
_Script_Engine::SceneComponent*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_AnimSyncsParent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x430);
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::PlayLockedDoorCantOpenAnim_Player() {
    return;
}
bool _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_StartPoweredOn() {
    return (*(uint8_t*)((uintptr_t)this + 0x515 + 0)) & 1 != 0;
}
_Script_SwGame::RsAbilityEffectVictimComponent*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_RsAbilityEffectVictim() {
    return *(_Script_SwGame::RsAbilityEffectVictimComponent**)((uintptr_t)this + 0x448);
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::LVL_SetHackPanelsState(void* NewState) {
    return;
}
bool _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_DoorPoweredOn() {
    return (*(uint8_t*)((uintptr_t)this + 0x512 + 0)) & 1 != 0;
}
_Script_Engine::TextRenderComponent*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_EditorHint_YAxis() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x450);
}
bool _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_ShowDoorDebugEditorText() {
    return (*(uint8_t*)((uintptr_t)this + 0x688 + 0)) & 1 != 0;
}
_Script_Engine::TextRenderComponent*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_EditorHint_DoorBounds() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x458);
}
void* _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_LVL_DoorPoweredOff() {
    return (void*)((uintptr_t)this + 0x678);
}
_Script_Engine::TextRenderComponent*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_EditorHint_DoorName() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x460);
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::HackPanelUsed() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::set_OpenWhenUnlocked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x514 + 0);
    *(uint8_t*)((uintptr_t)this + 0x514 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SceneComponent*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_AutomaticCloseTriggers_Parent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x468);
}
_Script_RsGameTechRT::RsAISenseComponent*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_RsAISense() {
    return *(_Script_RsGameTechRT::RsAISenseComponent**)((uintptr_t)this + 0x470);
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::UpdateCustomUnlockFX(bool Unlocked) {
    return;
}
_Script_Engine::SceneComponent*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_MalfunctionParticles_Parent_LeftOrTop() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x4a0);
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::UpdateDoorPositions(float OpenPercentage) {
    return;
}
_Script_RsGameTechRT::RsWorldMapDoorComponent*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_SwWorldMapDoor() {
    return *(_Script_RsGameTechRT::RsWorldMapDoorComponent**)((uintptr_t)this + 0x478);
}
void* _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_Door1StartPosition_LeftOrTop() {
    return (void*)((uintptr_t)this + 0x5c4);
}
_Script_Engine::ChildActorComponent*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_HackPanelChildActor_2() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x480);
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::LVL_ToggleLocked() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::set_LockedDoorCantOpenAnim_Player_UseUpperBodyMontage(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5c0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::set_Unlocked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x510 + 0);
    *(uint8_t*)((uintptr_t)this + 0x510 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::ChildActorComponent*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_HackPanelChildActor_1() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x488);
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::LVL_HasPower_(bool& Result) {
    return;
}
_Script_Engine::TimelineComponent*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_MalfunctioningWhileOpenAndPowered() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x4f8);
}
_Script_Engine::SceneComponent*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_DebugText_Parent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x490);
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::MalfunctioningWhileOpenAndPowered__CloseSound__EventFunc() {
    return;
}
_Script_Engine::AnimSequence*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_DoorOpenAnim_Player_UnlockedSide() {
    return *(_Script_Engine::AnimSequence**)((uintptr_t)this + 0x590);
}
_Script_Engine::SceneComponent*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_MalfunctionParticles_Parent_RightOrBottom() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x498);
}
_Script_Engine::BoxComponent*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_DefaultBoxNavBlocker() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x4a8);
}
float& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_DebugDoorWidth() {
    return *(float*)((uintptr_t)this + 0x690);
}
_Script_Engine::SceneComponent*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_NavBlockingColliders_Parent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x4b0);
}
_Script_RsGameTechRT::RsNavModifierComponent*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_RsNavModifier() {
    return *(_Script_RsGameTechRT::RsNavModifierComponent**)((uintptr_t)this + 0x4b8);
}
_Script_Engine::BoxComponent*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_DefaultDoorAutoTrigger() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x4c0);
}
void* _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_LVL_DoorLocked() {
    return (void*)((uintptr_t)this + 0x658);
}
_Script_Engine::SceneComponent*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_AutomaticOpenTriggers_Parent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x4c8);
}
_Script_Engine::SceneComponent*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_AnimSync_LockedSide() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x4d0);
}
void* _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_LVL_DoorOpening() {
    return (void*)((uintptr_t)this + 0x608);
}
_Script_Engine::SceneComponent*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_DoorMesh_Double_RightOrBottom() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x4e0);
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::GetDoorUnlockButtonLocation(_Script_CoreUObject::Vector& WorldLocation) {
    return;
}
_Script_Engine::SceneComponent*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_DoorMesh_Single_LeftOrTop() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x4e8);
}
float& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_MalfunctioningWhileOpenAndPowered_DoorOpenPercentage_9C7E759D45282CE939A2E7A618437333() {
    return *(float*)((uintptr_t)this + 0x4f0);
}
void* _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_MalfunctioningWhileOpenAndPowered__Direction_9C7E759D45282CE939A2E7A618437333() {
    return (void*)((uintptr_t)this + 0x4f4);
}
float& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_DoorOpeningClosing_NewPositionPercentage_12DB378046C21E257F5A94A5FAA44F7F() {
    return *(float*)((uintptr_t)this + 0x500);
}
void* _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_DoorOpeningClosing__Direction_12DB378046C21E257F5A94A5FAA44F7F() {
    return (void*)((uintptr_t)this + 0x504);
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::TimelineOverride_SetPlayRate_Opening(_Script_Engine::TimelineComponent* OverriddenTimeline) {
    return;
}
float& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_DoorUnlockAnim_Player_PostDelay() {
    return *(float*)((uintptr_t)this + 0x588);
}
_Script_Engine::TimelineComponent*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_DoorOpeningClosing() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x508);
}
_Script_Engine::AnimSequence*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_LockedDoorCantOpenAnim_Player() {
    return *(_Script_Engine::AnimSequence**)((uintptr_t)this + 0x5b8);
}
bool _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_Unlocked() {
    return (*(uint8_t*)((uintptr_t)this + 0x510 + 0)) & 1 != 0;
}
bool _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_DoorCurrentlyUsable() {
    return (*(uint8_t*)((uintptr_t)this + 0x511 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::set_DoorCurrentlyUsable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x511 + 0);
    *(uint8_t*)((uintptr_t)this + 0x511 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::set_DoorPoweredOn(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x512 + 0);
    *(uint8_t*)((uintptr_t)this + 0x512 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::set_OnlyPlayerTriggersAutoDoor_FirstTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x51d + 0);
    *(uint8_t*)((uintptr_t)this + 0x51d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_StartOpen() {
    return (*(uint8_t*)((uintptr_t)this + 0x513 + 0)) & 1 != 0;
}
void* _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_LVL_DoorUnlocked() {
    return (void*)((uintptr_t)this + 0x648);
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::set_StartOpen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x513 + 0);
    *(uint8_t*)((uintptr_t)this + 0x513 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_Occlusion() {
    return (*(uint8_t*)((uintptr_t)this + 0x6b9 + 0)) & 1 != 0;
}
bool _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_OpenWhenUnlocked() {
    return (*(uint8_t*)((uintptr_t)this + 0x514 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::set_RelativePositionsUninitialized(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x602 + 0);
    *(uint8_t*)((uintptr_t)this + 0x602 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::set_StartPoweredOn(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x515 + 0);
    *(uint8_t*)((uintptr_t)this + 0x515 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::AutomaticTrigger(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void* _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_Door2Dimension_RightOrBottom() {
    return (void*)((uintptr_t)this + 0x5ac);
}
bool _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_OpenWhenPoweredOn() {
    return (*(uint8_t*)((uintptr_t)this + 0x516 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::set_OpenWhenPoweredOn(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x516 + 0);
    *(uint8_t*)((uintptr_t)this + 0x516 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_IsDoubleDoor() {
    return (*(uint8_t*)((uintptr_t)this + 0x518 + 0)) & 1 != 0;
}
bool _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_CloseWhenPoweredOff() {
    return (*(uint8_t*)((uintptr_t)this + 0x517 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::set_AutomaticCloseOnLeaveTrigger(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x51b + 0);
    *(uint8_t*)((uintptr_t)this + 0x51b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::set_CloseWhenPoweredOff(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x517 + 0);
    *(uint8_t*)((uintptr_t)this + 0x517 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::ExecuteUbergraph_BP_Door(int32_t EntryPoint) {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::set_IsDoubleDoor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x518 + 0);
    *(uint8_t*)((uintptr_t)this + 0x518 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_VerticalDoor() {
    return (*(uint8_t*)((uintptr_t)this + 0x519 + 0)) & 1 != 0;
}
bool _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_SuppressOneWayDoorUnlockMessages() {
    return (*(uint8_t*)((uintptr_t)this + 0x6b8 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::set_VerticalDoor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x519 + 0);
    *(uint8_t*)((uintptr_t)this + 0x519 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_AutomaticOpenOnEnterTrigger() {
    return (*(uint8_t*)((uintptr_t)this + 0x51a + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::set_AutomaticOpenOnEnterTrigger(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x51a + 0);
    *(uint8_t*)((uintptr_t)this + 0x51a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::set_Occlusion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6b9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6b9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_OnlyPlayerTriggersAutoDoor() {
    return (*(uint8_t*)((uintptr_t)this + 0x51c + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::set_OnlyPlayerTriggersAutoDoor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x51c + 0);
    *(uint8_t*)((uintptr_t)this + 0x51c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_OnlyPlayerTriggersAutoDoor_FirstTime() {
    return (*(uint8_t*)((uintptr_t)this + 0x51d + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::InitializeDoorDimensionValues(_Script_Engine::SceneComponent* ParentComponent, _Script_CoreUObject::Vector& StoredDimensionVector, bool IsLeftOrTop) {
    return;
}
bool _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_MalfunctionWhileOpenAndPowered() {
    return (*(uint8_t*)((uintptr_t)this + 0x51e + 0)) & 1 != 0;
}
void* _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_HackPanels() {
    return (void*)((uintptr_t)this + 0x51f);
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::GetPlayerDoorOpenSide(bool& LeftSide) {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::set_MalfunctionWhileOpenAndPowered(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x51e + 0);
    *(uint8_t*)((uintptr_t)this + 0x51e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_HackPanelsStartDisabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x520 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::set_HackPanelsStartDisabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x520 + 0);
    *(uint8_t*)((uintptr_t)this + 0x520 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_HackPanelDoorParenting() {
    return (void*)((uintptr_t)this + 0x528);
}
void* _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_HackPanelClass() {
    return (void*)((uintptr_t)this + 0x538);
}
bool _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_LockWhenClosed() {
    return (*(uint8_t*)((uintptr_t)this + 0x540 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::Construction_UpdateDoorDirectionSyncs() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::set_LockWhenClosed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x540 + 0);
    *(uint8_t*)((uintptr_t)this + 0x540 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_ExpandInteractZoneToHintOnUnlock() {
    return (*(uint8_t*)((uintptr_t)this + 0x541 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::set_ExpandInteractZoneToHintOnUnlock(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x541 + 0);
    *(uint8_t*)((uintptr_t)this + 0x541 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_DoorOpeningPercentage() {
    return *(float*)((uintptr_t)this + 0x544);
}
float& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_DoorOpeningTime() {
    return *(float*)((uintptr_t)this + 0x548);
}
float& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_DoorClosingTime() {
    return *(float*)((uintptr_t)this + 0x54c);
}
float& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_DoorStayOpenTime() {
    return *(float*)((uintptr_t)this + 0x550);
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::Construction_CalculateDebugDisplayBounds() {
    return;
}
float& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_DoorUnlockDelay() {
    return *(float*)((uintptr_t)this + 0x554);
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::LVL_LockDoor() {
    return;
}
_Script_AkAudio::AkAudioEvent*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_DoorOpeningSFX() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x558);
}
_Script_AkAudio::AkAudioEvent*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_DoorClosingSFX() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x560);
}
_Script_AkAudio::AkAudioEvent*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_DoorLockedSFX() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x568);
}
float& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_DoorLockedPreDelay() {
    return *(float*)((uintptr_t)this + 0x570);
}
_Script_AkAudio::AkAudioEvent*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_DoorUnlockSFX() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x578);
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::LVL_DoorClosing__DelegateSignature() {
    return;
}
_Script_Engine::AnimSequence*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_DoorUnlockAnim_Player() {
    return *(_Script_Engine::AnimSequence**)((uintptr_t)this + 0x580);
}
_Script_Engine::AnimSequence*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_DoorOpenAnim_Player_LockedSide() {
    return *(_Script_Engine::AnimSequence**)((uintptr_t)this + 0x598);
}
void* _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_Door1Dimension_LeftOrTop() {
    return (void*)((uintptr_t)this + 0x5a0);
}
bool _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_LockedDoorCantOpenAnim_Player_UseUpperBodyMontage() {
    return (*(uint8_t*)((uintptr_t)this + 0x5c0 + 0)) & 1 != 0;
}
void* _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_Door2StartPosition_RightOrBottom() {
    return (void*)((uintptr_t)this + 0x5d0);
}
void* _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_AutoOpenTriggers() {
    return (void*)((uintptr_t)this + 0x5e0);
}
void* _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_AutoCloseTriggers() {
    return (void*)((uintptr_t)this + 0x5f0);
}
void* _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_DoorOpeningState() {
    return (void*)((uintptr_t)this + 0x600);
}
void* _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_LastOneWayUnlockDirection() {
    return (void*)((uintptr_t)this + 0x601);
}
void* _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_LVL_DoorOpened() {
    return (void*)((uintptr_t)this + 0x618);
}
void* _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_LVL_DoorClosing() {
    return (void*)((uintptr_t)this + 0x628);
}
void* _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_LVL_DoorPoweredOn() {
    return (void*)((uintptr_t)this + 0x668);
}
float& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_DebugDoorHeight() {
    return *(float*)((uintptr_t)this + 0x68c);
}
void* _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_LVL_DoorHacked() {
    return (void*)((uintptr_t)this + 0x698);
}
bool _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_PlayerTriggeredDoorFirstTime() {
    return (*(uint8_t*)((uintptr_t)this + 0x6a8 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::set_PlayerTriggeredDoorFirstTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_BeginPlayPowerUninitialized() {
    return (*(uint8_t*)((uintptr_t)this + 0x6a9 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::set_BeginPlayPowerUninitialized(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6a9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6a9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_UnlockDirection() {
    return (void*)((uintptr_t)this + 0x6aa);
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::set_ReopenOnceClosed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6ab + 0);
    *(uint8_t*)((uintptr_t)this + 0x6ab + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Narrative_Interactables_BP_DroidScan_LocationMarker::BP_DroidScan_LocationMarker_C*& _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_DroidScanLocationActor() {
    return *(_Game_Narrative_Interactables_BP_DroidScan_LocationMarker::BP_DroidScan_LocationMarker_C**)((uintptr_t)this + 0x6b0);
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::set_SuppressOneWayDoorUnlockMessages(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::get_CurrentlyPlayingUnlockAnim() {
    return (*(uint8_t*)((uintptr_t)this + 0x6ba + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::set_CurrentlyPlayingUnlockAnim(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6ba + 0);
    *(uint8_t*)((uintptr_t)this + 0x6ba + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/Doors/BP_Door.BP_Door_C");
    return result;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::SetPowered_Internal(bool NewPoweredOn, bool IsBeginPlay) {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::IsDoorReallyNavigableForAI(bool& Result) {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::LVL_TogglePower() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::InitializeHackPanels() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::SetDoorOpenState(void* NewDoorOpenState) {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::PlayMalfunctionVFX() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::Construction_InitializeNavModifierPrimitives() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::LVL_SetPoweredOn(bool NewPoweredOn) {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::PlayDoorLockedCantOpenVisuals() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::PlayDoorOpeningSFX() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::PlayDoorClosingSFX() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::ModifyOpenPercentageAccordingToSettings(_Script_Engine::SceneComponent* DoorComponent, float OpenPercentage, bool IsLeftOrTop) {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::PlayUnlockVisuals_Door() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::PlayUnlockAnim_Player() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::DoesPlayerSatisfyUnlockConditions(bool& Result) {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::LVL_SetDoorUnlockState(bool NewUnlocked, bool IsInitialization) {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::ShouldAllowInteract__OverrideMe0(bool& Result) {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::UserConstructionScript() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::DoorOpeningClosing__FinishedFunc() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::DoorOpeningClosing__UpdateFunc() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::MalfunctioningWhileOpenAndPowered__FinishedFunc() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::MalfunctioningWhileOpenAndPowered__UpdateFunc() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::MalfunctioningWhileOpenAndPowered__SparksVFX__EventFunc() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::MalfunctioningWhileOpenAndPowered__OpenSound__EventFunc() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::ReceiveBeginPlay() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::ButtonPress0() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::Event_DoorUnlockPlayerAnim_Stopped(bool interrupted) {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::LVL_CloseDoor() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::LVL_OpenDoor() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::DoCustomPostPlayerUnlockAnimDelay() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::AutomaticLeaveTrigger(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::UpdateMalfunctionState() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::PoweredOn(bool BeginPlay) {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::LVL_UnlockDoor() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::LVL_OpenDoorInstant() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::DoorUnlockAnimDelayDone() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::Interacted0() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::TimelineOverride_Update(float NewDoorPositionPercentage) {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::TimelineOverride_Finished(void* Direction) {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::TimelineOverride_Play() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::TimelineOverride_Reverse() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::LVL_CloseDoorInstant() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::TimelineOverride_SetPlayRate_Closing(_Script_Engine::TimelineComponent* OverriddenTimeline) {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::Event_DoorUnlockPlayerAnim_Ended(_Script_Engine::AnimMontage* AnimMontage, bool interrupted) {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::AnimNotify_PlayDoorUnlockSFX() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::LVL_DoorHacked__DelegateSignature() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::LVL_DoorPoweredOff__DelegateSignature() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::LVL_DoorPoweredOn__DelegateSignature() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::LVL_DoorLocked__DelegateSignature() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::LVL_DoorUnlocked__DelegateSignature() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::LVL_DoorClosed__DelegateSignature() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::LVL_DoorOpened__DelegateSignature() {
    return;
}
void _Game_WorldInteracts_Doors_BP_Door::BP_Door_C::LVL_DoorOpening__DelegateSignature() {
    return;
}
