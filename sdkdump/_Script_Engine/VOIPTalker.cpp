#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ActorComponent.hpp"
#include "AudioComponent.hpp"
#include "PlayerState.hpp"
#include "VOIPTalker.hpp"
void* _Script_Engine::VOIPTalker::get_Settings() {
    return (void*)((uintptr_t)this + 0x170);
}
void _Script_Engine::VOIPTalker::BPOnTalkingEnd() {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::VOIPTalker::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.VOIPTalker");
    return result;
}
void _Script_Engine::VOIPTalker::RegisterWithPlayerState(_Script_Engine::PlayerState* OwningState) {
    return;
}
float _Script_Engine::VOIPTalker::GetVoiceLevel() {
    return;
}
_Script_Engine::VOIPTalker* _Script_Engine::VOIPTalker::CreateTalkerForPlayer(_Script_Engine::PlayerState* OwningState) {
    return;
}
void _Script_Engine::VOIPTalker::BPOnTalkingBegin(_Script_Engine::AudioComponent* AudioComponent) {
    return;
}
