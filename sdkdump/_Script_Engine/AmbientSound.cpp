#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "AmbientSound.hpp"
#include "AudioComponent.hpp"
_Script_Engine::AudioComponent*& _Script_Engine::AmbientSound::get_AudioComponent() {
    return *(_Script_Engine::AudioComponent**)((uintptr_t)this + 0x360);
}
_Script_CoreUObject::Class* _Script_Engine::AmbientSound::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AmbientSound");
    return result;
}
void _Script_Engine::AmbientSound::Play(float StartTime) {
    return;
}
void _Script_Engine::AmbientSound::Stop() {
    return;
}
void _Script_Engine::AmbientSound::FadeOut(float FadeOutDuration, float FadeVolumeLevel) {
    return;
}
void _Script_Engine::AmbientSound::AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel) {
    return;
}
void _Script_Engine::AmbientSound::FadeIn(float FadeInDuration, float FadeVolumeLevel) {
    return;
}
