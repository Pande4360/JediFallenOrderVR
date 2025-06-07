#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ReverbEffect.hpp"
#include "ReverbSettings.hpp"
#include "SoundEffectSubmixPreset.hpp"
bool _Script_Engine::ReverbSettings::get_bApplyReverb() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_Engine::ReverbSettings::set_bApplyReverb(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::ReverbSettings::get_ReverbType() {
    return (void*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::ReverbSettings::get_Volume() {
    return *(float*)((uintptr_t)this + 0x18);
}
_Script_Engine::ReverbEffect*& _Script_Engine::ReverbSettings::get_ReverbEffect() {
    return *(_Script_Engine::ReverbEffect**)((uintptr_t)this + 0x8);
}
float& _Script_Engine::ReverbSettings::get_FadeTime() {
    return *(float*)((uintptr_t)this + 0x1c);
}
_Script_Engine::SoundEffectSubmixPreset*& _Script_Engine::ReverbSettings::get_ReverbPluginEffect() {
    return *(_Script_Engine::SoundEffectSubmixPreset**)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::ReverbSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ReverbSettings");
    return result;
}
