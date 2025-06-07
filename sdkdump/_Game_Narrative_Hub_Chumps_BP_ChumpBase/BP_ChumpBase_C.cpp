#include "..\FUObjectArray.hpp"
#include "..\_Game_Narrative_Hub_BP_Hub\BP_Hub_C.hpp"
#include "BP_ChumpBase_C.hpp"
#include "..\_Game_WorldInteracts_EventZones_Interact_Zone_Interact\Zone_Interact_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ChildActorComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "..\_Script_RsGameTechRT\RsConversation.hpp"
#include "..\_Script_RsGameTechRT\RsDistanceTriggerComponent.hpp"
#include "..\_Script_RsGameTechRT\RsHeroStateModifierDefinition.hpp"
#include "..\_Script_RsGameTechRT\RsTargetableComponent.hpp"
#include "..\_Script_SwGame\RsAbilityEffectVictimComponent.hpp"
#include "..\_Script_SwGame\SwAICharacter.hpp"
int32_t& _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_CoreChumpID() {
    return *(int32_t*)((uintptr_t)this + 0x2bc4);
}
_Script_RsGameTechRT::RsDistanceTriggerComponent*& _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_CharacterReactTrigger() {
    return *(_Script_RsGameTechRT::RsDistanceTriggerComponent**)((uintptr_t)this + 0x29e0);
}
void* _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x29d0);
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::DoneTalking() {
    return;
}
_Script_RsGameTechRT::RsDistanceTriggerComponent*& _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_AbandonVOTrigger() {
    return *(_Script_RsGameTechRT::RsDistanceTriggerComponent**)((uintptr_t)this + 0x29e8);
}
float& _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_AcceptableTightTurnDifference() {
    return *(float*)((uintptr_t)this + 0x2a7c);
}
_Script_RsGameTechRT::RsDistanceTriggerComponent*& _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_HeroNearTrigger() {
    return *(_Script_RsGameTechRT::RsDistanceTriggerComponent**)((uintptr_t)this + 0x29d8);
}
_Script_Engine::ChildActorComponent*& _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_HubVOInteract() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x2a00);
}
_Script_RsGameTechRT::RsDistanceTriggerComponent*& _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_EngagementVOTrigger() {
    return *(_Script_RsGameTechRT::RsDistanceTriggerComponent**)((uintptr_t)this + 0x29f0);
}
_Script_RsGameTechRT::RsTargetableComponent*& _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_RsTargetable() {
    return *(_Script_RsGameTechRT::RsTargetableComponent**)((uintptr_t)this + 0x2a08);
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::LVL_ChumpProxyDone__DelegateSignature() {
    return;
}
_Script_RsGameTechRT::RsDistanceTriggerComponent*& _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_ProxyVOTrigger() {
    return *(_Script_RsGameTechRT::RsDistanceTriggerComponent**)((uintptr_t)this + 0x29f8);
}
_Script_Engine::StaticMeshComponent*& _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_DebugProxySphere() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x2bb0);
}
_Script_SwGame::RsAbilityEffectVictimComponent*& _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_RsAbilityEffectVictim() {
    return *(_Script_SwGame::RsAbilityEffectVictimComponent**)((uintptr_t)this + 0x2a10);
}
void* _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_MoveToLocation() {
    return (void*)((uintptr_t)this + 0x2a18);
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::GetBossDefeatedText(void*& DefeatedText) {
    return;
}
bool _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_InConversation() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a24 + 0)) & 1 != 0;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::set_InConversation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a24 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a24 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::TalkingToCal() {
    return;
}
void* _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_SpeakerTag() {
    return (void*)((uintptr_t)this + 0x2a28);
}
bool _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_DebugMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a30 + 0)) & 1 != 0;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::set_TurnToFaceDisabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ba8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ba8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::set_DebugMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::ReceiveTick(float DeltaSeconds) {
    return;
}
bool _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_RotatingToPlayer() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a31 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Narrative/Hub/Chumps/BP_ChumpBase.BP_ChumpBase_C");
    return result;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::set_RotatingToPlayer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a31 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a31 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::UpdateCharacterReactionOverlaps() {
    return;
}
bool _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_CanLookAt() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a32 + 0)) & 1 != 0;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::set_CanLookAt(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a32 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a32 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_RsGameTechRT::RsConversation*& _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_MyConversation() {
    return *(_Script_RsGameTechRT::RsConversation**)((uintptr_t)this + 0x2ad8);
}
void* _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_LVL_ChumpDoneTalking() {
    return (void*)((uintptr_t)this + 0x2a38);
}
void* _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_LVL_ChumpProxyDone() {
    return (void*)((uintptr_t)this + 0x2a48);
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::ExecuteUbergraph_BP_ChumpBase(int32_t EntryPoint) {
    return;
}
void* _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_CurrentHubConversationType() {
    return (void*)((uintptr_t)this + 0x2a58);
}
_Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C*& _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_VOInteract() {
    return *(_Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C**)((uintptr_t)this + 0x2a60);
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::ChumpResetLookat() {
    return;
}
_Game_Narrative_Hub_BP_Hub::BP_Hub_C*& _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_Hub() {
    return *(_Game_Narrative_Hub_BP_Hub::BP_Hub_C**)((uintptr_t)this + 0x2a68);
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::TryDestroyDebugSphere() {
    return;
}
float& _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_ChumpRotationSpeed() {
    return *(float*)((uintptr_t)this + 0x2a70);
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::GetSpeakerTag(_Script_GameplayTags::GameplayTag& SpeakerTag) {
    return;
}
float& _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_AcceptableWideTurnDifference() {
    return *(float*)((uintptr_t)this + 0x2a74);
}
bool _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_UseTightThreshold() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a78 + 0)) & 1 != 0;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::UpdateEyeTrackingTarget(_Script_Engine::Actor* Target) {
    return;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::set_UseTightThreshold(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::ResumeMoving() {
    return;
}
void* _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_LookatReactActors() {
    return (void*)((uintptr_t)this + 0x2a80);
}
bool _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_InteractTempDisabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ad0 + 0)) & 1 != 0;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::VOInteracted() {
    return;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::set_InteractTempDisabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ad0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ad0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_BoredOfReactActors() {
    return (void*)((uintptr_t)this + 0x2ae0);
}
bool _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_CharacterReactTriggerDisabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x2bc0 + 0)) & 1 != 0;
}
_Script_Engine::Actor*& _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_CurrentLookatTarget() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x2b30);
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::CalledOutToCal() {
    return;
}
float& _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_LookatBeginTime() {
    return *(float*)((uintptr_t)this + 0x2b38);
}
float& _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_LookatTimeBeforeBoredom() {
    return *(float*)((uintptr_t)this + 0x2b3c);
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::BndEvt__ProxyVOTrigger_K2Node_ComponentBoundEvent_6_RsTriggerSignature__DelegateSignature(_Script_Engine::Actor* Actor) {
    return;
}
float& _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_BoredomDuration() {
    return *(float*)((uintptr_t)this + 0x2b40);
}
void* _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_PesterActorsToCounts() {
    return (void*)((uintptr_t)this + 0x2b48);
}
int32_t& _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_PesterCountToResetBoredom() {
    return *(int32_t*)((uintptr_t)this + 0x2b98);
}
bool _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_ReallyTracking() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b9c + 0)) & 1 != 0;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::set_ReallyTracking(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b9c + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b9c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_ShouldConversationSetAIBusy() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b9d + 0)) & 1 != 0;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::set_ShouldConversationSetAIBusy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b9d + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b9d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_IdleLoopAnim() {
    return *(int32_t*)((uintptr_t)this + 0x2ba0);
}
int32_t& _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_ConversationIdleAnim() {
    return *(int32_t*)((uintptr_t)this + 0x2ba4);
}
bool _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_TurnToFaceDisabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ba8 + 0)) & 1 != 0;
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::get_HeroNearHSM() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x2bb8);
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::set_CharacterReactTriggerDisabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2bc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2bc0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::AmIMerrin(bool& IsMerrin) {
    return;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::GetCustomSubtitleName(void*& CustomSubtitleName) {
    return;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::GetCoreChumpTypeID(int32_t& ID) {
    return;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::InitVOInteract() {
    return;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::ApplyIdleLoop(int32_t LoopAnim) {
    return;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::HubInteractionsDisabled() {
    return;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::UpdateReactBoredActors() {
    return;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::SetHubConversationType(void* Type) {
    return;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::UserConstructionScript() {
    return;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::ChumpAttachProp(void* Prop, bool Attached, float BlendTime, bool Hidden) {
    return;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::ChumpShowHideProp(void* Prop, bool HiddenInGame) {
    return;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::ReceiveBeginPlay() {
    return;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::StartRotatingToPlayer() {
    return;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::StopRotatingToPlayer() {
    return;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::ReceiveEndPlay(void* EndPlayReason) {
    return;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::ConversationBegin(_Script_RsGameTechRT::RsConversation* Conversation, void*& ConversationActors, int32_t Conversation_ID) {
    return;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::ConversationEnded(_Script_RsGameTechRT::RsConversation* Conversation, void*& ConversationActors, int32_t ConversationId) {
    return;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::BndEvt__ProxyVOTrigger_K2Node_ComponentBoundEvent_5_RsTriggerSignature__DelegateSignature(_Script_Engine::Actor* Actor) {
    return;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::BndEvt__EngagementVOTrigger_K2Node_ComponentBoundEvent_7_RsTriggerSignature__DelegateSignature(_Script_Engine::Actor* Actor) {
    return;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::BndEvt__CharacterReactTrigger_K2Node_ComponentBoundEvent_0_RsTriggerSignature__DelegateSignature(_Script_Engine::Actor* Actor) {
    return;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::BndEvt__CharacterReactTrigger_K2Node_ComponentBoundEvent_1_RsTriggerSignature__DelegateSignature(_Script_Engine::Actor* Actor) {
    return;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::EventReceiveInitializeAI() {
    return;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::BndEvt__AbandonVOTrigger_K2Node_ComponentBoundEvent_2_RsTriggerSignature__DelegateSignature(_Script_Engine::Actor* Actor) {
    return;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::ChumpLookAtTarget(_Script_Engine::Actor* Actor) {
    return;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::ChumpDisableTurnToFace() {
    return;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::TrySpawnDebugProxySphere() {
    return;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::BndEvt__HeroNearTrigger_K2Node_ComponentBoundEvent_3_RsTriggerSignature__DelegateSignature(_Script_Engine::Actor* Actor) {
    return;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::BndEvt__HeroNearTrigger_K2Node_ComponentBoundEvent_4_RsTriggerSignature__DelegateSignature(_Script_Engine::Actor* Actor) {
    return;
}
void _Game_Narrative_Hub_Chumps_BP_ChumpBase::BP_ChumpBase_C::LVL_ChumpDoneTalking__DelegateSignature() {
    return;
}
