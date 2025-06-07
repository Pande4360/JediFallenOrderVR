#include "..\FUObjectArray.hpp"
#include "BP_RadioCallInObject_C.hpp"
#include "..\_Game_WorldInteracts_EventZones_Interact_Zone_Interact\Zone_Interact_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Color.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_DialoguePlugin\Dialogue.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ChildActorComponent.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_RsGameTechRT\NarrativeEventResult.hpp"
#include "..\_Script_RsGameTechRT\RsConversation.hpp"
_Script_DialoguePlugin::Dialogue*& _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::get_OrSpecificDialogue() {
    return *(_Script_DialoguePlugin::Dialogue**)((uintptr_t)this + 0x458);
}
void _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::GetNarrativeLabelHiddenInGame(bool& Hidden) {
    return;
}
void* _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::get_NarrativeSpecificTag() {
    return (void*)((uintptr_t)this + 0x438);
}
void* _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x418);
}
_Script_Engine::ChildActorComponent*& _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::get_NarrativeLabelComponent() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x420);
}
_Script_Engine::SceneComponent*& _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::get_DistanceValidityZones() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x428);
}
void* _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::get_EventContext() {
    return (void*)((uintptr_t)this + 0x430);
}
float& _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::get_MaxPlayerDistance() {
    return *(float*)((uintptr_t)this + 0x460);
}
_Script_Engine::Actor*& _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::get_TheHero() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x468);
}
float& _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::get_MaxAngle() {
    return *(float*)((uintptr_t)this + 0x470);
}
void _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::Timer_Proximity_FrustrumAndVisibility() {
    return;
}
bool _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::get_DistanceValidityZoneActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x474 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::set_DistanceValidityZoneActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x474 + 0);
    *(uint8_t*)((uintptr_t)this + 0x474 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::get_RaytraceSphereRadius() {
    return *(float*)((uintptr_t)this + 0x478);
}
bool _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::get_RequireRaytrace() {
    return (*(uint8_t*)((uintptr_t)this + 0x47c + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::set_RequireRaytrace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x47c + 0);
    *(uint8_t*)((uintptr_t)this + 0x47c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::GetNarrativeLabelOffset(_Script_CoreUObject::Vector& Offset) {
    return;
}
int32_t& _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::get_UsesBeforeConsumed() {
    return *(int32_t*)((uintptr_t)this + 0x480);
}
bool _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::get_DisableEachValidityZoneOnUse() {
    return (*(uint8_t*)((uintptr_t)this + 0x484 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::set_DisableEachValidityZoneOnUse(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x484 + 0);
    *(uint8_t*)((uintptr_t)this + 0x484 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::PrimitiveComponent*& _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::get_CurrentValidityZone() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0x488);
}
void* _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::get_DisabledZones() {
    return (void*)((uintptr_t)this + 0x490);
}
int32_t& _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::get_TotalCallIns() {
    return *(int32_t*)((uintptr_t)this + 0x4a0);
}
void* _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::get_NarrativeLabel() {
    return (void*)((uintptr_t)this + 0x4a8);
}
void* _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::get_NarrativeLabelOffset() {
    return (void*)((uintptr_t)this + 0x4b8);
}
void* _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::get_NarrativeLabelColor() {
    return (void*)((uintptr_t)this + 0x4c4);
}
bool _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::get_RequiresInteractPress() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c8 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::set_RequiresInteractPress(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::get_LookTimeBeforeValid() {
    return *(float*)((uintptr_t)this + 0x4cc);
}
float& _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::get_FrustrumVisCheckInterval() {
    return *(float*)((uintptr_t)this + 0x4d0);
}
float& _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::get_CurrentLookTime() {
    return *(float*)((uintptr_t)this + 0x4d4);
}
void _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::ReceiveBeginPlay() {
    return;
}
bool _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::get_NarrativeLabelHiddenInGame() {
    return (*(uint8_t*)((uintptr_t)this + 0x4d8 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::set_NarrativeLabelHiddenInGame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4d8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4d8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::get_QueueDialogueIfFails() {
    return (*(uint8_t*)((uintptr_t)this + 0x4d9 + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::set_QueueDialogueIfFails(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4d9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4d9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::get_LVL_VO_PlayingLine() {
    return (void*)((uintptr_t)this + 0x4f8);
}
bool _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::get_SaveOnEachUse() {
    return (*(uint8_t*)((uintptr_t)this + 0x4da + 0)) & 1 != 0;
}
void _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::LVL_SetEnabled0(bool NewEnabled, bool Temporary) {
    return;
}
void _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::set_SaveOnEachUse(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4da + 0);
    *(uint8_t*)((uintptr_t)this + 0x4da + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::HandleNarrativeResult(_Script_RsGameTechRT::NarrativeEventResult Result) {
    return;
}
void* _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::get_LVL_VO_Playing() {
    return (void*)((uintptr_t)this + 0x4e0);
}
int32_t& _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::get_CurrentConversationLine() {
    return *(int32_t*)((uintptr_t)this + 0x4f0);
}
void* _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::get_LVL_VO_Done() {
    return (void*)((uintptr_t)this + 0x508);
}
_Script_CoreUObject::Class* _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Narrative/Interactables/BP_RadioCallInObject.BP_RadioCallInObject_C");
    return result;
}
void _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::GetNarrativeLabel(void*& Label) {
    return;
}
void _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::GetNarrativeLabelColor(_Script_CoreUObject::Color& Result) {
    return;
}
void _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::OnConversationFinished(_Script_RsGameTechRT::RsConversation* Conversation) {
    return;
}
void _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::HandlePlayingConversation(_Script_RsGameTechRT::RsConversation* Conversation) {
    return;
}
void _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::Timer_Intermittent_CheckRange() {
    return;
}
void _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::RaytraceVisibilityCheck(bool& Result) {
    return;
}
void _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::UserConstructionScript() {
    return;
}
void _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::LVL_VO_Playing__DelegateSignature(_Script_RsGameTechRT::RsConversation* Conversation, _Script_DialoguePlugin::Dialogue* Dialogue) {
    return;
}
void _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::DistanceZoneOverlapBegun(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::DistanceZoneOverlapEnded(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    return;
}
void _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::Interacted0() {
    return;
}
void _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::OnLineStarted(_Script_RsGameTechRT::RsConversation* Conversation, int32_t CurrrentConversationLine) {
    return;
}
void _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::ExecuteUbergraph_BP_RadioCallInObject(int32_t EntryPoint) {
    return;
}
void _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::LVL_VO_Done__DelegateSignature() {
    return;
}
void _Game_Narrative_Interactables_BP_RadioCallInObject::BP_RadioCallInObject_C::LVL_VO_PlayingLine__DelegateSignature(_Script_RsGameTechRT::RsConversation* Conversation, _Script_DialoguePlugin::Dialogue* Dialogue, int32_t LineNumber) {
    return;
}
