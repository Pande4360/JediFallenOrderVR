#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "..\_Script_GameplayTags\GameplayTagContainer.hpp"
#include "NarrativeEvent.hpp"
#include "NarrativeEventResult.hpp"
namespace _Script_RsGameTechRT {
struct BAFTADatabase;
}
namespace _Script_RsGameTechRT {
struct BAFTATagListToDialogue;
}
namespace _Script_DialoguePlugin {
struct Dialogue;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsNarrativeSystem : public _Script_CoreUObject::Object {
    private: char pad_28[0x10]; public:
    _Script_RsGameTechRT::BAFTADatabase*& get_BAFTADatabase();
    static _Script_CoreUObject::Class* static_class();
    _Script_RsGameTechRT::NarrativeEventResult TriggerNarrativeEventForActorGroup(_Script_GameplayTags::GameplayTag EventContext, _Script_GameplayTags::GameplayTagContainer AdditionalContent, void*& Actors);
    _Script_RsGameTechRT::NarrativeEventResult TriggerNarrativeEvent(_Script_GameplayTags::GameplayTag EventContext, _Script_GameplayTags::GameplayTagContainer AdditionalContent, _Script_Engine::Actor* OptionalSpeaker, bool QueueIfFails);
    void ToggleHubDebug();
    _Script_RsGameTechRT::NarrativeEventResult PlayDialogueForActorGroup(_Script_RsGameTechRT::NarrativeEvent Details, void*& Actors);
    _Script_RsGameTechRT::NarrativeEventResult PlayDialogue(_Script_RsGameTechRT::NarrativeEvent Details);
    void OnRootLevelLoaded();
    bool IsANarrativeSpeaker(_Script_Engine::Actor* Actor);
    void Initialize();
    void HaveEventDialogueForActorGroup(_Script_GameplayTags::GameplayTag EventContext, _Script_GameplayTags::GameplayTagContainer AdditionalContent, void*& Actors, bool& Result, void*& ChosenActors);
    int32_t HashActorTags(void* Tags);
    void DialogueMatchesRequirements(_Script_RsGameTechRT::BAFTATagListToDialogue& TagListToDialogue, _Script_GameplayTags::GameplayTag& EventContext, _Script_GameplayTags::GameplayTagContainer& AdditionalContent, bool ForcePlay, bool RequireAllAdditional, bool AllowAutoConversations, bool& OutResult, int32_t& OutMatchedTotal, _Script_DialoguePlugin::Dialogue*& OutDialogue);
}; // Size: 0x38
#pragma pack(pop)
}
