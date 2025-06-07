#include "..\FUObjectArray.hpp"
#include "SubmixEffectSubmixEQPreset.hpp"
#include "SubmixEffectSubmixEQSettings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundEffectSubmixPreset.hpp"
void* _Script_AudioMixer::SubmixEffectSubmixEQPreset::get_Settings() {
    return (void*)((uintptr_t)this + 0x78);
}
void _Script_AudioMixer::SubmixEffectSubmixEQPreset::SetSettings(_Script_AudioMixer::SubmixEffectSubmixEQSettings& InSettings) {
    return;
}
_Script_CoreUObject::Class* _Script_AudioMixer::SubmixEffectSubmixEQPreset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AudioMixer.SubmixEffectSubmixEQPreset");
    return result;
}
