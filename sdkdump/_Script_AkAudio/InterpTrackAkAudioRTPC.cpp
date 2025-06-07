#include "..\FUObjectArray.hpp"
#include "InterpTrackAkAudioRTPC.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\InterpTrackFloatBase.hpp"
void* _Script_AkAudio::InterpTrackAkAudioRTPC::get_Param() {
    return (void*)((uintptr_t)this + 0x90);
}
bool _Script_AkAudio::InterpTrackAkAudioRTPC::get_bPlayOnReverse() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 1 != 0;
}
void _Script_AkAudio::InterpTrackAkAudioRTPC::set_bPlayOnReverse(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AkAudio::InterpTrackAkAudioRTPC::get_bContinueRTPCOnMatineeEnd() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 2 != 0;
}
void _Script_AkAudio::InterpTrackAkAudioRTPC::set_bContinueRTPCOnMatineeEnd(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_CoreUObject::Class* _Script_AkAudio::InterpTrackAkAudioRTPC::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.InterpTrackAkAudioRTPC");
    return result;
}
