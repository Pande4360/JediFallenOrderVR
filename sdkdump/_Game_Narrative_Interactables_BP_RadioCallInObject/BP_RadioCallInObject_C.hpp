#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_WorldInteracts_EventZones_Interact_Zone_Interact\Zone_Interact_C.hpp"
#include "..\_Script_RsGameTechRT\NarrativeEventResult.hpp"
namespace _Script_DialoguePlugin {
struct Dialogue;
}
namespace _Script_Engine {
struct ChildActorComponent;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Color;
}
namespace _Script_RsGameTechRT {
struct RsConversation;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Game_Narrative_Interactables_BP_RadioCallInObject {
#pragma pack(push, 1)
struct BP_RadioCallInObject_C : public _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C {
    private: char pad_418[0x100]; public:
    void* get_UberGraphFrame0();
    _Script_Engine::ChildActorComponent*& get_NarrativeLabelComponent();
    _Script_Engine::SceneComponent*& get_DistanceValidityZones();
    void* get_EventContext();
    void* get_NarrativeSpecificTag();
    _Script_DialoguePlugin::Dialogue*& get_OrSpecificDialogue();
    float& get_MaxPlayerDistance();
    _Script_Engine::Actor*& get_TheHero();
    float& get_MaxAngle();
    bool get_DistanceValidityZoneActive();
    void set_DistanceValidityZoneActive(bool value);
    float& get_RaytraceSphereRadius();
    bool get_RequireRaytrace();
    void set_RequireRaytrace(bool value);
    int32_t& get_UsesBeforeConsumed();
    bool get_DisableEachValidityZoneOnUse();
    void set_DisableEachValidityZoneOnUse(bool value);
    _Script_Engine::PrimitiveComponent*& get_CurrentValidityZone();
    void* get_DisabledZones();
    int32_t& get_TotalCallIns();
    void* get_NarrativeLabel();
    void* get_NarrativeLabelOffset();
    void* get_NarrativeLabelColor();
    bool get_RequiresInteractPress();
    void set_RequiresInteractPress(bool value);
    float& get_LookTimeBeforeValid();
    float& get_FrustrumVisCheckInterval();
    float& get_CurrentLookTime();
    bool get_NarrativeLabelHiddenInGame();
    void set_NarrativeLabelHiddenInGame(bool value);
    bool get_QueueDialogueIfFails();
    void set_QueueDialogueIfFails(bool value);
    bool get_SaveOnEachUse();
    void set_SaveOnEachUse(bool value);
    void* get_LVL_VO_Playing();
    int32_t& get_CurrentConversationLine();
    void* get_LVL_VO_PlayingLine();
    void* get_LVL_VO_Done();
    static _Script_CoreUObject::Class* static_class();
    void GetNarrativeLabelHiddenInGame(bool& Hidden);
    void GetNarrativeLabel(void*& Label);
    void GetNarrativeLabelOffset(_Script_CoreUObject::Vector& Offset);
    void GetNarrativeLabelColor(_Script_CoreUObject::Color& Result);
    void HandlePlayingConversation(_Script_RsGameTechRT::RsConversation* Conversation);
    void Timer_Intermittent_CheckRange();
    void Timer_Proximity_FrustrumAndVisibility();
    void RaytraceVisibilityCheck(bool& Result);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void LVL_SetEnabled0(bool NewEnabled, bool Temporary);
    void DistanceZoneOverlapBegun(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void DistanceZoneOverlapEnded(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void Interacted0();
    void HandleNarrativeResult(_Script_RsGameTechRT::NarrativeEventResult Result);
    void OnLineStarted(_Script_RsGameTechRT::RsConversation* Conversation, int32_t CurrrentConversationLine);
    void OnConversationFinished(_Script_RsGameTechRT::RsConversation* Conversation);
    void ExecuteUbergraph_BP_RadioCallInObject(int32_t EntryPoint);
    void LVL_VO_Done__DelegateSignature();
    void LVL_VO_PlayingLine__DelegateSignature(_Script_RsGameTechRT::RsConversation* Conversation, _Script_DialoguePlugin::Dialogue* Dialogue, int32_t LineNumber);
    void LVL_VO_Playing__DelegateSignature(_Script_RsGameTechRT::RsConversation* Conversation, _Script_DialoguePlugin::Dialogue* Dialogue);
}; // Size: 0x518
#pragma pack(pop)
}
