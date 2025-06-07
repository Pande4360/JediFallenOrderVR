#include "..\FUObjectArray.hpp"
#include "..\_Game_Narrative_DebugUI_UI_Narrative_HubDebug\UI_Narrative_HubDebug_C.hpp"
#include "..\_Game_Narrative_Enums_ST_NarrativeMetaTags\ST_NarrativeMetaTags.hpp"
#include "..\_Game_Narrative_Enums_ST_VOQueueItem\ST_VOQueueItem.hpp"
#include "NarrativeSystem_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_DialoguePlugin\Dialogue.hpp"
#include "..\_Script_DialoguePlugin\DialogueGestureParams.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "..\_Script_GameplayTags\GameplayTagContainer.hpp"
#include "..\_Script_RsGameTechRT\BAFTAEventDataSet.hpp"
#include "..\_Script_RsGameTechRT\NarrativeEvent.hpp"
#include "..\_Script_RsGameTechRT\NarrativeEventResult.hpp"
#include "..\_Script_RsGameTechRT\RAPDatabase.hpp"
#include "..\_Script_RsGameTechRT\RAPLineStartedEventData.hpp"
#include "..\_Script_RsGameTechRT\RAPSystem.hpp"
#include "..\_Script_RsGameTechRT\RsAIController.hpp"
#include "..\_Script_RsGameTechRT\RsAIGameStateManager.hpp"
#include "..\_Script_RsGameTechRT\RsConversation.hpp"
#include "..\_Script_RsGameTechRT\RsNarrativeSystem.hpp"
void* _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_LevelsToTags() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::PlayDialogueForActorGroup_BP(_Script_DialoguePlugin::Dialogue* Dialogue, _Script_GameplayTags::GameplayTagContainer AdditionalContent, bool QueueIfFails, void*& Actors, bool AbortOnAIAlerted, _Script_RsGameTechRT::NarrativeEventResult& Result) {
    return;
}
void* _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_RegisteredSpeakers() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_VOPlayQueue() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_PrimaryPlayState() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_IdenticalDialogAssetCooldowns() {
    return (void*)((uintptr_t)this + 0x148);
}
void* _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_SystemicDialogueLastPlayed() {
    return (void*)((uintptr_t)this + 0xf8);
}
_Script_RsGameTechRT::RAPSystem*& _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_RAPSystem() {
    return *(_Script_RsGameTechRT::RAPSystem**)((uintptr_t)this + 0x198);
}
_Script_RsGameTechRT::RAPDatabase*& _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_RAPDatabase() {
    return *(_Script_RsGameTechRT::RAPDatabase**)((uintptr_t)this + 0x1a0);
}
void* _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_LevelTagsToEnum() {
    return (void*)((uintptr_t)this + 0x560);
}
void* _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_ActorGroupChosenDialogues() {
    return (void*)((uintptr_t)this + 0x1a8);
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::set_AbortCurrentConversationOnCombat(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x608 + 0);
    *(uint8_t*)((uintptr_t)this + 0x608 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_RsGameTechRT::RsConversation*& _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_CurrentPrimaryConversation() {
    return *(_Script_RsGameTechRT::RsConversation**)((uintptr_t)this + 0x1f8);
}
void* _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_MoreBAFTADBs() {
    return (void*)((uintptr_t)this + 0x200);
}
bool _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_CurrentlyPlayingForceAlwaysDialogue() {
    return (*(uint8_t*)((uintptr_t)this + 0x210 + 0)) & 1 != 0;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::PlatformLocaleToTextLanguage(void* Locale, void*& TextLanguage) {
    return;
}
bool _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_InSystemicAITestMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x610 + 0)) & 1 != 0;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::set_CurrentlyPlayingForceAlwaysDialogue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x210 + 0);
    *(uint8_t*)((uintptr_t)this + 0x210 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_CurrentFightHasPlayedAlert() {
    return (*(uint8_t*)((uintptr_t)this + 0x211 + 0)) & 1 != 0;
}
float& _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_LastAmbientDialogueCheckTime() {
    return *(float*)((uintptr_t)this + 0x614);
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::set_CurrentFightHasPlayedAlert(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x211 + 0);
    *(uint8_t*)((uintptr_t)this + 0x211 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_EnemyTypesToLastOfContexts() {
    return (void*)((uintptr_t)this + 0x218);
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::IsActorInSubtitleDistance(_Script_Engine::Actor* Actor, int32_t DistanceCheckOverride, bool& Result) {
    return;
}
void* _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_LVL_NarrativeChoiceMade() {
    return (void*)((uintptr_t)this + 0x268);
}
void* _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_LVL_DialogueQueued() {
    return (void*)((uintptr_t)this + 0x278);
}
void* _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_LVL_QueuedDialogueCancelled() {
    return (void*)((uintptr_t)this + 0x298);
}
void* _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_LVL_QueuedDialoguePlayed() {
    return (void*)((uintptr_t)this + 0x288);
}
int32_t& _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_VOQueueIDCounter() {
    return *(int32_t*)((uintptr_t)this + 0x2a8);
}
void* _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_LVL_QueuedDialoguePlayedOrCancelled() {
    return (void*)((uintptr_t)this + 0x2b0);
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::HaveEventDialogueForActorGroup0(_Script_GameplayTags::GameplayTag EventContext, _Script_GameplayTags::GameplayTagContainer AdditionalContent, void*& Actors, bool& Result, void*& ChosenActors) {
    return;
}
_Script_CoreUObject::Class* _Game_Narrative_NarrativeSystem::NarrativeSystem_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Narrative/NarrativeSystem.NarrativeSystem_C");
    return result;
}
void* _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_LVL_UnlockableTagSet() {
    return (void*)((uintptr_t)this + 0x2c0);
}
bool _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_AbortCurrentConversationOnCombat() {
    return (*(uint8_t*)((uintptr_t)this + 0x608 + 0)) & 1 != 0;
}
void* _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_RegisteredLookats() {
    return (void*)((uintptr_t)this + 0x2d0);
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::SetActorLookatTarget(_Script_Engine::Actor* Speaker, _Script_GameplayTags::GameplayTag LookatTarget) {
    return;
}
void* _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_CurrentConversations() {
    return (void*)((uintptr_t)this + 0x380);
}
void* _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_AvailableCultureList() {
    return (void*)((uintptr_t)this + 0x320);
}
void* _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_ManualCinematicVOClampRequestActors() {
    return (void*)((uintptr_t)this + 0x330);
}
bool _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_SystemicVOHit() {
    return (*(uint8_t*)((uintptr_t)this + 0x611 + 0)) & 1 != 0;
}
void* _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_ActorGroupCheckTimes() {
    return (void*)((uintptr_t)this + 0x3d0);
}
_Script_Engine::Actor*& _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_CommentaryActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x420);
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::UpdateMostRecentSpeaker(_Script_Engine::Actor* Speaker, _Script_GameplayTags::GameplayTag& SpeakerTag) {
    return;
}
void* _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_LVL_CinematicStarted() {
    return (void*)((uintptr_t)this + 0x428);
}
void* _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_LVL_CinematicEnded() {
    return (void*)((uintptr_t)this + 0x438);
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::LVL_CinematicEnded__DelegateSignature() {
    return;
}
bool _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_HaveParsedMetaForCurrentQuery() {
    return (*(uint8_t*)((uintptr_t)this + 0x448 + 0)) & 1 != 0;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::set_HaveParsedMetaForCurrentQuery(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x448 + 0);
    *(uint8_t*)((uintptr_t)this + 0x448 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::CombineAllBAFTADataAtInit() {
    return;
}
void* _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_NonExistentAmbientHashCombos() {
    return (void*)((uintptr_t)this + 0x450);
}
void* _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_CulturesToLanguageStringsNative() {
    return (void*)((uintptr_t)this + 0x4a0);
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::IsActorFauna(_Script_Engine::Actor* Actor, bool& IsFauna) {
    return;
}
void* _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_WwiseCulturesToAudioLanguageStrings() {
    return (void*)((uintptr_t)this + 0x4f0);
}
void* _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_NotFaunaFactions() {
    return (void*)((uintptr_t)this + 0x540);
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::ResetSystemicCooldowns() {
    return;
}
void* _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_PlanetsToDestinationTags() {
    return (void*)((uintptr_t)this + 0x5b0);
}
_Game_Narrative_DebugUI_UI_Narrative_HubDebug::UI_Narrative_HubDebug_C*& _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_HubDebugWindow() {
    return *(_Game_Narrative_DebugUI_UI_Narrative_HubDebug::UI_Narrative_HubDebug_C**)((uintptr_t)this + 0x600);
}
float& _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_SubtitleDisplaySqDistance() {
    return *(float*)((uintptr_t)this + 0x60c);
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::SpeakerTagToDisplayName(_Script_GameplayTags::GameplayTag SpeakerTag, void*& LocalizedName) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::set_InSystemicAITestMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x610 + 0);
    *(uint8_t*)((uintptr_t)this + 0x610 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::set_SystemicVOHit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x611 + 0);
    *(uint8_t*)((uintptr_t)this + 0x611 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Narrative_NarrativeSystem::NarrativeSystem_C::get_Initialized() {
    return (*(uint8_t*)((uintptr_t)this + 0x612 + 0)) & 1 != 0;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::set_Initialized(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x612 + 0);
    *(uint8_t*)((uintptr_t)this + 0x612 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::QuitToTitle() {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::LVL_QueuedDialogueCancelled__DelegateSignature(int32_t QueueID) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::Debug_PrintDialogueBAFTAContexts(_Script_DialoguePlugin::Dialogue* Dialogue) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::AddMetaTagsBackToAdditionalContentForEnqueuing(_Script_GameplayTags::GameplayTagContainer& AdditionalContent, _Game_Narrative_Enums_ST_NarrativeMetaTags::ST_NarrativeMetaTags& MetaTags) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::RemoveQueuedVO(int32_t ID) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::GetDebugWindow(_Game_Narrative_DebugUI_UI_Narrative_HubDebug::UI_Narrative_HubDebug_C*& Window) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::LVL_DialogueQueued__DelegateSignature(_Game_Narrative_Enums_ST_VOQueueItem::ST_VOQueueItem QueuedItemInfo, int32_t QueueID) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::UpdateDestinationPlanet(void* Planet) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::SetCommentaryActor(_Script_Engine::Actor* CommentaryActor) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::CheckMetaTagThenRemove(_Script_GameplayTags::GameplayTagContainer& Container, _Script_GameplayTags::GameplayTag Tag, bool& BoolByRef) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::ParseAndStripMetaTags(_Script_GameplayTags::GameplayTagContainer& AdditionalContent, _Game_Narrative_Enums_ST_NarrativeMetaTags::ST_NarrativeMetaTags& MetaTags, bool QueueIfFails, bool ForceAlwaysPlay, _Script_DialoguePlugin::Dialogue* Dialogue) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::FindConversationForActor(_Script_Engine::Actor* Actor, _Script_RsGameTechRT::RsConversation*& Conversation) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::AddActorSpeakerTagsToList(void*& SuppliedActors, void*& TagList, void*& AddedActors, bool& AnyAdded) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::CheckManualVOClamp(bool& ClampActive) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::PlayGesture(_Script_Engine::Actor* Actor, _Script_DialoguePlugin::DialogueGestureParams Gesture) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::ManualCinematicModeVOClamp(bool ClampActive, _Script_Engine::Actor* CausingActor) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::GetConversationCenterLocation(_Script_RsGameTechRT::RsConversation* Conversation, _Script_CoreUObject::Vector& WorldLocation) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::HandleConversationBegin(_Script_RsGameTechRT::RsConversation* Conversation, void*& Speakers, int32_t ConversationId) {
    return;
}
bool _Game_Narrative_NarrativeSystem::NarrativeSystem_C::IsANarrativeSpeaker0(_Script_Engine::Actor* Actor) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::TryTriggerLastEnemyOfTypeVO(_Script_Engine::Actor* DeadGuy, _Script_RsGameTechRT::NarrativeEventResult& Result, _Script_Engine::Actor*& SelectedSpeaker) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::AreDialogueActorsValid(void*& Actors, bool& Result) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::AIAwarenessAbort(_Script_RsGameTechRT::RsAIController* AIController, void* PreviousAwarenessState, void* NewAwarenessState) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::RegisterAIAlertsForAbort(void*& AI_Actors) {
    return;
}
_Script_RsGameTechRT::NarrativeEventResult _Game_Narrative_NarrativeSystem::NarrativeSystem_C::PlayDialogue0(_Script_RsGameTechRT::NarrativeEvent Details) {
    return;
}
_Script_RsGameTechRT::NarrativeEventResult _Game_Narrative_NarrativeSystem::NarrativeSystem_C::PlayDialogueForActorGroup0(_Script_RsGameTechRT::NarrativeEvent Details, void*& Actors) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::DebugLog(void* Message, int32_t DetailLevel, bool& Logged) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::RegisterCombatAlert() {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::CanPlayFreshCombatAlert(bool& Result) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::GetEnemyRangedOrMelee(_Script_Engine::Actor* Enemy, _Script_GameplayTags::GameplayTag& RangedOrMeleeTag) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::StopCurrentConversation() {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::GetBAFTADataForContext(_Script_GameplayTags::GameplayTag& Context, bool& Found, _Script_RsGameTechRT::BAFTAEventDataSet& Data) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::NarrativeEffortEvent(_Script_Engine::Actor* Speaker, bool ShouldInterruptVO, bool& PlayEffort) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::GetSystemicParentTag(_Script_GameplayTags::GameplayTag EventContext, bool& GotParentTag, _Script_GameplayTags::GameplayTag& Result) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::DoesDialoguePassPerAssetCooldown(_Script_GameplayTags::GameplayTag EventContext, _Script_GameplayTags::GameplayTagContainer AdditionalContent, _Script_DialoguePlugin::Dialogue* Dialogue, bool& Result) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::UpdateNarrativeLevel() {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::OnConversationLineBegin(_Script_RsGameTechRT::RAPLineStartedEventData Data) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::CurrentlyPlaying(bool& Result) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::CharacterToActor(_Script_GameplayTags::GameplayTag Character, _Script_Engine::Actor*& Actor) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::TriggerEnqueuedVO() {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::HandleConversationFinished(_Script_RsGameTechRT::RsConversation* Conversation, int32_t ConversationId) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::PlayDialogueInternal(_Script_DialoguePlugin::Dialogue* Dialogue, _Script_GameplayTags::GameplayTag& SystemicForCooldowns, void*& SupplyActors, void*& SupplySpeakers, _Game_Narrative_Enums_ST_NarrativeMetaTags::ST_NarrativeMetaTags& MetaTags, bool Ambient, _Script_RsGameTechRT::RsConversation*& PlayingConversation, void*& ActorsUsed) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::GetPlayedDialogueTag(_Script_DialoguePlugin::Dialogue* Dialogue, _Script_GameplayTags::GameplayTag& GameplayTag) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::HasDialogueBeenPlayed(_Script_DialoguePlugin::Dialogue* Dialogues, bool& WasAlreadyPlayed) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::LogNarrativeTelemetryEvent(_Script_GameplayTags::GameplayTag EventContext, _Script_RsGameTechRT::NarrativeEventResult PlayResult, _Script_DialoguePlugin::Dialogue* PlayedDialogue, _Script_GameplayTags::GameplayTagContainer AdditionalContent) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::DoesSystemicPassTests(_Script_GameplayTags::GameplayTag& EventContext, _Game_Narrative_Enums_ST_NarrativeMetaTags::ST_NarrativeMetaTags& MetaTags, _Script_Engine::Actor* OptionalSpeaker, bool DebugLogging, void*& Result, _Script_GameplayTags::GameplayTag& SystemicForCooldowns) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::FindBestDialogueForEvent(_Script_GameplayTags::GameplayTag& EventContext, _Script_GameplayTags::GameplayTagContainer& AdditionalContent, bool AllowAutoConversations, _Game_Narrative_Enums_ST_NarrativeMetaTags::ST_NarrativeMetaTags& MetaTags, int32_t SpeakerCount, int32_t SpeakerHash, _Script_Engine::Actor* OptionalSpeaker, _Script_RsGameTechRT::NarrativeEventResult& Result, _Script_DialoguePlugin::Dialogue*& SelectedDialogue, int32_t& Match_Score, _Script_GameplayTags::GameplayTag& SystemicForCooldowns) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::EnqueueVO(_Game_Narrative_Enums_ST_VOQueueItem::ST_VOQueueItem& EnqueueParams, _Game_Narrative_Enums_ST_VOQueueItem::ST_VOQueueItem& QueuedItem) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::DoesNarrativeClampAllow(_Game_Narrative_Enums_ST_NarrativeMetaTags::ST_NarrativeMetaTags& MetaTags, bool& Result) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::GetEventContextForSpeaker(_Script_GameplayTags::GameplayTag EventContext, _Script_GameplayTags::GameplayTag Speaker, _Script_GameplayTags::GameplayTag& Result, bool& Success) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::PlayDialogue_BP(_Script_DialoguePlugin::Dialogue* Dialogue, _Script_Engine::Actor* OptionalSpeaker, _Script_GameplayTags::GameplayTagContainer& AdditionalContent, bool QueueIfFails, _Game_Narrative_Enums_ST_NarrativeMetaTags::ST_NarrativeMetaTags& MetaTags, _Script_GameplayTags::GameplayTag& SystemicForCooldowns, _Script_GameplayTags::GameplayTag& EventContext, _Script_RsGameTechRT::NarrativeEventResult& Result) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::FindBestSpeakerAndRegister(_Script_Engine::Actor* AIActor, void*& PossibleTags, _Script_GameplayTags::GameplayTag& SpeakerTag) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::UnregisterSpeaker(_Script_Engine::Actor* AIActor, _Script_GameplayTags::GameplayTag SpeakerTag) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::RegisterSpeaker(_Script_Engine::Actor* AIActor, _Script_GameplayTags::GameplayTag SpeakerTag) {
    return;
}
_Script_RsGameTechRT::NarrativeEventResult _Game_Narrative_NarrativeSystem::NarrativeSystem_C::TriggerNarrativeEventForActorGroup0(_Script_GameplayTags::GameplayTag EventContext, _Script_GameplayTags::GameplayTagContainer AdditionalContent, void*& Actors) {
    return;
}
_Script_RsGameTechRT::NarrativeEventResult _Game_Narrative_NarrativeSystem::NarrativeSystem_C::TriggerNarrativeEvent0(_Script_GameplayTags::GameplayTag EventContext, _Script_GameplayTags::GameplayTagContainer AdditionalContent, _Script_Engine::Actor* OptionalSpeaker, bool QueueIfFails) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::Initialize0() {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::PlayQueuedAfterDelay() {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::DelayedGesture(_Script_Engine::Actor* Actor, _Script_DialoguePlugin::DialogueGestureParams Gesture) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::AIGameStateChanged(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager, void* PreviousGameState, void* NewGameState) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::ConversationOver(_Script_RsGameTechRT::RsConversation* Conversation, void*& ConversationActors, int32_t ConversationId) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::OnRootLevelLoaded0() {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::HideGestureDebug(_Script_Engine::AnimMontage* Montage, bool Done) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::ToggleHubDebug0() {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::ExecuteUbergraph_NarrativeSystem(int32_t EntryPoint) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::LVL_CinematicStarted__DelegateSignature() {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::LVL_UnlockableTagSet__DelegateSignature(_Script_GameplayTags::GameplayTag UnlockableTag) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::LVL_QueuedDialoguePlayedOrCancelled__DelegateSignature(int32_t QueueID) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::LVL_QueuedDialoguePlayed__DelegateSignature(int32_t QueueID, _Script_DialoguePlugin::Dialogue* Dialogue, _Script_RsGameTechRT::RsConversation* ConversationPlaying) {
    return;
}
void _Game_Narrative_NarrativeSystem::NarrativeSystem_C::LVL_NarrativeChoiceMade__DelegateSignature(_Script_GameplayTags::GameplayTag ChoiceTag) {
    return;
}
