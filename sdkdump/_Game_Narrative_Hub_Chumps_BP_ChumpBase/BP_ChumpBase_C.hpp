#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\SwAICharacter.hpp"
namespace _Script_Engine {
struct Actor;
}
namespace _Script_RsGameTechRT {
struct RsDistanceTriggerComponent;
}
namespace _Script_RsGameTechRT {
struct RsConversation;
}
namespace _Script_Engine {
struct ChildActorComponent;
}
namespace _Script_RsGameTechRT {
struct RsTargetableComponent;
}
namespace _Script_SwGame {
struct RsAbilityEffectVictimComponent;
}
namespace _Game_WorldInteracts_EventZones_Interact_Zone_Interact {
struct Zone_Interact_C;
}
namespace _Game_Narrative_Hub_BP_Hub {
struct BP_Hub_C;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_RsGameTechRT {
struct RsHeroStateModifierDefinition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GameplayTags {
struct GameplayTag;
}
namespace _Game_Narrative_Hub_Chumps_BP_ChumpBase {
#pragma pack(push, 1)
struct BP_ChumpBase_C : public _Script_SwGame::SwAICharacter {
    private: char pad_29d0[0x1f8]; public:
    void* get_UberGraphFrame();
    _Script_RsGameTechRT::RsDistanceTriggerComponent*& get_HeroNearTrigger();
    _Script_RsGameTechRT::RsDistanceTriggerComponent*& get_CharacterReactTrigger();
    _Script_RsGameTechRT::RsDistanceTriggerComponent*& get_AbandonVOTrigger();
    _Script_RsGameTechRT::RsDistanceTriggerComponent*& get_EngagementVOTrigger();
    _Script_RsGameTechRT::RsDistanceTriggerComponent*& get_ProxyVOTrigger();
    _Script_Engine::ChildActorComponent*& get_HubVOInteract();
    _Script_RsGameTechRT::RsTargetableComponent*& get_RsTargetable();
    _Script_SwGame::RsAbilityEffectVictimComponent*& get_RsAbilityEffectVictim();
    void* get_MoveToLocation();
    bool get_InConversation();
    void set_InConversation(bool value);
    void* get_SpeakerTag();
    bool get_DebugMode();
    void set_DebugMode(bool value);
    bool get_RotatingToPlayer();
    void set_RotatingToPlayer(bool value);
    bool get_CanLookAt();
    void set_CanLookAt(bool value);
    void* get_LVL_ChumpDoneTalking();
    void* get_LVL_ChumpProxyDone();
    void* get_CurrentHubConversationType();
    _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C*& get_VOInteract();
    _Game_Narrative_Hub_BP_Hub::BP_Hub_C*& get_Hub();
    float& get_ChumpRotationSpeed();
    float& get_AcceptableWideTurnDifference();
    bool get_UseTightThreshold();
    void set_UseTightThreshold(bool value);
    float& get_AcceptableTightTurnDifference();
    void* get_LookatReactActors();
    bool get_InteractTempDisabled();
    void set_InteractTempDisabled(bool value);
    _Script_RsGameTechRT::RsConversation*& get_MyConversation();
    void* get_BoredOfReactActors();
    _Script_Engine::Actor*& get_CurrentLookatTarget();
    float& get_LookatBeginTime();
    float& get_LookatTimeBeforeBoredom();
    float& get_BoredomDuration();
    void* get_PesterActorsToCounts();
    int32_t& get_PesterCountToResetBoredom();
    bool get_ReallyTracking();
    void set_ReallyTracking(bool value);
    bool get_ShouldConversationSetAIBusy();
    void set_ShouldConversationSetAIBusy(bool value);
    int32_t& get_IdleLoopAnim();
    int32_t& get_ConversationIdleAnim();
    bool get_TurnToFaceDisabled();
    void set_TurnToFaceDisabled(bool value);
    _Script_Engine::StaticMeshComponent*& get_DebugProxySphere();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_HeroNearHSM();
    bool get_CharacterReactTriggerDisabled();
    void set_CharacterReactTriggerDisabled(bool value);
    int32_t& get_CoreChumpID();
    static _Script_CoreUObject::Class* static_class();
    void AmIMerrin(bool& IsMerrin);
    void GetBossDefeatedText(void*& DefeatedText);
    void GetCustomSubtitleName(void*& CustomSubtitleName);
    void GetSpeakerTag(_Script_GameplayTags::GameplayTag& SpeakerTag);
    void GetCoreChumpTypeID(int32_t& ID);
    void InitVOInteract();
    void ApplyIdleLoop(int32_t LoopAnim);
    void HubInteractionsDisabled();
    void UpdateReactBoredActors();
    void UpdateCharacterReactionOverlaps();
    void VOInteracted();
    void SetHubConversationType(void* Type);
    void UserConstructionScript();
    void ChumpAttachProp(void* Prop, bool Attached, float BlendTime, bool Hidden);
    void ChumpShowHideProp(void* Prop, bool HiddenInGame);
    void ReceiveBeginPlay();
    void CalledOutToCal();
    void TalkingToCal();
    void ResumeMoving();
    void DoneTalking();
    void StartRotatingToPlayer();
    void StopRotatingToPlayer();
    void ReceiveEndPlay(void* EndPlayReason);
    void ConversationBegin(_Script_RsGameTechRT::RsConversation* Conversation, void*& ConversationActors, int32_t Conversation_ID);
    void ConversationEnded(_Script_RsGameTechRT::RsConversation* Conversation, void*& ConversationActors, int32_t ConversationId);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__ProxyVOTrigger_K2Node_ComponentBoundEvent_5_RsTriggerSignature__DelegateSignature(_Script_Engine::Actor* Actor);
    void BndEvt__ProxyVOTrigger_K2Node_ComponentBoundEvent_6_RsTriggerSignature__DelegateSignature(_Script_Engine::Actor* Actor);
    void BndEvt__EngagementVOTrigger_K2Node_ComponentBoundEvent_7_RsTriggerSignature__DelegateSignature(_Script_Engine::Actor* Actor);
    void BndEvt__CharacterReactTrigger_K2Node_ComponentBoundEvent_0_RsTriggerSignature__DelegateSignature(_Script_Engine::Actor* Actor);
    void BndEvt__CharacterReactTrigger_K2Node_ComponentBoundEvent_1_RsTriggerSignature__DelegateSignature(_Script_Engine::Actor* Actor);
    void EventReceiveInitializeAI();
    void BndEvt__AbandonVOTrigger_K2Node_ComponentBoundEvent_2_RsTriggerSignature__DelegateSignature(_Script_Engine::Actor* Actor);
    void ChumpLookAtTarget(_Script_Engine::Actor* Actor);
    void ChumpResetLookat();
    void ChumpDisableTurnToFace();
    void TrySpawnDebugProxySphere();
    void TryDestroyDebugSphere();
    void BndEvt__HeroNearTrigger_K2Node_ComponentBoundEvent_3_RsTriggerSignature__DelegateSignature(_Script_Engine::Actor* Actor);
    void BndEvt__HeroNearTrigger_K2Node_ComponentBoundEvent_4_RsTriggerSignature__DelegateSignature(_Script_Engine::Actor* Actor);
    void UpdateEyeTrackingTarget(_Script_Engine::Actor* Target);
    void ExecuteUbergraph_BP_ChumpBase(int32_t EntryPoint);
    void LVL_ChumpProxyDone__DelegateSignature();
    void LVL_ChumpDoneTalking__DelegateSignature();
}; // Size: 0x2bc8
#pragma pack(pop)
}
