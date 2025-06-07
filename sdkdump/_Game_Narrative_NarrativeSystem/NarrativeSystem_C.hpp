#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Narrative_Enums_ST_VOQueueItem\ST_VOQueueItem.hpp"
#include "..\_Script_DialoguePlugin\DialogueGestureParams.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "..\_Script_GameplayTags\GameplayTagContainer.hpp"
#include "..\_Script_RsGameTechRT\NarrativeEvent.hpp"
#include "..\_Script_RsGameTechRT\NarrativeEventResult.hpp"
#include "..\_Script_RsGameTechRT\RAPLineStartedEventData.hpp"
#include "..\_Script_RsGameTechRT\RsNarrativeSystem.hpp"
namespace _Script_RsGameTechRT {
struct RAPSystem;
}
namespace _Script_RsGameTechRT {
struct RAPDatabase;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_RsGameTechRT {
struct RsConversation;
}
namespace _Script_DialoguePlugin {
struct Dialogue;
}
namespace _Game_Narrative_DebugUI_UI_Narrative_HubDebug {
struct UI_Narrative_HubDebug_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Narrative_Enums_ST_NarrativeMetaTags {
struct ST_NarrativeMetaTags;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_RsGameTechRT {
struct RsAIController;
}
namespace _Script_RsGameTechRT {
struct BAFTAEventDataSet;
}
namespace _Script_RsGameTechRT {
struct RsAIGameStateManager;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Game_Narrative_NarrativeSystem {
#pragma pack(push, 1)
struct NarrativeSystem_C : public _Script_RsGameTechRT::RsNarrativeSystem {
    private: char pad_38[0x5e0]; public:
    void* get_UberGraphFrame();
    void* get_LevelsToTags();
    void* get_RegisteredSpeakers();
    void* get_VOPlayQueue();
    void* get_PrimaryPlayState();
    void* get_SystemicDialogueLastPlayed();
    void* get_IdenticalDialogAssetCooldowns();
    _Script_RsGameTechRT::RAPSystem*& get_RAPSystem();
    _Script_RsGameTechRT::RAPDatabase*& get_RAPDatabase();
    void* get_ActorGroupChosenDialogues();
    _Script_RsGameTechRT::RsConversation*& get_CurrentPrimaryConversation();
    void* get_MoreBAFTADBs();
    bool get_CurrentlyPlayingForceAlwaysDialogue();
    void set_CurrentlyPlayingForceAlwaysDialogue(bool value);
    bool get_CurrentFightHasPlayedAlert();
    void set_CurrentFightHasPlayedAlert(bool value);
    void* get_EnemyTypesToLastOfContexts();
    void* get_LVL_NarrativeChoiceMade();
    void* get_LVL_DialogueQueued();
    void* get_LVL_QueuedDialoguePlayed();
    void* get_LVL_QueuedDialogueCancelled();
    int32_t& get_VOQueueIDCounter();
    void* get_LVL_QueuedDialoguePlayedOrCancelled();
    void* get_LVL_UnlockableTagSet();
    void* get_RegisteredLookats();
    void* get_AvailableCultureList();
    void* get_ManualCinematicVOClampRequestActors();
    void* get_CurrentConversations();
    void* get_ActorGroupCheckTimes();
    _Script_Engine::Actor*& get_CommentaryActor();
    void* get_LVL_CinematicStarted();
    void* get_LVL_CinematicEnded();
    bool get_HaveParsedMetaForCurrentQuery();
    void set_HaveParsedMetaForCurrentQuery(bool value);
    void* get_NonExistentAmbientHashCombos();
    void* get_CulturesToLanguageStringsNative();
    void* get_WwiseCulturesToAudioLanguageStrings();
    void* get_NotFaunaFactions();
    void* get_LevelTagsToEnum();
    void* get_PlanetsToDestinationTags();
    _Game_Narrative_DebugUI_UI_Narrative_HubDebug::UI_Narrative_HubDebug_C*& get_HubDebugWindow();
    bool get_AbortCurrentConversationOnCombat();
    void set_AbortCurrentConversationOnCombat(bool value);
    float& get_SubtitleDisplaySqDistance();
    bool get_InSystemicAITestMode();
    void set_InSystemicAITestMode(bool value);
    bool get_SystemicVOHit();
    void set_SystemicVOHit(bool value);
    bool get_Initialized();
    void set_Initialized(bool value);
    float& get_LastAmbientDialogueCheckTime();
    static _Script_CoreUObject::Class* static_class();
    void QuitToTitle();
    void Debug_PrintDialogueBAFTAContexts(_Script_DialoguePlugin::Dialogue* Dialogue);
    void AddMetaTagsBackToAdditionalContentForEnqueuing(_Script_GameplayTags::GameplayTagContainer& AdditionalContent, _Game_Narrative_Enums_ST_NarrativeMetaTags::ST_NarrativeMetaTags& MetaTags);
    void IsActorInSubtitleDistance(_Script_Engine::Actor* Actor, int32_t DistanceCheckOverride, bool& Result);
    void PlatformLocaleToTextLanguage(void* Locale, void*& TextLanguage);
    void RemoveQueuedVO(int32_t ID);
    void ResetSystemicCooldowns();
    void GetDebugWindow(_Game_Narrative_DebugUI_UI_Narrative_HubDebug::UI_Narrative_HubDebug_C*& Window);
    void UpdateDestinationPlanet(void* Planet);
    void IsActorFauna(_Script_Engine::Actor* Actor, bool& IsFauna);
    void CombineAllBAFTADataAtInit();
    void SetCommentaryActor(_Script_Engine::Actor* CommentaryActor);
    void CheckMetaTagThenRemove(_Script_GameplayTags::GameplayTagContainer& Container, _Script_GameplayTags::GameplayTag Tag, bool& BoolByRef);
    void ParseAndStripMetaTags(_Script_GameplayTags::GameplayTagContainer& AdditionalContent, _Game_Narrative_Enums_ST_NarrativeMetaTags::ST_NarrativeMetaTags& MetaTags, bool QueueIfFails, bool ForceAlwaysPlay, _Script_DialoguePlugin::Dialogue* Dialogue);
    void FindConversationForActor(_Script_Engine::Actor* Actor, _Script_RsGameTechRT::RsConversation*& Conversation);
    void AddActorSpeakerTagsToList(void*& SuppliedActors, void*& TagList, void*& AddedActors, bool& AnyAdded);
    void CheckManualVOClamp(bool& ClampActive);
    void PlayGesture(_Script_Engine::Actor* Actor, _Script_DialoguePlugin::DialogueGestureParams Gesture);
    void ManualCinematicModeVOClamp(bool ClampActive, _Script_Engine::Actor* CausingActor);
    void GetConversationCenterLocation(_Script_RsGameTechRT::RsConversation* Conversation, _Script_CoreUObject::Vector& WorldLocation);
    void SetActorLookatTarget(_Script_Engine::Actor* Speaker, _Script_GameplayTags::GameplayTag LookatTarget);
    void HandleConversationBegin(_Script_RsGameTechRT::RsConversation* Conversation, void*& Speakers, int32_t ConversationId);
    bool IsANarrativeSpeaker0(_Script_Engine::Actor* Actor);
    void TryTriggerLastEnemyOfTypeVO(_Script_Engine::Actor* DeadGuy, _Script_RsGameTechRT::NarrativeEventResult& Result, _Script_Engine::Actor*& SelectedSpeaker);
    void AreDialogueActorsValid(void*& Actors, bool& Result);
    void AIAwarenessAbort(_Script_RsGameTechRT::RsAIController* AIController, void* PreviousAwarenessState, void* NewAwarenessState);
    void RegisterAIAlertsForAbort(void*& AI_Actors);
    _Script_RsGameTechRT::NarrativeEventResult PlayDialogue0(_Script_RsGameTechRT::NarrativeEvent Details);
    _Script_RsGameTechRT::NarrativeEventResult PlayDialogueForActorGroup0(_Script_RsGameTechRT::NarrativeEvent Details, void*& Actors);
    void DebugLog(void* Message, int32_t DetailLevel, bool& Logged);
    void RegisterCombatAlert();
    void CanPlayFreshCombatAlert(bool& Result);
    void GetEnemyRangedOrMelee(_Script_Engine::Actor* Enemy, _Script_GameplayTags::GameplayTag& RangedOrMeleeTag);
    void PlayDialogueForActorGroup_BP(_Script_DialoguePlugin::Dialogue* Dialogue, _Script_GameplayTags::GameplayTagContainer AdditionalContent, bool QueueIfFails, void*& Actors, bool AbortOnAIAlerted, _Script_RsGameTechRT::NarrativeEventResult& Result);
    void StopCurrentConversation();
    void GetBAFTADataForContext(_Script_GameplayTags::GameplayTag& Context, bool& Found, _Script_RsGameTechRT::BAFTAEventDataSet& Data);
    void NarrativeEffortEvent(_Script_Engine::Actor* Speaker, bool ShouldInterruptVO, bool& PlayEffort);
    void GetSystemicParentTag(_Script_GameplayTags::GameplayTag EventContext, bool& GotParentTag, _Script_GameplayTags::GameplayTag& Result);
    void DoesDialoguePassPerAssetCooldown(_Script_GameplayTags::GameplayTag EventContext, _Script_GameplayTags::GameplayTagContainer AdditionalContent, _Script_DialoguePlugin::Dialogue* Dialogue, bool& Result);
    void UpdateNarrativeLevel();
    void OnConversationLineBegin(_Script_RsGameTechRT::RAPLineStartedEventData Data);
    void CurrentlyPlaying(bool& Result);
    void CharacterToActor(_Script_GameplayTags::GameplayTag Character, _Script_Engine::Actor*& Actor);
    void TriggerEnqueuedVO();
    void HandleConversationFinished(_Script_RsGameTechRT::RsConversation* Conversation, int32_t ConversationId);
    void PlayDialogueInternal(_Script_DialoguePlugin::Dialogue* Dialogue, _Script_GameplayTags::GameplayTag& SystemicForCooldowns, void*& SupplyActors, void*& SupplySpeakers, _Game_Narrative_Enums_ST_NarrativeMetaTags::ST_NarrativeMetaTags& MetaTags, bool Ambient, _Script_RsGameTechRT::RsConversation*& PlayingConversation, void*& ActorsUsed);
    void GetPlayedDialogueTag(_Script_DialoguePlugin::Dialogue* Dialogue, _Script_GameplayTags::GameplayTag& GameplayTag);
    void HasDialogueBeenPlayed(_Script_DialoguePlugin::Dialogue* Dialogues, bool& WasAlreadyPlayed);
    void LogNarrativeTelemetryEvent(_Script_GameplayTags::GameplayTag EventContext, _Script_RsGameTechRT::NarrativeEventResult PlayResult, _Script_DialoguePlugin::Dialogue* PlayedDialogue, _Script_GameplayTags::GameplayTagContainer AdditionalContent);
    void DoesSystemicPassTests(_Script_GameplayTags::GameplayTag& EventContext, _Game_Narrative_Enums_ST_NarrativeMetaTags::ST_NarrativeMetaTags& MetaTags, _Script_Engine::Actor* OptionalSpeaker, bool DebugLogging, void*& Result, _Script_GameplayTags::GameplayTag& SystemicForCooldowns);
    void FindBestDialogueForEvent(_Script_GameplayTags::GameplayTag& EventContext, _Script_GameplayTags::GameplayTagContainer& AdditionalContent, bool AllowAutoConversations, _Game_Narrative_Enums_ST_NarrativeMetaTags::ST_NarrativeMetaTags& MetaTags, int32_t SpeakerCount, int32_t SpeakerHash, _Script_Engine::Actor* OptionalSpeaker, _Script_RsGameTechRT::NarrativeEventResult& Result, _Script_DialoguePlugin::Dialogue*& SelectedDialogue, int32_t& Match_Score, _Script_GameplayTags::GameplayTag& SystemicForCooldowns);
    void UpdateMostRecentSpeaker(_Script_Engine::Actor* Speaker, _Script_GameplayTags::GameplayTag& SpeakerTag);
    void EnqueueVO(_Game_Narrative_Enums_ST_VOQueueItem::ST_VOQueueItem& EnqueueParams, _Game_Narrative_Enums_ST_VOQueueItem::ST_VOQueueItem& QueuedItem);
    void DoesNarrativeClampAllow(_Game_Narrative_Enums_ST_NarrativeMetaTags::ST_NarrativeMetaTags& MetaTags, bool& Result);
    void GetEventContextForSpeaker(_Script_GameplayTags::GameplayTag EventContext, _Script_GameplayTags::GameplayTag Speaker, _Script_GameplayTags::GameplayTag& Result, bool& Success);
    void PlayDialogue_BP(_Script_DialoguePlugin::Dialogue* Dialogue, _Script_Engine::Actor* OptionalSpeaker, _Script_GameplayTags::GameplayTagContainer& AdditionalContent, bool QueueIfFails, _Game_Narrative_Enums_ST_NarrativeMetaTags::ST_NarrativeMetaTags& MetaTags, _Script_GameplayTags::GameplayTag& SystemicForCooldowns, _Script_GameplayTags::GameplayTag& EventContext, _Script_RsGameTechRT::NarrativeEventResult& Result);
    void SpeakerTagToDisplayName(_Script_GameplayTags::GameplayTag SpeakerTag, void*& LocalizedName);
    void FindBestSpeakerAndRegister(_Script_Engine::Actor* AIActor, void*& PossibleTags, _Script_GameplayTags::GameplayTag& SpeakerTag);
    void UnregisterSpeaker(_Script_Engine::Actor* AIActor, _Script_GameplayTags::GameplayTag SpeakerTag);
    void RegisterSpeaker(_Script_Engine::Actor* AIActor, _Script_GameplayTags::GameplayTag SpeakerTag);
    _Script_RsGameTechRT::NarrativeEventResult TriggerNarrativeEventForActorGroup0(_Script_GameplayTags::GameplayTag EventContext, _Script_GameplayTags::GameplayTagContainer AdditionalContent, void*& Actors);
    void HaveEventDialogueForActorGroup0(_Script_GameplayTags::GameplayTag EventContext, _Script_GameplayTags::GameplayTagContainer AdditionalContent, void*& Actors, bool& Result, void*& ChosenActors);
    _Script_RsGameTechRT::NarrativeEventResult TriggerNarrativeEvent0(_Script_GameplayTags::GameplayTag EventContext, _Script_GameplayTags::GameplayTagContainer AdditionalContent, _Script_Engine::Actor* OptionalSpeaker, bool QueueIfFails);
    void Initialize0();
    void PlayQueuedAfterDelay();
    void DelayedGesture(_Script_Engine::Actor* Actor, _Script_DialoguePlugin::DialogueGestureParams Gesture);
    void AIGameStateChanged(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager, void* PreviousGameState, void* NewGameState);
    void ConversationOver(_Script_RsGameTechRT::RsConversation* Conversation, void*& ConversationActors, int32_t ConversationId);
    void OnRootLevelLoaded0();
    void HideGestureDebug(_Script_Engine::AnimMontage* Montage, bool Done);
    void ToggleHubDebug0();
    void ExecuteUbergraph_NarrativeSystem(int32_t EntryPoint);
    void LVL_CinematicEnded__DelegateSignature();
    void LVL_CinematicStarted__DelegateSignature();
    void LVL_UnlockableTagSet__DelegateSignature(_Script_GameplayTags::GameplayTag UnlockableTag);
    void LVL_QueuedDialoguePlayedOrCancelled__DelegateSignature(int32_t QueueID);
    void LVL_QueuedDialogueCancelled__DelegateSignature(int32_t QueueID);
    void LVL_QueuedDialoguePlayed__DelegateSignature(int32_t QueueID, _Script_DialoguePlugin::Dialogue* Dialogue, _Script_RsGameTechRT::RsConversation* ConversationPlaying);
    void LVL_DialogueQueued__DelegateSignature(_Game_Narrative_Enums_ST_VOQueueItem::ST_VOQueueItem QueuedItemInfo, int32_t QueueID);
    void LVL_NarrativeChoiceMade__DelegateSignature(_Script_GameplayTags::GameplayTag ChoiceTag);
}; // Size: 0x618
#pragma pack(pop)
}
