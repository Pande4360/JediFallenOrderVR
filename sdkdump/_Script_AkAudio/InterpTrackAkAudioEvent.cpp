#include "..\FUObjectArray.hpp"
#include "InterpTrackAkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\InterpTrackVectorBase.hpp"
void* _Script_AkAudio::InterpTrackAkAudioEvent::get_Events() {
    return (void*)((uintptr_t)this + 0x90);
}
bool _Script_AkAudio::InterpTrackAkAudioEvent::get_bContinueEventOnMatineeEnd() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 1 != 0;
}
void _Script_AkAudio::InterpTrackAkAudioEvent::set_bContinueEventOnMatineeEnd(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AkAudio::InterpTrackAkAudioEvent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.InterpTrackAkAudioEvent");
    return result;
}
