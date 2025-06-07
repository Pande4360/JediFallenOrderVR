#include "..\FUObjectArray.hpp"
#include "..\_Script_AkAudio\AkComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_DialoguePlugin\Dialogue.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\DamageType.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "RsConversation.hpp"
void* _Script_RsGameTechRT::RsConversation::get_ConversationLines() {
    return (void*)((uintptr_t)this + 0x450);
}
void* _Script_RsGameTechRT::RsConversation::get_OnConversationFinishedHackNoCrashEvent() {
    return (void*)((uintptr_t)this + 0x360);
}
bool _Script_RsGameTechRT::RsConversation::get_bEndableEarly() {
    return (*(uint8_t*)((uintptr_t)this + 0x3b0 + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsConversation::get_OnConversationLineFinishedEvent() {
    return (void*)((uintptr_t)this + 0x390);
}
void* _Script_RsGameTechRT::RsConversation::get_OnConversationLineFinishedHackNoCrashEvent() {
    return (void*)((uintptr_t)this + 0x370);
}
void* _Script_RsGameTechRT::RsConversation::get_OnConversationFinishedEvent() {
    return (void*)((uintptr_t)this + 0x380);
}
void* _Script_RsGameTechRT::RsConversation::get_OnConversationLineStartedEvent() {
    return (void*)((uintptr_t)this + 0x3a0);
}
void _Script_RsGameTechRT::RsConversation::set_bEndableEarly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3b0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsConversation::get_LethalDamageType() {
    return (void*)((uintptr_t)this + 0x460);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsConversation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsConversation");
    return result;
}
void _Script_RsGameTechRT::RsConversation::StopConversation() {
    return;
}
void _Script_RsGameTechRT::RsConversation::StartConversation() {
    return;
}
void _Script_RsGameTechRT::RsConversation::SetCurrentDialogueDuration(float Duration) {
    return;
}
void _Script_RsGameTechRT::RsConversation::OnConversationActorTakeAnyDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Script_RsGameTechRT::RsConversation::OnConversationActorDiving(void* previousSwimState, void* newSwimState) {
    return;
}
void _Script_RsGameTechRT::RsConversation::OnConversationActorDied(_Script_Engine::Actor* DeathActor) {
    return;
}
_Script_AkAudio::AkComponent* _Script_RsGameTechRT::RsConversation::GetCurrentSpeakingAkComponent() {
    return;
}
void _Script_RsGameTechRT::RsConversation::OnConversationActorDestroyed(_Script_Engine::Actor* DestroyedActor) {
    return;
}
void _Script_RsGameTechRT::RsConversation::MakeInteractionChoice(int32_t Choice) {
    return;
}
bool _Script_RsGameTechRT::RsConversation::IsWaitingForInteraction() {
    return;
}
bool _Script_RsGameTechRT::RsConversation::IsInteractiveConversation() {
    return;
}
_Script_GameplayTags::GameplayTag _Script_RsGameTechRT::RsConversation::GetSpeakingCharacterType() {
    return;
}
void* _Script_RsGameTechRT::RsConversation::GetSpeakingCharacterText() {
    return;
}
_Script_DialoguePlugin::Dialogue* _Script_RsGameTechRT::RsConversation::GetDialogue() {
    return;
}
_Script_Engine::Actor* _Script_RsGameTechRT::RsConversation::GetCurrentSpeakingActor() {
    return;
}
void* _Script_RsGameTechRT::RsConversation::GetCurrentChoices() {
    return;
}
int32_t _Script_RsGameTechRT::RsConversation::GetConversationId() {
    return;
}
