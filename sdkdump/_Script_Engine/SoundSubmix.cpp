#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "AmbisonicsSubmixSettingsBase.hpp"
#include "SoundSubmix.hpp"
#include "SoundWave.hpp"
_Script_Engine::SoundSubmix*& _Script_Engine::SoundSubmix::get_ParentSubmix() {
    return *(_Script_Engine::SoundSubmix**)((uintptr_t)this + 0x38);
}
void* _Script_Engine::SoundSubmix::get_ChildSubmixes() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::SoundSubmix::get_OnSubmixRecordedFileDone() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_Engine::AmbisonicsSubmixSettingsBase*& _Script_Engine::SoundSubmix::get_AmbisonicsPluginSettings() {
    return *(_Script_Engine::AmbisonicsSubmixSettingsBase**)((uintptr_t)this + 0x58);
}
void* _Script_Engine::SoundSubmix::get_ChannelFormat() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::SoundSubmix::get_SubmixEffectChain() {
    return (void*)((uintptr_t)this + 0x48);
}
int32_t& _Script_Engine::SoundSubmix::get_EnvelopeFollowerAttackTime() {
    return *(int32_t*)((uintptr_t)this + 0x60);
}
int32_t& _Script_Engine::SoundSubmix::get_EnvelopeFollowerReleaseTime() {
    return *(int32_t*)((uintptr_t)this + 0x64);
}
_Script_CoreUObject::Class* _Script_Engine::SoundSubmix::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundSubmix");
    return result;
}
void _Script_Engine::SoundSubmix::StopRecordingOutput(_Script_CoreUObject::Object* WorldContextObject, void* ExportType, void* Name, void* Path, _Script_Engine::SoundWave* ExistingSoundWaveToOverwrite) {
    return;
}
void _Script_Engine::SoundSubmix::StopEnvelopeFollowing(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
void _Script_Engine::SoundSubmix::StartRecordingOutput(_Script_CoreUObject::Object* WorldContextObject, float ExpectedDuration) {
    return;
}
void _Script_Engine::SoundSubmix::StartEnvelopeFollowing(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
void _Script_Engine::SoundSubmix::AddEnvelopeFollowerDelegate(_Script_CoreUObject::Object* WorldContextObject, void*& OnSubmixEnvelopeBP) {
    return;
}
