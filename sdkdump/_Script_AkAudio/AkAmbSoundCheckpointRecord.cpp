#include "..\FUObjectArray.hpp"
#include "AkAmbSoundCheckpointRecord.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Script_AkAudio::AkAmbSoundCheckpointRecord::get_bCurrentlyPlaying() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_AkAudio::AkAmbSoundCheckpointRecord::set_bCurrentlyPlaying(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkAmbSoundCheckpointRecord::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AkAudio.AkAmbSoundCheckpointRecord");
    return result;
}
