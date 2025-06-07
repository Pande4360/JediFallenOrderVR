#include "..\FUObjectArray.hpp"
#include "SubmixEffectSubmixEQSettings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AudioMixer::SubmixEffectSubmixEQSettings::get_EQBands() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_AudioMixer::SubmixEffectSubmixEQSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AudioMixer.SubmixEffectSubmixEQSettings");
    return result;
}
