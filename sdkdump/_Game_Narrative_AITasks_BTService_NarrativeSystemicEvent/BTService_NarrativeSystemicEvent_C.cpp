#include "..\FUObjectArray.hpp"
#include "BTService_NarrativeSystemicEvent_C.hpp"
#include "..\_Script_AIModule\AIController.hpp"
#include "..\_Script_AIModule\BTService_BlueprintBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Pawn.hpp"
#include "..\_Script_RsGameTechRT\NarrativeEventResult.hpp"
#include "..\_Script_RsGameTechRT\RsConversation.hpp"
void* _Game_Narrative_AITasks_BTService_NarrativeSystemicEvent::BTService_NarrativeSystemicEvent_C::get_SystemicEventContext() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Game_Narrative_AITasks_BTService_NarrativeSystemicEvent::BTService_NarrativeSystemicEvent_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x98);
}
void _Game_Narrative_AITasks_BTService_NarrativeSystemicEvent::BTService_NarrativeSystemicEvent_C::set_RetriggerOnTick(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Narrative_AITasks_BTService_NarrativeSystemicEvent::BTService_NarrativeSystemicEvent_C::get_RetriggerOnTick() {
    return (*(uint8_t*)((uintptr_t)this + 0xa8 + 0)) & 1 != 0;
}
float& _Game_Narrative_AITasks_BTService_NarrativeSystemicEvent::BTService_NarrativeSystemicEvent_C::get_MinimumTimeBeforeFiring() {
    return *(float*)((uintptr_t)this + 0xac);
}
void* _Game_Narrative_AITasks_BTService_NarrativeSystemicEvent::BTService_NarrativeSystemicEvent_C::get_TargetCondition() {
    return (void*)((uintptr_t)this + 0xb0);
}
bool _Game_Narrative_AITasks_BTService_NarrativeSystemicEvent::BTService_NarrativeSystemicEvent_C::get_ValidateWithPreviousTarget() {
    return (*(uint8_t*)((uintptr_t)this + 0xb1 + 0)) & 1 != 0;
}
void _Game_Narrative_AITasks_BTService_NarrativeSystemicEvent::BTService_NarrativeSystemicEvent_C::set_ValidateWithPreviousTarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Narrative_AITasks_BTService_NarrativeSystemicEvent::BTService_NarrativeSystemicEvent_C::get_DoAffirmOnSuccess() {
    return (*(uint8_t*)((uintptr_t)this + 0xb2 + 0)) & 1 != 0;
}
void _Game_Narrative_AITasks_BTService_NarrativeSystemicEvent::BTService_NarrativeSystemicEvent_C::set_DoAffirmOnSuccess(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb2 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Narrative_AITasks_BTService_NarrativeSystemicEvent::BTService_NarrativeSystemicEvent_C::get_ElapsedTime() {
    return *(float*)((uintptr_t)this + 0xb4);
}
bool _Game_Narrative_AITasks_BTService_NarrativeSystemicEvent::BTService_NarrativeSystemicEvent_C::get_Triggered() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8 + 0)) & 1 != 0;
}
void _Game_Narrative_AITasks_BTService_NarrativeSystemicEvent::BTService_NarrativeSystemicEvent_C::set_Triggered(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Narrative_AITasks_BTService_NarrativeSystemicEvent::BTService_NarrativeSystemicEvent_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Narrative/AITasks/BTService_NarrativeSystemicEvent.BTService_NarrativeSystemicEvent_C");
    return result;
}
void _Game_Narrative_AITasks_BTService_NarrativeSystemicEvent::BTService_NarrativeSystemicEvent_C::ValidateTargetThenTrigger(_Script_AIModule::AIController* Controller) {
    return;
}
void _Game_Narrative_AITasks_BTService_NarrativeSystemicEvent::BTService_NarrativeSystemicEvent_C::ValidateTarget(_Script_AIModule::AIController* Controller, bool& Proceed) {
    return;
}
void _Game_Narrative_AITasks_BTService_NarrativeSystemicEvent::BTService_NarrativeSystemicEvent_C::ReceiveActivation0(_Script_Engine::Actor* OwnerActor) {
    return;
}
void _Game_Narrative_AITasks_BTService_NarrativeSystemicEvent::BTService_NarrativeSystemicEvent_C::ReceiveTickAI0(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn, float DeltaSeconds) {
    return;
}
void _Game_Narrative_AITasks_BTService_NarrativeSystemicEvent::BTService_NarrativeSystemicEvent_C::ReceiveDeactivation0(_Script_Engine::Actor* OwnerActor) {
    return;
}
void _Game_Narrative_AITasks_BTService_NarrativeSystemicEvent::BTService_NarrativeSystemicEvent_C::DelayThenTryAffirm(_Script_RsGameTechRT::NarrativeEventResult Result, _Script_Engine::Actor* OriginalSpeaker) {
    return;
}
void _Game_Narrative_AITasks_BTService_NarrativeSystemicEvent::BTService_NarrativeSystemicEvent_C::TryAffirmNow(_Script_RsGameTechRT::RsConversation* Conversation) {
    return;
}
void _Game_Narrative_AITasks_BTService_NarrativeSystemicEvent::BTService_NarrativeSystemicEvent_C::ExecuteUbergraph_BTService_NarrativeSystemicEvent(int32_t EntryPoint) {
    return;
}
