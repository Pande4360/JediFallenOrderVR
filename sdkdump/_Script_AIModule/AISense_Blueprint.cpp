#include "..\FUObjectArray.hpp"
#include "AIPerceptionComponent.hpp"
#include "AISense.hpp"
#include "AISense_Blueprint.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Pawn.hpp"
void* _Script_AIModule::AISense_Blueprint::get_ListenerDataType() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_AIModule::AISense_Blueprint::get_ListenerContainer() {
    return (void*)((uintptr_t)this + 0x90);
}
void _Script_AIModule::AISense_Blueprint::OnListenerUpdated(_Script_Engine::Actor* ActorListener, _Script_AIModule::AIPerceptionComponent* PerceptionComponent) {
    return;
}
void* _Script_AIModule::AISense_Blueprint::get_UnprocessedEvents() {
    return (void*)((uintptr_t)this + 0xa0);
}
void _Script_AIModule::AISense_Blueprint::OnListenerRegistered(_Script_Engine::Actor* ActorListener, _Script_AIModule::AIPerceptionComponent* PerceptionComponent) {
    return;
}
_Script_CoreUObject::Class* _Script_AIModule::AISense_Blueprint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.AISense_Blueprint");
    return result;
}
float _Script_AIModule::AISense_Blueprint::OnUpdate(void*& EventsToProcess) {
    return;
}
void _Script_AIModule::AISense_Blueprint::OnListenerUnregistered(_Script_Engine::Actor* ActorListener, _Script_AIModule::AIPerceptionComponent* PerceptionComponent) {
    return;
}
void _Script_AIModule::AISense_Blueprint::K2_OnNewPawn(_Script_Engine::Pawn* NewPawn) {
    return;
}
void _Script_AIModule::AISense_Blueprint::GetAllListenerComponents(void*& ListenerComponents) {
    return;
}
void _Script_AIModule::AISense_Blueprint::GetAllListenerActors(void*& ListenerActors) {
    return;
}
