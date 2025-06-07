#include "..\FUObjectArray.hpp"
#include "AkAuxBus.hpp"
#include "AkLateReverbComponent.hpp"
#include "AkReverbVolume.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Volume.hpp"
bool _Script_AkAudio::AkReverbVolume::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x398 + 0)) & 1 != 0;
}
void _Script_AkAudio::AkReverbVolume::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x398 + 0);
    *(uint8_t*)((uintptr_t)this + 0x398 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AkAudio::AkReverbVolume::get_AuxBusName() {
    return (void*)((uintptr_t)this + 0x3a8);
}
_Script_AkAudio::AkAuxBus*& _Script_AkAudio::AkReverbVolume::get_AuxBus() {
    return *(_Script_AkAudio::AkAuxBus**)((uintptr_t)this + 0x3a0);
}
float& _Script_AkAudio::AkReverbVolume::get_SendLevel() {
    return *(float*)((uintptr_t)this + 0x3b8);
}
float& _Script_AkAudio::AkReverbVolume::get_FadeRate() {
    return *(float*)((uintptr_t)this + 0x3bc);
}
float& _Script_AkAudio::AkReverbVolume::get_Priority() {
    return *(float*)((uintptr_t)this + 0x3c0);
}
_Script_AkAudio::AkLateReverbComponent*& _Script_AkAudio::AkReverbVolume::get_LateReverbComponent() {
    return *(_Script_AkAudio::AkLateReverbComponent**)((uintptr_t)this + 0x3c8);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkReverbVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.AkReverbVolume");
    return result;
}
