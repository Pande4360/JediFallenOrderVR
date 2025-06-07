#include "..\FUObjectArray.hpp"
#include "BP_Hub_C.hpp"
#include "..\_Game_Narrative_Hub_Chumps_BP_ChumpBase\BP_ChumpBase_C.hpp"
#include "..\_Game_Narrative_Hub_Structs_ST_HubChumpSpawnData\ST_HubChumpSpawnData.hpp"
#include "..\_Game_Narrative_Hub_Structs_ST_HubDebugTagConfiguration\ST_HubDebugTagConfiguration.hpp"
#include "..\_Game_Narrative_Hub_Structs_ST_HubDialogueInfo\ST_HubDialogueInfo.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_DialoguePlugin\Dialogue.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_RsGameTechRT\RAPLineStartedEventData.hpp"
#include "..\_Script_RsGameTechRT\RsAICharacter.hpp"
#include "..\_Script_RsGameTechRT\RsConversation.hpp"
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::LVL_OnHubActivate__DelegateSignature() {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::set_StartActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x378 + 0);
    *(uint8_t*)((uintptr_t)this + 0x378 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_ChumpSelectedDialogues() {
    return (void*)((uintptr_t)this + 0x560);
}
void* _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_NearNPCCameraModeName() {
    return (void*)((uintptr_t)this + 0x558);
}
void* _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
void* _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_HubTempContentTag() {
    return (void*)((uintptr_t)this + 0x610);
}
void* _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_SpawnedChumps() {
    return (void*)((uintptr_t)this + 0x3e0);
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::hasRequiredLevelTags(_Game_Narrative_Hub_Structs_ST_HubChumpSpawnData::ST_HubChumpSpawnData& HubChump, bool& True_) {
    return;
}
bool _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_CameraModeActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x550 + 0)) & 1 != 0;
}
float& _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_VOAbandonmentDistance() {
    return *(float*)((uintptr_t)this + 0x538);
}
_Script_Engine::StaticMeshComponent*& _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_HubZoneMesh() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x368);
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::getTagsAsString(void*& Array, void*& Array1, void*& Tags) {
    return;
}
_Script_Engine::SceneComponent*& _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x370);
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::HeroNearChump(_Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C* Chump) {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::set_CameraModeActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x550 + 0);
    *(uint8_t*)((uintptr_t)this + 0x550 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_StartActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x378 + 0)) & 1 != 0;
}
int32_t& _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_MaxConversationsPerChumpPerHubVisit() {
    return *(int32_t*)((uintptr_t)this + 0x600);
}
void* _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_HubChumps() {
    return (void*)((uintptr_t)this + 0x380);
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::LVL_UpdateMantisRamp(void* NewState, bool& Success) {
    return;
}
void* _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_SpawnersToUse() {
    return (void*)((uintptr_t)this + 0x390);
}
_Script_Engine::Actor*& _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_ConversationCenterActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x608);
}
float& _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_VoEngagementDistanceForLockingAuto() {
    return *(float*)((uintptr_t)this + 0x604);
}
bool _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_InHubEngagementConversation() {
    return (*(uint8_t*)((uintptr_t)this + 0x430 + 0)) & 1 != 0;
}
float& _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_MantisAbandonmentDistance() {
    return *(float*)((uintptr_t)this + 0x7c0);
}
void* _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_LVL_OnHubActivate() {
    return (void*)((uintptr_t)this + 0x630);
}
void* _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_SpawnersWithProxyDistanceOverrides() {
    return (void*)((uintptr_t)this + 0x650);
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::set_InHubEngagementConversation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x430 + 0);
    *(uint8_t*)((uintptr_t)this + 0x430 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_DebugMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x4f0 + 0)) & 1 != 0;
}
void* _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_LVL_OnHubDeactivate() {
    return (void*)((uintptr_t)this + 0x640);
}
void* _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_ProxyVOCooldownTimes() {
    return (void*)((uintptr_t)this + 0x438);
}
bool _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_HubCurrentlyActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x6a0 + 0)) & 1 != 0;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::InitializeSpawnedChumps(_Script_RsGameTechRT::RsAICharacter* SpawnedAI, void* SpawnResult) {
    return;
}
float& _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_DefaultProxyVOCooldown() {
    return *(float*)((uintptr_t)this + 0x488);
}
bool _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_HUDRequestedHidden() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e8 + 0)) & 1 != 0;
}
float& _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_DefaultConversationContinueCooldown() {
    return *(float*)((uintptr_t)this + 0x48c);
}
void* _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_ValidConversationContinueCooldowns() {
    return (void*)((uintptr_t)this + 0x490);
}
void* _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_ActiveChumpIDs() {
    return (void*)((uintptr_t)this + 0x7c8);
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::Timer_CheckHeroDistance() {
    return;
}
_Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C*& _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_CurrentConversationChump() {
    return *(_Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C**)((uintptr_t)this + 0x4e0);
}
_Script_RsGameTechRT::RsConversation*& _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_CurrentConversation() {
    return *(_Script_RsGameTechRT::RsConversation**)((uintptr_t)this + 0x4e8);
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::set_DebugMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4f0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4f0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_MaxActiveDistanceFromHero() {
    return *(float*)((uintptr_t)this + 0x750);
}
void* _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_NearbyNPCs() {
    return (void*)((uintptr_t)this + 0x4f8);
}
void* _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_DebugButtonGametagConfigurations() {
    return (void*)((uintptr_t)this + 0x508);
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::DebugSetConfigurationGametags(int32_t Index) {
    return;
}
void* _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_ResetButtonNukeTags() {
    return (void*)((uintptr_t)this + 0x520);
}
int32_t& _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_CurrentDebugGametagIndex() {
    return *(int32_t*)((uintptr_t)this + 0x518);
}
float& _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_ProxyVODistance() {
    return *(float*)((uintptr_t)this + 0x530);
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::ReceiveBeginPlay0() {
    return;
}
float& _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_VoEngagementDistance() {
    return *(float*)((uintptr_t)this + 0x534);
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::SetDebugHubTicking(bool Ticking) {
    return;
}
void* _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_PotentialEngagementNPCs() {
    return (void*)((uintptr_t)this + 0x540);
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::ChumpInLOS(_Script_Engine::Actor* Chump, bool& Result) {
    return;
}
void* _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_ChumpPreviousConversations() {
    return (void*)((uintptr_t)this + 0x5b0);
}
void* _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_HubMantisStates() {
    return (void*)((uintptr_t)this + 0x758);
}
void* _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_CurrentConversationSpeakers() {
    return (void*)((uintptr_t)this + 0x618);
}
void* _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_SpawnersToChumpData() {
    return (void*)((uintptr_t)this + 0x768);
}
float& _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_LastCooldownTickTime() {
    return *(float*)((uintptr_t)this + 0x628);
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::set_HubCurrentlyActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6a0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_LVL_HubDialogueFinishedPlaying() {
    return (void*)((uintptr_t)this + 0x6a8);
}
void* _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_LastDebugConfig() {
    return (void*)((uintptr_t)this + 0x6b8);
}
void* _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_ChumpsWhoPlayedGoAwayLines() {
    return (void*)((uintptr_t)this + 0x700);
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::set_HUDRequestedHidden(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_VOTickTimer() {
    return (void*)((uintptr_t)this + 0x7b8);
}
void* _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_LVL_HubDialogueStartedPlaying() {
    return (void*)((uintptr_t)this + 0x6f0);
}
float& _Game_Narrative_Hub_BP_Hub::BP_Hub_C::get_MantisProxyDistance() {
    return *(float*)((uintptr_t)this + 0x7c4);
}
_Script_CoreUObject::Class* _Game_Narrative_Hub_BP_Hub::BP_Hub_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Narrative/Hub/BP_Hub.BP_Hub_C");
    return result;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::HeroLeftChump(_Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C* Chump) {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::DebugPrintDebugSpawner(_Script_RsGameTechRT::RsAICharacter* Character) {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::UpdateMantisDoorState() {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::SetDebugHubTagSet(_Game_Narrative_Hub_Structs_ST_HubDebugTagConfiguration::ST_HubDebugTagConfiguration Config) {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::SetDebugHubUID(int32_t State) {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::SetDebugHubDialogue(void* Dialogue) {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::SetDebugHubState(void* State) {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::ProxyDone(_Script_RsGameTechRT::RsConversation* Conversation) {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::UpdateConversationActorLookats(_Script_RsGameTechRT::RAPLineStartedEventData LineData) {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::UpdateChumpConversationType(_Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C* Chump, _Game_Narrative_Hub_Structs_ST_HubDialogueInfo::ST_HubDialogueInfo Info) {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::ChumpInEngagement(_Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C* Chump) {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::Chump_TriggerVO() {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::RefreshChumpConversationSelection() {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::LVL_SetHubActive(bool Active) {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::SetDialogueCameraActive(bool Enabled) {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::EvaluateSpecificChumpSpawner(_Game_Narrative_Hub_Structs_ST_HubChumpSpawnData::ST_HubChumpSpawnData SpawnData) {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::DoneTalking(_Script_RsGameTechRT::RsConversation* Conversation, void*& Actors, int32_t ConversationId) {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::TryTriggerEngagementVO(_Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C* Chump, bool Auto, bool& Result) {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::ChumpLeftEngagement(_Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C* Chump) {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::DebugButtonPush() {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::StartHub() {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::ResetHub_ClearVars() {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::ResetHub(bool Restart) {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::ChumpLeftProximity(_Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C* Chump) {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::TickVO() {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::TryTriggerProxyVO(_Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C* Chump, bool& Result) {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::ChumpInProximity(_Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C* Chump) {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::TickCooldownMap(void*& CooldownMap) {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::SelectAndSpawnChumps() {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::UserConstructionScript0() {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::Completed_AAFF10334FD215F1A342F6A3C5E77E61(void*& SpawnedAIs, void* SpawnResult) {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::InpActEvt_L_K2Node_InputKeyEvent_0(_Script_InputCore::Key Key) {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::InterruptedConversation_LineEnded(_Script_RsGameTechRT::RsConversation* Conversation, int32_t CurrrentConversationLine) {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::SpawnChumps() {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::UpdateHeroOverlap() {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::EndConversationAndRefreshDialogueAfterDelay(bool ResetInConversationBool) {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::ReceiveEndPlay0(void* EndPlayReason) {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::BndEvt__HubZoneMesh_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::BndEvt__HubZoneMesh_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::LVL_ShowDebugTags(bool On_) {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::ExecuteUbergraph_BP_Hub(int32_t EntryPoint) {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::LVL_HubDialogueStartedPlaying__DelegateSignature(_Script_DialoguePlugin::Dialogue* Dialogue) {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::LVL_HubDialogueFinishedPlaying__DelegateSignature(_Script_DialoguePlugin::Dialogue* Dialogue) {
    return;
}
void _Game_Narrative_Hub_BP_Hub::BP_Hub_C::LVL_OnHubDeactivate__DelegateSignature() {
    return;
}
