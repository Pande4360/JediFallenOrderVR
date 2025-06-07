#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_RsGameTechRT\NarrativeEventResult.hpp"
namespace _Script_Engine {
struct TextRenderComponent;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_RsGameTechRT {
struct RsConversation;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct TriggerBox;
}
namespace _Script_DialoguePlugin {
struct Dialogue;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_RsGameTechRT {
struct RsAICharacter;
}
namespace _Game_Narrative_Interactables_BP_VOTrigger {
#pragma pack(push, 1)
struct BP_VOTrigger_C : public _Script_Engine::Actor {
    private: char pad_360[0x1b0]; public:
    void* get_UberGraphFrame();
    _Script_Engine::TextRenderComponent*& get_VO_Trigger5();
    _Script_Engine::TextRenderComponent*& get_VO_Trigger4();
    _Script_Engine::TextRenderComponent*& get_VO_Trigger3();
    _Script_Engine::TextRenderComponent*& get_VO_Trigger2();
    _Script_Engine::StaticMeshComponent*& get_TriggerVolume();
    _Script_Engine::SceneComponent*& get_Scene();
    _Script_Engine::TextRenderComponent*& get_VO_Trigger();
    bool get_Enabled();
    void set_Enabled(bool value);
    void* get_TriggerType();
    _Script_Engine::TriggerBox*& get_SecondaryTrigger();
    void* get_EventContext();
    void* get_AdditionalContent();
    _Script_DialoguePlugin::Dialogue*& get_OrSpecificDialogue();
    void* get_RandomDialogueBucket();
    bool get_AbortOnAIAlerted();
    void set_AbortOnAIAlerted(bool value);
    bool get_AbortOnCombatStarted();
    void set_AbortOnCombatStarted(bool value);
    bool get_ForceSpeakerTagsFromSpecificDialogue();
    void set_ForceSpeakerTagsFromSpecificDialogue(bool value);
    void* get_PlayOnActorsFromSpawners();
    void* get_ForceSpeakerActors();
    float& get_MinTriggerDelay();
    float& get_MaxRandomTriggerDelay();
    bool get_QueueIfFails();
    void set_QueueIfFails(bool value);
    void* get_SpawnedActors();
    void* get_SpeakerTagsToForce();
    bool get_ForceAlwaysPlay();
    void set_ForceAlwaysPlay(bool value);
    bool get_ReenableIfFailsToPlay();
    void set_ReenableIfFailsToPlay(bool value);
    bool get_TriggersDuringCombat();
    void set_TriggersDuringCombat(bool value);
    void* get_TriggerRepeatability();
    int32_t& get_UsesBeforeConsumed();
    bool get_SaveImmediate();
    void set_SaveImmediate(bool value);
    void* get_LVL_VO_Playing();
    int32_t& get_CurrentConversationLine();
    void* get_LVL_VO_PlayingLine();
    void* get_LVL_VO_Done();
    void* get_LVL_VOQueued();
    int32_t& get_QueueID();
    int32_t& get_CurrentUseCount();
    bool get_CurrentlyQueued();
    void set_CurrentlyQueued(bool value);
    _Script_DialoguePlugin::Dialogue*& get_SelectedDialogue();
    void* get_LVL_VO_FailedToPlay();
    bool get_InTriggerAttempt();
    void set_InTriggerAttempt(bool value);
    static _Script_CoreUObject::Class* static_class();
    void UpdateForcedSpeakerActorRegistrations(bool Registered);
    void HandlePlayingConversation(_Script_RsGameTechRT::RsConversation* Conversation);
    void UpdateDebugText(void* newText);
    void UserConstructionScript0();
    void ReceiveBeginPlay0();
    void BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void AISpawned(_Script_RsGameTechRT::RsAICharacter* SpawnedAI, void* SpawnResult);
    void HandleNarrativeResult(_Script_RsGameTechRT::NarrativeEventResult Result);
    void LVL_TriggerVO();
    void SecondaryTriggered(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void Reset_DoOnce_OnFailure();
    void OnLineStarted(_Script_RsGameTechRT::RsConversation* Conversation, int32_t CurrrentConversationLine);
    void OnConversationFinished(_Script_RsGameTechRT::RsConversation* Conversation);
    void LVL_Enable();
    void LVL_Disable();
    void LVL_SetEnabled(bool NewEnabled);
    void QueuedVOPlayed(int32_t QueueID, _Script_DialoguePlugin::Dialogue* Dialogue, _Script_RsGameTechRT::RsConversation* ConversationPlaying);
    void QueuedVOCancelled(int32_t QueueID);
    void ExecuteUbergraph_BP_VOTrigger(int32_t EntryPoint);
    void LVL_VO_FailedToPlay__DelegateSignature();
    void LVL_VOQueued__DelegateSignature(int32_t QueueID);
    void LVL_VO_Done__DelegateSignature();
    void LVL_VO_PlayingLine__DelegateSignature(_Script_RsGameTechRT::RsConversation* Conversation, _Script_DialoguePlugin::Dialogue* Dialogue, int32_t LineNumber);
    void LVL_VO_Playing__DelegateSignature(_Script_RsGameTechRT::RsConversation* Conversation, _Script_DialoguePlugin::Dialogue* Dialogue);
}; // Size: 0x510
#pragma pack(pop)
}
