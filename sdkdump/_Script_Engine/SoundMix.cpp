#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SoundMix.hpp"
bool _Script_Engine::SoundMix::get_bApplyEQ() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_Engine::SoundMix::set_bApplyEQ(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::SoundMix::get_EQPriority() {
    return *(float*)((uintptr_t)this + 0x2c);
}
float& _Script_Engine::SoundMix::get_FadeInTime() {
    return *(float*)((uintptr_t)this + 0x7c);
}
void* _Script_Engine::SoundMix::get_EQSettings() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::SoundMix::get_SoundClassEffects() {
    return (void*)((uintptr_t)this + 0x68);
}
float& _Script_Engine::SoundMix::get_InitialDelay() {
    return *(float*)((uintptr_t)this + 0x78);
}
float& _Script_Engine::SoundMix::get_Duration() {
    return *(float*)((uintptr_t)this + 0x80);
}
float& _Script_Engine::SoundMix::get_FadeOutTime() {
    return *(float*)((uintptr_t)this + 0x84);
}
_Script_CoreUObject::Class* _Script_Engine::SoundMix::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundMix");
    return result;
}
