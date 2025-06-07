#include "..\FUObjectArray.hpp"
#include "AIPerceptionSystem.hpp"
#include "AISenseEvent.hpp"
#include "AIStimulus.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Actor.hpp"
_Script_CoreUObject::Class* _Script_AIModule::AIPerceptionSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.AIPerceptionSystem");
    return result;
}
void* _Script_AIModule::AIPerceptionSystem::get_Senses() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_AIModule::AIPerceptionSystem::GetSenseClassForStimulus(_Script_CoreUObject::Object* WorldContextObject, _Script_AIModule::AIStimulus& Stimulus) {
    return;
}
float& _Script_AIModule::AIPerceptionSystem::get_PerceptionAgingRate() {
    return *(float*)((uintptr_t)this + 0x98);
}
bool _Script_AIModule::AIPerceptionSystem::RegisterPerceptionStimuliSource(_Script_CoreUObject::Object* WorldContextObject, void* Sense, _Script_Engine::Actor* Target) {
    return;
}
void _Script_AIModule::AIPerceptionSystem::ReportPerceptionEvent(_Script_CoreUObject::Object* WorldContextObject, _Script_AIModule::AISenseEvent* PerceptionEvent) {
    return;
}
void _Script_AIModule::AIPerceptionSystem::ReportEvent(_Script_AIModule::AISenseEvent* PerceptionEvent) {
    return;
}
void _Script_AIModule::AIPerceptionSystem::OnPerceptionStimuliSourceEndPlay(_Script_Engine::Actor* Actor, void* EndPlayReason) {
    return;
}
