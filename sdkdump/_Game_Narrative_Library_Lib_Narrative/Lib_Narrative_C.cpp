#include "..\FUObjectArray.hpp"
#include "..\_Game_Narrative_Enums_ST_DatabankUnlockable\ST_DatabankUnlockable.hpp"
#include "Lib_Narrative_C.hpp"
#include "..\_Game_Narrative_NarrativeSystem\NarrativeSystem_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_DialoguePlugin\Dialogue.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "..\_Script_GameplayTags\GameplayTagContainer.hpp"
#include "..\_Script_RsGameTechRT\NarrativeEvent.hpp"
#include "..\_Script_RsGameTechRT\NarrativeEventResult.hpp"
_Script_CoreUObject::Class* _Game_Narrative_Library_Lib_Narrative::Lib_Narrative_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Narrative/Library/Lib_Narrative.Lib_Narrative_C");
    return result;
}
void _Game_Narrative_Library_Lib_Narrative::Lib_Narrative_C::TryNarrativeTriggerOutOfGuysEvent(_Script_Engine::Actor* DeadEnemy, _Script_CoreUObject::Object* __WorldContext, _Script_RsGameTechRT::NarrativeEventResult& Result, _Script_Engine::Actor*& SelectedSpeaker) {
    return;
}
void _Game_Narrative_Library_Lib_Narrative::Lib_Narrative_C::FindBestSpeakerAndRegister(_Script_Engine::Actor* AIActor, void*& ValidTags, _Script_CoreUObject::Object* __WorldContext, _Script_GameplayTags::GameplayTag& SelectedTag) {
    return;
}
void _Game_Narrative_Library_Lib_Narrative::Lib_Narrative_C::ManualCinematicModeVOClamp(bool ClampActive, _Script_Engine::Actor* CausingActor, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_Narrative_Library_Lib_Narrative::Lib_Narrative_C::GetPlanetBookUnlockStatus(_Script_GameplayTags::GameplayTag PlanetDatabankTag, _Script_CoreUObject::Object* __WorldContext, void*& BooksInfo) {
    return;
}
void _Game_Narrative_Library_Lib_Narrative::Lib_Narrative_C::PlayDialogueForActorGroup(_Script_RsGameTechRT::NarrativeEvent EventDetails, void*& Actors, _Script_CoreUObject::Object* __WorldContext, _Script_RsGameTechRT::NarrativeEventResult& Result) {
    return;
}
void _Game_Narrative_Library_Lib_Narrative::Lib_Narrative_C::DoesSystemicSpeakerPassDistanceCheck(_Script_Engine::Actor* Speaker, _Script_CoreUObject::Object* __WorldContext, bool& Result) {
    return;
}
void _Game_Narrative_Library_Lib_Narrative::Lib_Narrative_C::GetBPNarrativeSystem(_Script_CoreUObject::Object* __WorldContext, _Game_Narrative_NarrativeSystem::NarrativeSystem_C*& BPNarrativeSystem) {
    return;
}
void _Game_Narrative_Library_Lib_Narrative::Lib_Narrative_C::DatabankLookup(_Script_GameplayTags::GameplayTag Key, _Script_CoreUObject::Object* __WorldContext, _Game_Narrative_Enums_ST_DatabankUnlockable::ST_DatabankUnlockable& FoundData, bool& Found) {
    return;
}
void _Game_Narrative_Library_Lib_Narrative::Lib_Narrative_C::TryNarrativeAffirm(_Script_RsGameTechRT::NarrativeEventResult PreviousResult, _Script_Engine::Actor* OriginalSpeaker, bool QueueIfFails, _Script_CoreUObject::Object* __WorldContext, _Script_RsGameTechRT::NarrativeEventResult& Result) {
    return;
}
void _Game_Narrative_Library_Lib_Narrative::Lib_Narrative_C::GetEventContextForSpeaker(_Script_GameplayTags::GameplayTag EventContext, _Script_GameplayTags::GameplayTag SpeakerTag, _Script_CoreUObject::Object* __WorldContext, _Script_GameplayTags::GameplayTag& Result, bool& Success) {
    return;
}
void _Game_Narrative_Library_Lib_Narrative::Lib_Narrative_C::RandomNarrativeEnemy(_Script_Engine::Actor* ButNotThisEnemy, _Script_GameplayTags::GameplayTag EnemyFaction, bool CanBeAlone, bool CanUseSameSpeakerTag, _Script_CoreUObject::Object* __WorldContext, _Script_Engine::Actor*& Enemy, bool& Found) {
    return;
}
void _Game_Narrative_Library_Lib_Narrative::Lib_Narrative_C::AddHealSpecificNarrativeTagsToTempContainer(_Script_GameplayTags::GameplayTagContainer& Container, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_Narrative_Library_Lib_Narrative::Lib_Narrative_C::NarrativeEventForActorGroup(_Script_GameplayTags::GameplayTag EventContext, _Script_GameplayTags::GameplayTagContainer AdditionalContent, void*& Actors, _Script_CoreUObject::Object* __WorldContext, _Script_RsGameTechRT::NarrativeEventResult& Result) {
    return;
}
void _Game_Narrative_Library_Lib_Narrative::Lib_Narrative_C::AddCombatSpecificNarrativeTagsToTempContainer(_Script_GameplayTags::GameplayTagContainer& Container, _Script_GameplayTags::GameplayTag BaseEventContext, _Script_Engine::Actor* Speaker, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_Narrative_Library_Lib_Narrative::Lib_Narrative_C::NarrativeEffortEvent(_Script_Engine::Actor* Speaker, bool ShouldInterruptVO, _Script_CoreUObject::Object* __WorldContext, bool& PlayEffort) {
    return;
}
void _Game_Narrative_Library_Lib_Narrative::Lib_Narrative_C::SystemicNarrativeEvent(_Script_GameplayTags::GameplayTag EventContext, _Script_Engine::Actor* Speaker, bool QueueIfFails, _Script_CoreUObject::Object* __WorldContext, _Script_RsGameTechRT::NarrativeEventResult& Result) {
    return;
}
void _Game_Narrative_Library_Lib_Narrative::Lib_Narrative_C::UnregisterSpeaker(_Script_Engine::Actor* AIActor, _Script_GameplayTags::GameplayTag SpeakerTag, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_Narrative_Library_Lib_Narrative::Lib_Narrative_C::SpeakerTagToDisplayName(_Script_GameplayTags::GameplayTag Speaker, _Script_CoreUObject::Object* __WorldContext, void*& LocalizedName) {
    return;
}
void _Game_Narrative_Library_Lib_Narrative::Lib_Narrative_C::RegisterSpeaker(_Script_Engine::Actor* AIActor, _Script_GameplayTags::GameplayTag SpeakerTag, _Script_CoreUObject::Object* __WorldContext) {
    return;
}
void _Game_Narrative_Library_Lib_Narrative::Lib_Narrative_C::PlayDialogue(_Script_DialoguePlugin::Dialogue* Dialogue, _Script_Engine::Actor* OptionalSpeaker, _Script_GameplayTags::GameplayTagContainer AdditionalContent, bool QueueIfFails, _Script_CoreUObject::Object* __WorldContext, _Script_RsGameTechRT::NarrativeEventResult& Result) {
    return;
}
