#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_DialoguePlugin\Dialogue.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "..\_Script_GameplayTags\GameplayTagContainer.hpp"
#include "BAFTADatabase.hpp"
#include "BAFTATagListToDialogue.hpp"
#include "NarrativeEvent.hpp"
#include "NarrativeEventResult.hpp"
#include "RsNarrativeSystem.hpp"
_Script_RsGameTechRT::BAFTADatabase*& _Script_RsGameTechRT::RsNarrativeSystem::get_BAFTADatabase() {
    return *(_Script_RsGameTechRT::BAFTADatabase**)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsNarrativeSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsNarrativeSystem");
    return result;
}
_Script_RsGameTechRT::NarrativeEventResult _Script_RsGameTechRT::RsNarrativeSystem::TriggerNarrativeEventForActorGroup(_Script_GameplayTags::GameplayTag EventContext, _Script_GameplayTags::GameplayTagContainer AdditionalContent, void*& Actors) {
    return;
}
_Script_RsGameTechRT::NarrativeEventResult _Script_RsGameTechRT::RsNarrativeSystem::TriggerNarrativeEvent(_Script_GameplayTags::GameplayTag EventContext, _Script_GameplayTags::GameplayTagContainer AdditionalContent, _Script_Engine::Actor* OptionalSpeaker, bool QueueIfFails) {
    return;
}
void _Script_RsGameTechRT::RsNarrativeSystem::ToggleHubDebug() {
    return;
}
_Script_RsGameTechRT::NarrativeEventResult _Script_RsGameTechRT::RsNarrativeSystem::PlayDialogue(_Script_RsGameTechRT::NarrativeEvent Details) {
    return;
}
_Script_RsGameTechRT::NarrativeEventResult _Script_RsGameTechRT::RsNarrativeSystem::PlayDialogueForActorGroup(_Script_RsGameTechRT::NarrativeEvent Details, void*& Actors) {
    return;
}
void _Script_RsGameTechRT::RsNarrativeSystem::OnRootLevelLoaded() {
    return;
}
bool _Script_RsGameTechRT::RsNarrativeSystem::IsANarrativeSpeaker(_Script_Engine::Actor* Actor) {
    return;
}
void _Script_RsGameTechRT::RsNarrativeSystem::Initialize() {
    return;
}
void _Script_RsGameTechRT::RsNarrativeSystem::HaveEventDialogueForActorGroup(_Script_GameplayTags::GameplayTag EventContext, _Script_GameplayTags::GameplayTagContainer AdditionalContent, void*& Actors, bool& Result, void*& ChosenActors) {
    return;
}
int32_t _Script_RsGameTechRT::RsNarrativeSystem::HashActorTags(void* Tags) {
    return;
}
void _Script_RsGameTechRT::RsNarrativeSystem::DialogueMatchesRequirements(_Script_RsGameTechRT::BAFTATagListToDialogue& TagListToDialogue, _Script_GameplayTags::GameplayTag& EventContext, _Script_GameplayTags::GameplayTagContainer& AdditionalContent, bool ForcePlay, bool RequireAllAdditional, bool AllowAutoConversations, bool& OutResult, int32_t& OutMatchedTotal, _Script_DialoguePlugin::Dialogue*& OutDialogue) {
    return;
}
