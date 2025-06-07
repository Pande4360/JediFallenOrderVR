#include "..\FUObjectArray.hpp"
#include "AkDurationCallbackInfo.hpp"
#include "AkEventCallbackInfo.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AkAudio::AkDurationCallbackInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.AkDurationCallbackInfo");
    return result;
}
float& _Script_AkAudio::AkDurationCallbackInfo::get_Duration() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_AkAudio::AkDurationCallbackInfo::get_EstimatedDuration() {
    return *(float*)((uintptr_t)this + 0x3c);
}
int32_t& _Script_AkAudio::AkDurationCallbackInfo::get_AudioNodeID() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
int32_t& _Script_AkAudio::AkDurationCallbackInfo::get_MediaID() {
    return *(int32_t*)((uintptr_t)this + 0x44);
}
bool _Script_AkAudio::AkDurationCallbackInfo::get_bStreaming() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
void _Script_AkAudio::AkDurationCallbackInfo::set_bStreaming(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
