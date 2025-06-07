#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundEffectSourcePreset.hpp"
#include "SourceEffectChainEntry.hpp"
void _Script_Engine::SourceEffectChainEntry::set_bBypass(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SoundEffectSourcePreset*& _Script_Engine::SourceEffectChainEntry::get_Preset() {
    return *(_Script_Engine::SoundEffectSourcePreset**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::SourceEffectChainEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SourceEffectChainEntry");
    return result;
}
bool _Script_Engine::SourceEffectChainEntry::get_bBypass() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
