#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_InWorld_UI_interact_icon\UI_interact_icon_C.hpp"
#include "..\_Game_UI_UI_ButtonScreenSpace\UI_ButtonScreenSpace_C.hpp"
#include "Zone_Interact_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SphereComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_RsGameTechRT\RsDistanceTriggerComponent.hpp"
#include "..\_Script_RsGameTechRT\RsHero.hpp"
#include "..\_Script_UMG\WidgetComponent.hpp"
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::InitializeValues() {
    return;
}
void* _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
void* _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_IconUpdateTimer() {
    return (void*)((uintptr_t)this + 0x3e8);
}
_Script_RsGameTechRT::RsDistanceTriggerComponent*& _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_RsDistanceTrigger_Hint() {
    return *(_Script_RsGameTechRT::RsDistanceTriggerComponent**)((uintptr_t)this + 0x368);
}
bool _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_UsableInAir() {
    return (*(uint8_t*)((uintptr_t)this + 0x3fd + 0)) & 1 != 0;
}
_Script_RsGameTechRT::RsDistanceTriggerComponent*& _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_RsDistanceTrigger_Interact() {
    return *(_Script_RsGameTechRT::RsDistanceTriggerComponent**)((uintptr_t)this + 0x370);
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::IsCurrentlyValidRemoteInteract(bool& Result) {
    return;
}
_Script_Engine::SceneComponent*& _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_syncSpot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x398);
}
bool _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_OnlyInteractWhenIconVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x3e2 + 0)) & 1 != 0;
}
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_ClickableSphere_EditorOnly() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x378);
}
_Script_RsGameTechRT::RsHero*& _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_Hero() {
    return *(_Script_RsGameTechRT::RsHero**)((uintptr_t)this + 0x3f0);
}
_Script_Engine::SphereComponent*& _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_VisibilityTraceCollider() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x380);
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::LVL_SetEnabled(bool NewEnabled, bool Temporary) {
    return;
}
_Script_Engine::SceneComponent*& _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_Anchor() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x390);
}
_Script_UMG::WidgetComponent*& _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_InteractWidget() {
    return *(_Script_UMG::WidgetComponent**)((uintptr_t)this + 0x388);
}
_Script_Engine::SceneComponent*& _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_Scene() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x3a0);
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::IsInteractionCurrentlyPossible(bool WouldShowIcon, bool& Result) {
    return;
}
void* _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_LVL_InteractedEvent() {
    return (void*)((uintptr_t)this + 0x3a8);
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::UpdateSheatheSaberTag() {
    return;
}
bool _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_StartEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x3b8 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::UpdateBitmaskAndIcon() {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::set_StartEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::UpdateCollisionEnabled() {
    return;
}
bool _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_OnlyOnce() {
    return (*(uint8_t*)((uintptr_t)this + 0x3b9 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::set_CurrentlyEnabled_INTERNALUSEONLY(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x400 + 0);
    *(uint8_t*)((uintptr_t)this + 0x400 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::set_OnlyOnce(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3b9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3b9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_HideIconIfActorNotVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x3e1 + 0)) & 1 != 0;
}
bool _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_HideButtonWhenUsed() {
    return (*(uint8_t*)((uintptr_t)this + 0x3ba + 0)) & 1 != 0;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::Interacted() {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::set_HideButtonWhenUsed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3ba + 0);
    *(uint8_t*)((uintptr_t)this + 0x3ba + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::Tmp_ActorWithinTrigger(_Script_Engine::Actor* Actor, _Script_RsGameTechRT::RsDistanceTriggerComponent* Trigger, bool& Result) {
    return;
}
float& _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_ReuseCooldown() {
    return *(float*)((uintptr_t)this + 0x3bc);
}
int32_t& _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_InteractDistance() {
    return *(int32_t*)((uintptr_t)this + 0x3c0);
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::UpdatePooledWidgetResource() {
    return;
}
int32_t& _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_HintIconDistance() {
    return *(int32_t*)((uintptr_t)this + 0x3c4);
}
int32_t& _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_InteractZoneState_Bitmask() {
    return *(int32_t*)((uintptr_t)this + 0x3c8);
}
int32_t& _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_PrevInteractZoneState_Bitmask() {
    return *(int32_t*)((uintptr_t)this + 0x3cc);
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::ButtonPress() {
    return;
}
_Game_UI_InWorld_UI_interact_icon::UI_interact_icon_C*& _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_UIInteractIcon() {
    return *(_Game_UI_InWorld_UI_interact_icon::UI_interact_icon_C**)((uintptr_t)this + 0x3d0);
}
bool _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_SheatheOnApproach() {
    return (*(uint8_t*)((uintptr_t)this + 0x3ff + 0)) & 1 != 0;
}
_Game_UI_UI_ButtonScreenSpace::UI_ButtonScreenSpace_C*& _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_UIButtonScreenSpace() {
    return *(_Game_UI_UI_ButtonScreenSpace::UI_ButtonScreenSpace_C**)((uintptr_t)this + 0x3d8);
}
bool _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_Don_tUpdateTillStateChange() {
    return (*(uint8_t*)((uintptr_t)this + 0x3e0 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::CreateScreenSpaceButton() {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::set_Don_tUpdateTillStateChange(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3e0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_PooledWidgetInUse() {
    return (*(uint8_t*)((uintptr_t)this + 0x414 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::set_HideIconIfActorNotVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3e1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3e1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::set_OnlyInteractWhenIconVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3e2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3e2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_LastValidLOSTime() {
    return *(float*)((uintptr_t)this + 0x3e4);
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::DroidButtonPress(bool& Handled) {
    return;
}
bool _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_UseAnyPartOfActorForVisibleTests() {
    return (*(uint8_t*)((uintptr_t)this + 0x3f8 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::set_UseAnyPartOfActorForVisibleTests(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3f8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::HandleInteract(bool ForceHandle, bool& Handled) {
    return;
}
void* _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_InteractType() {
    return (void*)((uintptr_t)this + 0x3f9);
}
bool _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_RemoteInteractAvailable() {
    return (*(uint8_t*)((uintptr_t)this + 0x3fa + 0)) & 1 != 0;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::set_RemoteInteractAvailable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3fa + 0);
    *(uint8_t*)((uintptr_t)this + 0x3fa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_InteractText() {
    return (void*)((uintptr_t)this + 0x3fb);
}
bool _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_UsableDuringCombat() {
    return (*(uint8_t*)((uintptr_t)this + 0x3fc + 0)) & 1 != 0;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::set_UsableDuringCombat(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3fc + 0);
    *(uint8_t*)((uintptr_t)this + 0x3fc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::set_UsableInAir(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3fd + 0);
    *(uint8_t*)((uintptr_t)this + 0x3fd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_SaveSelfAfterUse() {
    return (*(uint8_t*)((uintptr_t)this + 0x3fe + 0)) & 1 != 0;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::set_SaveSelfAfterUse(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3fe + 0);
    *(uint8_t*)((uintptr_t)this + 0x3fe + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::set_SheatheOnApproach(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3ff + 0);
    *(uint8_t*)((uintptr_t)this + 0x3ff + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_CurrentlyEnabled_INTERNALUSEONLY() {
    return (*(uint8_t*)((uintptr_t)this + 0x400 + 0)) & 1 != 0;
}
int32_t& _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_Priority() {
    return *(int32_t*)((uintptr_t)this + 0x410);
}
_Script_Engine::DataTable*& _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_InteractTextTable() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0x408);
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::set_PooledWidgetInUse(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x414 + 0);
    *(uint8_t*)((uintptr_t)this + 0x414 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::get_DelegateOnlyOnceBehavior() {
    return (*(uint8_t*)((uintptr_t)this + 0x415 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::set_DelegateOnlyOnceBehavior(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x415 + 0);
    *(uint8_t*)((uintptr_t)this + 0x415 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/EventZones/Interact/Zone_Interact.Zone_Interact_C");
    return result;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::LVL_Disable() {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::LVL_Enable() {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::LVL_HideIconUntilNextStateChange() {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::IsRemoteInteract(bool& Result) {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::UpdateRemoteInteractState(bool Available) {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::RecentlyRendered(bool& Result) {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::LVL_GetEnabled(bool& Result) {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::ShouldAllowInteract__OverrideMe(bool& Result) {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::HandleSphereOverlap(_Script_Engine::Actor* Player) {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::InitializeTriggerSphere(_Script_RsGameTechRT::RsDistanceTriggerComponent* DistanceTrigger, int32_t TriggerDistance) {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::UpdateIcon(bool UpdateIsDueToStateChange) {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::UserConstructionScript0() {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::BndEvt__RsDistanceTrigger_Interact_K2Node_ComponentBoundEvent_2_DistanceTriggerSignature__DelegateSignature(_Script_Engine::Actor* Actor) {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::BndEvt__RsDistanceTrigger_Interact_K2Node_ComponentBoundEvent_3_DistanceTriggerSignature__DelegateSignature(_Script_Engine::Actor* Actor) {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::BndEvt__RsDistanceTrigger_Hint_K2Node_ComponentBoundEvent_4_DistanceTriggerSignature__DelegateSignature(_Script_Engine::Actor* Actor) {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::BndEvt__RsDistanceTrigger_Hint_K2Node_ComponentBoundEvent_5_DistanceTriggerSignature__DelegateSignature(_Script_Engine::Actor* Actor) {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::ReceiveEndPlay0(void* EndPlayReason) {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::InteractAnimationDone() {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::Timer_UpdateIcon() {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::CancelToNav() {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::ReceiveBeginPlay0() {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::ExecuteUbergraph_Zone_Interact(int32_t EntryPoint) {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C::LVL_InteractedEvent__DelegateSignature() {
    return;
}
