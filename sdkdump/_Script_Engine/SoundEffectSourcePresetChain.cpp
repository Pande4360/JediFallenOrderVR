#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SoundEffectSourcePresetChain.hpp"
void* _Script_Engine::SoundEffectSourcePresetChain::get_Chain() {
    return (void*)((uintptr_t)this + 0x28);
}
bool _Script_Engine::SoundEffectSourcePresetChain::get_bPlayEffectChainTails() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_Engine::SoundEffectSourcePresetChain::set_bPlayEffectChainTails(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::SoundEffectSourcePresetChain::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundEffectSourcePresetChain");
    return result;
}
