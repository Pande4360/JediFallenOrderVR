#include "..\FUObjectArray.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ParticleSystem.hpp"
#include "SwProjectileFX.hpp"
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwProjectileFX::get_DeflectSFX() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x18);
}
_Script_Engine::ParticleSystem*& _Script_SwGame::SwProjectileFX::get_ReflectParticleSystem() {
    return *(_Script_Engine::ParticleSystem**)((uintptr_t)this + 0x0);
}
_Script_Engine::ParticleSystem*& _Script_SwGame::SwProjectileFX::get_DeflectParticleSystem() {
    return *(_Script_Engine::ParticleSystem**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SwGame::SwProjectileFX::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwProjectileFX");
    return result;
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwProjectileFX::get_ReflectSFX() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x10);
}
