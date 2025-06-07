#include "..\FUObjectArray.hpp"
#include "AkAuxBus.hpp"
#include "AkLateReverbComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
bool _Script_AkAudio::AkLateReverbComponent::get_bEnable() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c8 + 0)) & 1 != 0;
}
void _Script_AkAudio::AkLateReverbComponent::set_bEnable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_AkAudio::AkAuxBus*& _Script_AkAudio::AkLateReverbComponent::get_AuxBus() {
    return *(_Script_AkAudio::AkAuxBus**)((uintptr_t)this + 0x2d0);
}
void* _Script_AkAudio::AkLateReverbComponent::get_AuxBusName() {
    return (void*)((uintptr_t)this + 0x2d8);
}
float& _Script_AkAudio::AkLateReverbComponent::get_Priority() {
    return *(float*)((uintptr_t)this + 0x2f0);
}
float& _Script_AkAudio::AkLateReverbComponent::get_SendLevel() {
    return *(float*)((uintptr_t)this + 0x2e8);
}
float& _Script_AkAudio::AkLateReverbComponent::get_FadeRate() {
    return *(float*)((uintptr_t)this + 0x2ec);
}
_Script_AkAudio::AkLateReverbComponent*& _Script_AkAudio::AkLateReverbComponent::get_NextLowerPriorityComponent() {
    return *(_Script_AkAudio::AkLateReverbComponent**)((uintptr_t)this + 0x2f8);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkLateReverbComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.AkLateReverbComponent");
    return result;
}
void _Script_AkAudio::AkLateReverbComponent::EnableReverb() {
    return;
}
void _Script_AkAudio::AkLateReverbComponent::DisableReverb() {
    return;
}
