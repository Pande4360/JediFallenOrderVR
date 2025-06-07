#include "..\FUObjectArray.hpp"
#include "AIController.hpp"
#include "AIPerceptionComponent.hpp"
#include "ActorPerceptionBlueprintInfo.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
void* _Script_AIModule::AIPerceptionComponent::get_DominantSense() {
    return (void*)((uintptr_t)this + 0x180);
}
void* _Script_AIModule::AIPerceptionComponent::get_SensesConfig() {
    return (void*)((uintptr_t)this + 0x170);
}
_Script_CoreUObject::Class* _Script_AIModule::AIPerceptionComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.AIPerceptionComponent");
    return result;
}
_Script_AIModule::AIController*& _Script_AIModule::AIPerceptionComponent::get_AIOwner() {
    return *(_Script_AIModule::AIController**)((uintptr_t)this + 0x198);
}
void* _Script_AIModule::AIPerceptionComponent::get_OnPerceptionUpdated() {
    return (void*)((uintptr_t)this + 0x220);
}
void _Script_AIModule::AIPerceptionComponent::SetSenseEnabled(void* SenseClass, bool bEnable) {
    return;
}
void* _Script_AIModule::AIPerceptionComponent::get_OnTargetPerceptionUpdated() {
    return (void*)((uintptr_t)this + 0x230);
}
void _Script_AIModule::AIPerceptionComponent::RequestStimuliListenerUpdate() {
    return;
}
void _Script_AIModule::AIPerceptionComponent::OnOwnerEndPlay(_Script_Engine::Actor* Actor, void* EndPlayReason) {
    return;
}
void _Script_AIModule::AIPerceptionComponent::GetPerceivedHostileActors(void*& OutActors) {
    return;
}
void _Script_AIModule::AIPerceptionComponent::GetPerceivedActors(void* SenseToUse, void*& OutActors) {
    return;
}
void _Script_AIModule::AIPerceptionComponent::GetKnownPerceivedActors(void* SenseToUse, void*& OutActors) {
    return;
}
void _Script_AIModule::AIPerceptionComponent::GetCurrentlyPerceivedActors(void* SenseToUse, void*& OutActors) {
    return;
}
bool _Script_AIModule::AIPerceptionComponent::GetActorsPerception(_Script_Engine::Actor* Actor, _Script_AIModule::ActorPerceptionBlueprintInfo& Info) {
    return;
}
