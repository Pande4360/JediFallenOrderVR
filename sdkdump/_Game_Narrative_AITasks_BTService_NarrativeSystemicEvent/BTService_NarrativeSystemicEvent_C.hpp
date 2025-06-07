#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\BTService_BlueprintBase.hpp"
#include "..\_Script_RsGameTechRT\NarrativeEventResult.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
struct AIController;
}
namespace _Script_Engine {
struct Pawn;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_RsGameTechRT {
struct RsConversation;
}
namespace _Game_Narrative_AITasks_BTService_NarrativeSystemicEvent {
#pragma pack(push, 1)
struct BTService_NarrativeSystemicEvent_C : public _Script_AIModule::BTService_BlueprintBase {
    private: char pad_98[0x28]; public:
    void* get_UberGraphFrame();
    void* get_SystemicEventContext();
    bool get_RetriggerOnTick();
    void set_RetriggerOnTick(bool value);
    float& get_MinimumTimeBeforeFiring();
    void* get_TargetCondition();
    bool get_ValidateWithPreviousTarget();
    void set_ValidateWithPreviousTarget(bool value);
    bool get_DoAffirmOnSuccess();
    void set_DoAffirmOnSuccess(bool value);
    float& get_ElapsedTime();
    bool get_Triggered();
    void set_Triggered(bool value);
    static _Script_CoreUObject::Class* static_class();
    void ValidateTargetThenTrigger(_Script_AIModule::AIController* Controller);
    void ValidateTarget(_Script_AIModule::AIController* Controller, bool& Proceed);
    void ReceiveActivation0(_Script_Engine::Actor* OwnerActor);
    void ReceiveTickAI0(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn, float DeltaSeconds);
    void ReceiveDeactivation0(_Script_Engine::Actor* OwnerActor);
    void DelayThenTryAffirm(_Script_RsGameTechRT::NarrativeEventResult Result, _Script_Engine::Actor* OriginalSpeaker);
    void TryAffirmNow(_Script_RsGameTechRT::RsConversation* Conversation);
    void ExecuteUbergraph_BTService_NarrativeSystemicEvent(int32_t EntryPoint);
}; // Size: 0xc0
#pragma pack(pop)
}
