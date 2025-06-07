#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "..\_Script_GameplayTags\GameplayTagContainer.hpp"
#include "..\_Script_RsGameTechRT\NarrativeEvent.hpp"
#include "..\_Script_RsGameTechRT\NarrativeEventResult.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Narrative_NarrativeSystem {
struct NarrativeSystem_C;
}
namespace _Game_Narrative_Enums_ST_DatabankUnlockable {
struct ST_DatabankUnlockable;
}
namespace _Script_DialoguePlugin {
struct Dialogue;
}
namespace _Game_Narrative_Library_Lib_Narrative {
#pragma pack(push, 1)
struct Lib_Narrative_C : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void GetPlanetBookUnlockStatus(_Script_GameplayTags::GameplayTag PlanetDatabankTag, _Script_CoreUObject::Object* __WorldContext, void*& BooksInfo);
    void ManualCinematicModeVOClamp(bool ClampActive, _Script_Engine::Actor* CausingActor, _Script_CoreUObject::Object* __WorldContext);
    void DoesSystemicSpeakerPassDistanceCheck(_Script_Engine::Actor* Speaker, _Script_CoreUObject::Object* __WorldContext, bool& Result);
    void GetBPNarrativeSystem(_Script_CoreUObject::Object* __WorldContext, _Game_Narrative_NarrativeSystem::NarrativeSystem_C*& BPNarrativeSystem);
    void DatabankLookup(_Script_GameplayTags::GameplayTag Key, _Script_CoreUObject::Object* __WorldContext, _Game_Narrative_Enums_ST_DatabankUnlockable::ST_DatabankUnlockable& FoundData, bool& Found);
    void TryNarrativeAffirm(_Script_RsGameTechRT::NarrativeEventResult PreviousResult, _Script_Engine::Actor* OriginalSpeaker, bool QueueIfFails, _Script_CoreUObject::Object* __WorldContext, _Script_RsGameTechRT::NarrativeEventResult& Result);
    void TryNarrativeTriggerOutOfGuysEvent(_Script_Engine::Actor* DeadEnemy, _Script_CoreUObject::Object* __WorldContext, _Script_RsGameTechRT::NarrativeEventResult& Result, _Script_Engine::Actor*& SelectedSpeaker);
    void RandomNarrativeEnemy(_Script_Engine::Actor* ButNotThisEnemy, _Script_GameplayTags::GameplayTag EnemyFaction, bool CanBeAlone, bool CanUseSameSpeakerTag, _Script_CoreUObject::Object* __WorldContext, _Script_Engine::Actor*& Enemy, bool& Found);
    void AddHealSpecificNarrativeTagsToTempContainer(_Script_GameplayTags::GameplayTagContainer& Container, _Script_CoreUObject::Object* __WorldContext);
    void NarrativeEventForActorGroup(_Script_GameplayTags::GameplayTag EventContext, _Script_GameplayTags::GameplayTagContainer AdditionalContent, void*& Actors, _Script_CoreUObject::Object* __WorldContext, _Script_RsGameTechRT::NarrativeEventResult& Result);
    void PlayDialogueForActorGroup(_Script_RsGameTechRT::NarrativeEvent EventDetails, void*& Actors, _Script_CoreUObject::Object* __WorldContext, _Script_RsGameTechRT::NarrativeEventResult& Result);
    void AddCombatSpecificNarrativeTagsToTempContainer(_Script_GameplayTags::GameplayTagContainer& Container, _Script_GameplayTags::GameplayTag BaseEventContext, _Script_Engine::Actor* Speaker, _Script_CoreUObject::Object* __WorldContext);
    void NarrativeEffortEvent(_Script_Engine::Actor* Speaker, bool ShouldInterruptVO, _Script_CoreUObject::Object* __WorldContext, bool& PlayEffort);
    void SystemicNarrativeEvent(_Script_GameplayTags::GameplayTag EventContext, _Script_Engine::Actor* Speaker, bool QueueIfFails, _Script_CoreUObject::Object* __WorldContext, _Script_RsGameTechRT::NarrativeEventResult& Result);
    void GetEventContextForSpeaker(_Script_GameplayTags::GameplayTag EventContext, _Script_GameplayTags::GameplayTag SpeakerTag, _Script_CoreUObject::Object* __WorldContext, _Script_GameplayTags::GameplayTag& Result, bool& Success);
    void UnregisterSpeaker(_Script_Engine::Actor* AIActor, _Script_GameplayTags::GameplayTag SpeakerTag, _Script_CoreUObject::Object* __WorldContext);
    void FindBestSpeakerAndRegister(_Script_Engine::Actor* AIActor, void*& ValidTags, _Script_CoreUObject::Object* __WorldContext, _Script_GameplayTags::GameplayTag& SelectedTag);
    void SpeakerTagToDisplayName(_Script_GameplayTags::GameplayTag Speaker, _Script_CoreUObject::Object* __WorldContext, void*& LocalizedName);
    void RegisterSpeaker(_Script_Engine::Actor* AIActor, _Script_GameplayTags::GameplayTag SpeakerTag, _Script_CoreUObject::Object* __WorldContext);
    void PlayDialogue(_Script_DialoguePlugin::Dialogue* Dialogue, _Script_Engine::Actor* OptionalSpeaker, _Script_GameplayTags::GameplayTagContainer AdditionalContent, bool QueueIfFails, _Script_CoreUObject::Object* __WorldContext, _Script_RsGameTechRT::NarrativeEventResult& Result);
}; // Size: 0x28
#pragma pack(pop)
}
