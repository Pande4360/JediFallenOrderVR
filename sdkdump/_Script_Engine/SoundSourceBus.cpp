#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundSourceBus.hpp"
#include "SoundWave.hpp"
void* _Script_Engine::SoundSourceBus::get_SourceBusChannels() {
    return (void*)((uintptr_t)this + 0x208);
}
float& _Script_Engine::SoundSourceBus::get_SourceBusDuration() {
    return *(float*)((uintptr_t)this + 0x20c);
}
bool _Script_Engine::SoundSourceBus::get_bAutoDeactivateWhenSilent() {
    return (*(uint8_t*)((uintptr_t)this + 0x210 + 0)) & 1 != 0;
}
void _Script_Engine::SoundSourceBus::set_bAutoDeactivateWhenSilent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x210 + 0);
    *(uint8_t*)((uintptr_t)this + 0x210 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::SoundSourceBus::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundSourceBus");
    return result;
}
