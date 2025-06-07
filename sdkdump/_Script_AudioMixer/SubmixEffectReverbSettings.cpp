#include "..\FUObjectArray.hpp"
#include "SubmixEffectReverbSettings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_AudioMixer::SubmixEffectReverbSettings::get_Density() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_AudioMixer::SubmixEffectReverbSettings::get_Gain() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_AudioMixer::SubmixEffectReverbSettings::get_Diffusion() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_AudioMixer::SubmixEffectReverbSettings::get_GainHF() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_AudioMixer::SubmixEffectReverbSettings::get_ReflectionsGain() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_AudioMixer::SubmixEffectReverbSettings::get_DecayTime() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_AudioMixer::SubmixEffectReverbSettings::get_DecayHFRatio() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_AudioMixer::SubmixEffectReverbSettings::get_ReflectionsDelay() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_AudioMixer::SubmixEffectReverbSettings::get_LateGain() {
    return *(float*)((uintptr_t)this + 0x20);
}
float& _Script_AudioMixer::SubmixEffectReverbSettings::get_LateDelay() {
    return *(float*)((uintptr_t)this + 0x24);
}
float& _Script_AudioMixer::SubmixEffectReverbSettings::get_AirAbsorptionGainHF() {
    return *(float*)((uintptr_t)this + 0x28);
}
float& _Script_AudioMixer::SubmixEffectReverbSettings::get_WetLevel() {
    return *(float*)((uintptr_t)this + 0x2c);
}
float& _Script_AudioMixer::SubmixEffectReverbSettings::get_DryLevel() {
    return *(float*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_AudioMixer::SubmixEffectReverbSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AudioMixer.SubmixEffectReverbSettings");
    return result;
}
