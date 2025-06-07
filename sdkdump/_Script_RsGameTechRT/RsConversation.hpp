#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
struct AkComponent;
}
namespace _Script_Engine {
struct DamageType;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Script_DialoguePlugin {
struct Dialogue;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsConversation : public _Script_Engine::Actor {
    private: char pad_360[0x108]; public:
    void* get_OnConversationFinishedHackNoCrashEvent();
    void* get_OnConversationLineFinishedHackNoCrashEvent();
    void* get_OnConversationFinishedEvent();
    void* get_OnConversationLineFinishedEvent();
    void* get_OnConversationLineStartedEvent();
    bool get_bEndableEarly();
    void set_bEndableEarly(bool value);
    void* get_ConversationLines();
    void* get_LethalDamageType();
    static _Script_CoreUObject::Class* static_class();
    void StopConversation();
    void StartConversation();
    void SetCurrentDialogueDuration(float Duration);
    void OnConversationActorTakeAnyDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser);
    void OnConversationActorDiving(void* previousSwimState, void* newSwimState);
    void OnConversationActorDied(_Script_Engine::Actor* DeathActor);
    void OnConversationActorDestroyed(_Script_Engine::Actor* DestroyedActor);
    void MakeInteractionChoice(int32_t Choice);
    bool IsWaitingForInteraction();
    bool IsInteractiveConversation();
    _Script_GameplayTags::GameplayTag GetSpeakingCharacterType();
    void* GetSpeakingCharacterText();
    _Script_DialoguePlugin::Dialogue* GetDialogue();
    _Script_AkAudio::AkComponent* GetCurrentSpeakingAkComponent();
    _Script_Engine::Actor* GetCurrentSpeakingActor();
    void* GetCurrentChoices();
    int32_t GetConversationId();
}; // Size: 0x468
#pragma pack(pop)
}
