#include "..\FUObjectArray.hpp"
#include "SubmixEffectReverbPreset.hpp"
#include "SubmixEffectReverbSettings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ReverbEffect.hpp"
#include "..\_Script_Engine\SoundEffectSubmixPreset.hpp"
void* _Script_AudioMixer::SubmixEffectReverbPreset::get_Settings() {
    return (void*)((uintptr_t)this + 0x9c);
}
_Script_CoreUObject::Class* _Script_AudioMixer::SubmixEffectReverbPreset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AudioMixer.SubmixEffectReverbPreset");
    return result;
}
void _Script_AudioMixer::SubmixEffectReverbPreset::SetSettingsWithReverbEffect(_Script_Engine::ReverbEffect* InReverbEffect, float WetLevel, float DryLevel) {
    return;
}
void _Script_AudioMixer::SubmixEffectReverbPreset::SetSettings(_Script_AudioMixer::SubmixEffectReverbSettings& InSettings) {
    return;
}
