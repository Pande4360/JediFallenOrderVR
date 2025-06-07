#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundConcurrencySettings.hpp"
_Script_CoreUObject::Class* _Script_Engine::SoundConcurrencySettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SoundConcurrencySettings");
    return result;
}
int32_t& _Script_Engine::SoundConcurrencySettings::get_MaxCount() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
bool _Script_Engine::SoundConcurrencySettings::get_bLimitToOwner() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 1 != 0;
}
void _Script_Engine::SoundConcurrencySettings::set_bLimitToOwner(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::SoundConcurrencySettings::get_ResolutionRule() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::SoundConcurrencySettings::get_VolumeScale() {
    return *(float*)((uintptr_t)this + 0xc);
}
