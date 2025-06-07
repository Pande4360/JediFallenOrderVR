#include "..\FUObjectArray.hpp"
#include "BP_VOTrigger_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_DialoguePlugin\Dialogue.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TextRenderComponent.hpp"
#include "..\_Script_Engine\TriggerBox.hpp"
#include "..\_Script_RsGameTechRT\NarrativeEventResult.hpp"
#include "..\_Script_RsGameTechRT\RsAICharacter.hpp"
#include "..\_Script_RsGameTechRT\RsConversation.hpp"
_Script_Engine::TextRenderComponent*& _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_VO_Trigger4() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x370);
}
void _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::ReceiveBeginPlay0() {
    return;
}
void* _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
_Script_DialoguePlugin::Dialogue*& _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_SelectedDialogue() {
    return *(_Script_DialoguePlugin::Dialogue**)((uintptr_t)this + 0x4f0);
}
_Script_Engine::SceneComponent*& _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_Scene() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x390);
}
_Script_Engine::TextRenderComponent*& _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_VO_Trigger3() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x378);
}
int32_t& _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_UsesBeforeConsumed() {
    return *(int32_t*)((uintptr_t)this + 0x48c);
}
_Script_Engine::TextRenderComponent*& _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_VO_Trigger5() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x368);
}
bool _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_TriggersDuringCombat() {
    return (*(uint8_t*)((uintptr_t)this + 0x48a + 0)) & 1 != 0;
}
_Script_Engine::TextRenderComponent*& _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_VO_Trigger2() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x380);
}
_Script_Engine::StaticMeshComponent*& _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_TriggerVolume() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x388);
}
void _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::set_AbortOnCombatStarted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3f1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3f1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::TextRenderComponent*& _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_VO_Trigger() {
    return *(_Script_Engine::TextRenderComponent**)((uintptr_t)this + 0x398);
}
bool _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_Enabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a0 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::LVL_TriggerVO() {
    return;
}
void _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::set_Enabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
int32_t& _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_CurrentUseCount() {
    return *(int32_t*)((uintptr_t)this + 0x4e4);
}
void* _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_TriggerType() {
    return (void*)((uintptr_t)this + 0x3a1);
}
void _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::QueuedVOPlayed(int32_t QueueID, _Script_DialoguePlugin::Dialogue* Dialogue, _Script_RsGameTechRT::RsConversation* ConversationPlaying) {
    return;
}
_Script_Engine::TriggerBox*& _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_SecondaryTrigger() {
    return *(_Script_Engine::TriggerBox**)((uintptr_t)this + 0x3a8);
}
void* _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_EventContext() {
    return (void*)((uintptr_t)this + 0x3b0);
}
void _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::set_InTriggerAttempt(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x508 + 0);
    *(uint8_t*)((uintptr_t)this + 0x508 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::HandlePlayingConversation(_Script_RsGameTechRT::RsConversation* Conversation) {
    return;
}
void* _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_AdditionalContent() {
    return (void*)((uintptr_t)this + 0x3b8);
}
_Script_DialoguePlugin::Dialogue*& _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_OrSpecificDialogue() {
    return *(_Script_DialoguePlugin::Dialogue**)((uintptr_t)this + 0x3d8);
}
bool _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_CurrentlyQueued() {
    return (*(uint8_t*)((uintptr_t)this + 0x4e8 + 0)) & 1 != 0;
}
void* _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_RandomDialogueBucket() {
    return (void*)((uintptr_t)this + 0x3e0);
}
bool _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_AbortOnAIAlerted() {
    return (*(uint8_t*)((uintptr_t)this + 0x3f0 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::set_AbortOnAIAlerted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3f0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3f0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_PlayOnActorsFromSpawners() {
    return (void*)((uintptr_t)this + 0x3f8);
}
bool _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_AbortOnCombatStarted() {
    return (*(uint8_t*)((uintptr_t)this + 0x3f1 + 0)) & 1 != 0;
}
bool _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_ForceSpeakerTagsFromSpecificDialogue() {
    return (*(uint8_t*)((uintptr_t)this + 0x3f2 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::set_CurrentlyQueued(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4e8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::set_ForceSpeakerTagsFromSpecificDialogue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3f2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3f2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_ForceSpeakerActors() {
    return (void*)((uintptr_t)this + 0x408);
}
void _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::LVL_Enable() {
    return;
}
float& _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_MinTriggerDelay() {
    return *(float*)((uintptr_t)this + 0x418);
}
float& _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_MaxRandomTriggerDelay() {
    return *(float*)((uintptr_t)this + 0x41c);
}
bool _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_QueueIfFails() {
    return (*(uint8_t*)((uintptr_t)this + 0x420 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::set_QueueIfFails(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x420 + 0);
    *(uint8_t*)((uintptr_t)this + 0x420 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_SpawnedActors() {
    return (void*)((uintptr_t)this + 0x428);
}
void* _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_SpeakerTagsToForce() {
    return (void*)((uintptr_t)this + 0x478);
}
bool _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_ForceAlwaysPlay() {
    return (*(uint8_t*)((uintptr_t)this + 0x488 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::set_ForceAlwaysPlay(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x488 + 0);
    *(uint8_t*)((uintptr_t)this + 0x488 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_ReenableIfFailsToPlay() {
    return (*(uint8_t*)((uintptr_t)this + 0x489 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::SecondaryTriggered(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void* _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_TriggerRepeatability() {
    return (void*)((uintptr_t)this + 0x48b);
}
void _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::set_ReenableIfFailsToPlay(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x489 + 0);
    *(uint8_t*)((uintptr_t)this + 0x489 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Narrative/Interactables/BP_VOTrigger.BP_VOTrigger_C");
    return result;
}
void _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::set_TriggersDuringCombat(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48a + 0);
    *(uint8_t*)((uintptr_t)this + 0x48a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_SaveImmediate() {
    return (*(uint8_t*)((uintptr_t)this + 0x490 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::set_SaveImmediate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x490 + 0);
    *(uint8_t*)((uintptr_t)this + 0x490 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_LVL_VO_Playing() {
    return (void*)((uintptr_t)this + 0x498);
}
int32_t& _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_CurrentConversationLine() {
    return *(int32_t*)((uintptr_t)this + 0x4a8);
}
void* _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_LVL_VO_PlayingLine() {
    return (void*)((uintptr_t)this + 0x4b0);
}
void* _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_LVL_VO_Done() {
    return (void*)((uintptr_t)this + 0x4c0);
}
void* _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_LVL_VOQueued() {
    return (void*)((uintptr_t)this + 0x4d0);
}
int32_t& _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_QueueID() {
    return *(int32_t*)((uintptr_t)this + 0x4e0);
}
void* _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_LVL_VO_FailedToPlay() {
    return (void*)((uintptr_t)this + 0x4f8);
}
bool _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::get_InTriggerAttempt() {
    return (*(uint8_t*)((uintptr_t)this + 0x508 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::UpdateForcedSpeakerActorRegistrations(bool Registered) {
    return;
}
void _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::UpdateDebugText(void* newText) {
    return;
}
void _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::UserConstructionScript0() {
    return;
}
void _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::AISpawned(_Script_RsGameTechRT::RsAICharacter* SpawnedAI, void* SpawnResult) {
    return;
}
void _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::HandleNarrativeResult(_Script_RsGameTechRT::NarrativeEventResult Result) {
    return;
}
void _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::Reset_DoOnce_OnFailure() {
    return;
}
void _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::OnLineStarted(_Script_RsGameTechRT::RsConversation* Conversation, int32_t CurrrentConversationLine) {
    return;
}
void _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::OnConversationFinished(_Script_RsGameTechRT::RsConversation* Conversation) {
    return;
}
void _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::LVL_Disable() {
    return;
}
void _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::LVL_SetEnabled(bool NewEnabled) {
    return;
}
void _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::QueuedVOCancelled(int32_t QueueID) {
    return;
}
void _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::ExecuteUbergraph_BP_VOTrigger(int32_t EntryPoint) {
    return;
}
void _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::LVL_VO_FailedToPlay__DelegateSignature() {
    return;
}
void _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::LVL_VOQueued__DelegateSignature(int32_t QueueID) {
    return;
}
void _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::LVL_VO_Done__DelegateSignature() {
    return;
}
void _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::LVL_VO_PlayingLine__DelegateSignature(_Script_RsGameTechRT::RsConversation* Conversation, _Script_DialoguePlugin::Dialogue* Dialogue, int32_t LineNumber) {
    return;
}
void _Game_Narrative_Interactables_BP_VOTrigger::BP_VOTrigger_C::LVL_VO_Playing__DelegateSignature(_Script_RsGameTechRT::RsConversation* Conversation, _Script_DialoguePlugin::Dialogue* Dialogue) {
    return;
}
