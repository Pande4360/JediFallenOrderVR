#include "..\FUObjectArray.hpp"
#include "SubmixEffectEQBand.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_AudioMixer::SubmixEffectEQBand::get_Frequency() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_AudioMixer::SubmixEffectEQBand::get_Bandwidth() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_AudioMixer::SubmixEffectEQBand::get_GainDb() {
    return *(float*)((uintptr_t)this + 0x8);
}
bool _Script_AudioMixer::SubmixEffectEQBand::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 1 != 0;
}
void _Script_AudioMixer::SubmixEffectEQBand::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AudioMixer::SubmixEffectEQBand::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AudioMixer.SubmixEffectEQBand");
    return result;
}
