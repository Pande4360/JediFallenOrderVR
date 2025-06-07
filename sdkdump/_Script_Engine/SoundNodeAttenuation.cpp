#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundAttenuation.hpp"
#include "SoundNode.hpp"
#include "SoundNodeAttenuation.hpp"
_Script_Engine::SoundAttenuation*& _Script_Engine::SoundNodeAttenuation::get_AttenuationSettings() {
    return *(_Script_Engine::SoundAttenuation**)((uintptr_t)this + 0x38);
}
void* _Script_Engine::SoundNodeAttenuation::get_AttenuationOverrides() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Script_Engine::SoundNodeAttenuation::get_bOverrideAttenuation() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e8 + 0)) & 1 != 0;
}
void _Script_Engine::SoundNodeAttenuation::set_bOverrideAttenuation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::SoundNodeAttenuation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundNodeAttenuation");
    return result;
}
