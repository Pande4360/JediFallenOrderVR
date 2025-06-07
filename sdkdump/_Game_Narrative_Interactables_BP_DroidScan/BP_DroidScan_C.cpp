#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid\BP_BuddyDroid_C.hpp"
#include "..\_Game_GlobalData_Economy_BPC_RewardComponent\BPC_RewardComponent_C.hpp"
#include "BP_DroidScan_C.hpp"
#include "..\_Game_UI_Debug_UI_MessageText\UI_MessageText_C.hpp"
#include "..\_Game_WorldInteracts_AI_BP_POI\BP_POI_C.hpp"
#include "..\_Game_WorldInteracts_EventZones_Interact_Zone_Interact\Zone_Interact_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Color.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BillboardComponent.hpp"
#include "..\_Script_Engine\ChildActorComponent.hpp"
#include "..\_Script_Engine\SphereComponent.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "..\_Script_RsGameTechRT\RsAIController.hpp"
#include "..\_Script_RsGameTechRT\RsAIGameStateManager.hpp"
#include "..\_Script_RsGameTechRT\RsAIPOI.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapCollectableComponent.hpp"
void* _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x5a8);
}
_Script_Engine::SphereComponent*& _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_UsabilityTrigger() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x5b8);
}
_Script_Engine::BillboardComponent*& _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_Target_Object() {
    return *(_Script_Engine::BillboardComponent**)((uintptr_t)this + 0x5d0);
}
_Script_RsGameTechRT::RsWorldMapCollectableComponent*& _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_RsWorldMapCollectable() {
    return *(_Script_RsGameTechRT::RsWorldMapCollectableComponent**)((uintptr_t)this + 0x5b0);
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::set_ScriptEventQueued(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x709 + 0);
    *(uint8_t*)((uintptr_t)this + 0x709 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::ChildActorComponent*& _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_NarrativeLabelComponent() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x5c0);
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::set_WaitingForScriptEvent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x708 + 0);
    *(uint8_t*)((uintptr_t)this + 0x708 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_GlobalData_Economy_BPC_RewardComponent::BPC_RewardComponent_C*& _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_BPC_RewardComponent() {
    return *(_Game_GlobalData_Economy_BPC_RewardComponent::BPC_RewardComponent_C**)((uintptr_t)this + 0x5c8);
}
_Script_Engine::ChildActorComponent*& _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_Zone_Interact_Component() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x5d8);
}
_Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C*& _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_Zone_Interact_Actor() {
    return *(_Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C**)((uintptr_t)this + 0x5e0);
}
bool _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_POI_available_in_Post_combat_state() {
    return (*(uint8_t*)((uintptr_t)this + 0x6b2 + 0)) & 1 != 0;
}
_Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C*& _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_BuddyDroid_REF() {
    return *(_Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C**)((uintptr_t)this + 0x5e8);
}
void* _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_ScanUnlockableTag() {
    return (void*)((uintptr_t)this + 0x6b8);
}
bool _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_ScanStarted() {
    return (*(uint8_t*)((uintptr_t)this + 0x5f0 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::set_ScanStarted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5f0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5f0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_StartEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x5f1 + 0)) & 1 != 0;
}
bool _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_ScriptEventQueued() {
    return (*(uint8_t*)((uintptr_t)this + 0x709 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::set_StartEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5f1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5f1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_WaitForButtonPress() {
    return (*(uint8_t*)((uintptr_t)this + 0x5f2 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::set_WaitForButtonPress(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5f2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5f2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_WaitForScriptEvent() {
    return (*(uint8_t*)((uintptr_t)this + 0x5f3 + 0)) & 1 != 0;
}
bool _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_NarrativeLabelHiddenInGame() {
    return (*(uint8_t*)((uintptr_t)this + 0x6a0 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::set_WaitForScriptEvent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5f3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5f3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_LevelEnabledOverride() {
    return (*(uint8_t*)((uintptr_t)this + 0x6d0 + 0)) & 1 != 0;
}
int32_t& _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_ScanAttractDistance() {
    return *(int32_t*)((uintptr_t)this + 0x5f4);
}
void* _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_CustomSystemicVOFlags_Start() {
    return (void*)((uintptr_t)this + 0x640);
}
int32_t& _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_ScanInteractDistance() {
    return *(int32_t*)((uintptr_t)this + 0x5f8);
}
void* _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_Deprecated_Type() {
    return (void*)((uintptr_t)this + 0x5fc);
}
void* _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_Scan_Reaction() {
    return (void*)((uintptr_t)this + 0x5fd);
}
void* _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_ScanTargetLocations() {
    return (void*)((uintptr_t)this + 0x600);
}
void* _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_NarrativeLabelOffset() {
    return (void*)((uintptr_t)this + 0x690);
}
bool _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_IsCurrentlyAtPOI() {
    return (*(uint8_t*)((uintptr_t)this + 0x610 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::set_IsCurrentlyAtPOI(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x610 + 0);
    *(uint8_t*)((uintptr_t)this + 0x610 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_HasButtonBeenPressed() {
    return (*(uint8_t*)((uintptr_t)this + 0x611 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::set_HasButtonBeenPressed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x611 + 0);
    *(uint8_t*)((uintptr_t)this + 0x611 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_IsDroidAvailable() {
    return (*(uint8_t*)((uintptr_t)this + 0x612 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::set_IsDroidAvailable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x612 + 0);
    *(uint8_t*)((uintptr_t)this + 0x612 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_UI_Debug_UI_MessageText::UI_MessageText_C*& _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_DatabankMessageWidget() {
    return *(_Game_UI_Debug_UI_MessageText::UI_MessageText_C**)((uintptr_t)this + 0x6a8);
}
bool _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_DebugMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x613 + 0)) & 1 != 0;
}
void* _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_EventContext_ScanDone() {
    return (void*)((uintptr_t)this + 0x6e8);
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::set_DebugMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x613 + 0);
    *(uint8_t*)((uintptr_t)this + 0x613 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_ScanTargetLocationsIndex() {
    return *(int32_t*)((uintptr_t)this + 0x614);
}
bool _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_CanRetryFailedPOI() {
    return (*(uint8_t*)((uintptr_t)this + 0x618 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::GetNarrativeLabel(void*& Label) {
    return;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::set_CanRetryFailedPOI(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x618 + 0);
    *(uint8_t*)((uintptr_t)this + 0x618 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_CustomSystemicVOFlags_Alert() {
    return (void*)((uintptr_t)this + 0x620);
}
_Script_CoreUObject::Class* _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Narrative/Interactables/BP_DroidScan.BP_DroidScan_C");
    return result;
}
void* _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_CustomSystemicVOFlags_Done() {
    return (void*)((uintptr_t)this + 0x660);
}
void* _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_NarrativeLabel() {
    return (void*)((uintptr_t)this + 0x680);
}
void* _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_NarrativeLabelColor() {
    return (void*)((uintptr_t)this + 0x69c);
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::set_NarrativeLabelHiddenInGame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6a0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_LVL_ScanStarted() {
    return (void*)((uintptr_t)this + 0x6f8);
}
bool _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_POI_available_in_Pre_combat_state() {
    return (*(uint8_t*)((uintptr_t)this + 0x6b0 + 0)) & 1 != 0;
}
bool _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_POI_available_in_Combat_state() {
    return (*(uint8_t*)((uintptr_t)this + 0x6b1 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::set_POI_available_in_Pre_combat_state(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6b0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::set_POI_available_in_Combat_state(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6b1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6b1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::set_POI_available_in_Post_combat_state(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6b2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6b2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_LVL_ScanCompleted() {
    return (void*)((uintptr_t)this + 0x6c0);
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::set_LevelEnabledOverride(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_EventContext_ScanStart() {
    return (void*)((uintptr_t)this + 0x6d8);
}
void* _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_EventContext_ScanAlert() {
    return (void*)((uintptr_t)this + 0x6e0);
}
float& _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_ScanTimePerTarget() {
    return *(float*)((uintptr_t)this + 0x6f0);
}
bool _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::get_WaitingForScriptEvent() {
    return (*(uint8_t*)((uintptr_t)this + 0x708 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::GetNarrativeLabelHiddenInGame(bool& Hidden) {
    return;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::GetNarrativeLabelOffset(_Script_CoreUObject::Vector& Offset) {
    return;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::GetNarrativeLabelColor(_Script_CoreUObject::Color& Result) {
    return;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::HasValidUnscannedUnlockableTag(bool& Result) {
    return;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::LVL_SetEnabled(bool SetEnabled) {
    return;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::UpdateUsability() {
    return;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::CheckAgainstAIGameState(bool& Result) {
    return;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::CheckScanConditionsMet(bool& Result) {
    return;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::UserConstructionScript0() {
    return;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::ApproachingScanPoint(_Script_RsGameTechRT::RsAIPOI* POI, _Script_RsGameTechRT::RsAIController* AIController) {
    return;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::LeavingScanPoint(_Script_RsGameTechRT::RsAIPOI* POI, _Script_RsGameTechRT::RsAIController* AIController) {
    return;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::ButtonPressed() {
    return;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::ArrivedAtPOI(_Script_RsGameTechRT::RsAIPOI* POI, _Script_RsGameTechRT::RsAIController* AIController) {
    return;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::Start_Scan_Sequence() {
    return;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::Reset_Scan() {
    return;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::Disable_Scan() {
    return;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::Enable_Scan() {
    return;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::OnAIGameStateChangedEvent(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager, void* PreviousGameState, void* NewGameState) {
    return;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::AnUnlockOccurred(_Script_GameplayTags::GameplayTag UnlockableTag) {
    return;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::ScanSuccessActions() {
    return;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::LVL_ScriptedScanStart() {
    return;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::StartWaitingForScriptEvent() {
    return;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::QueuedScriptEvent() {
    return;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::ExecuteUbergraph_BP_DroidScan(int32_t EntryPoint) {
    return;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::LVL_ScanStarted__DelegateSignature() {
    return;
}
void _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C::LVL_ScanCompleted__DelegateSignature() {
    return;
}
