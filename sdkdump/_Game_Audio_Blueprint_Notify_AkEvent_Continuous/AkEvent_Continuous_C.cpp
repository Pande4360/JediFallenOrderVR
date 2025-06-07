#include "..\FUObjectArray.hpp"
#include "AkEvent_Continuous_C.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
_Script_AkAudio::AkAudioEvent*& _Game_Audio_Blueprint_Notify_AkEvent_Continuous::AkEvent_Continuous_C::get_AK_LoopStartSound() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x30);
}
_Script_AkAudio::AkAudioEvent*& _Game_Audio_Blueprint_Notify_AkEvent_Continuous::AkEvent_Continuous_C::get_AK_LoopEndSound() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x38);
}
void* _Game_Audio_Blueprint_Notify_AkEvent_Continuous::AkEvent_Continuous_C::get_Attach_name() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Game_Audio_Blueprint_Notify_AkEvent_Continuous::AkEvent_Continuous_C::get_Follow() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
void _Game_Audio_Blueprint_Notify_AkEvent_Continuous::AkEvent_Continuous_C::set_Follow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Audio_Blueprint_Notify_AkEvent_Continuous::AkEvent_Continuous_C::get_Occlusion() {
    return (*(uint8_t*)((uintptr_t)this + 0x51 + 0)) & 1 != 0;
}
void _Game_Audio_Blueprint_Notify_AkEvent_Continuous::AkEvent_Continuous_C::set_Occlusion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x51 + 0);
    *(uint8_t*)((uintptr_t)this + 0x51 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Audio_Blueprint_Notify_AkEvent_Continuous::AkEvent_Continuous_C::get_Occlusion_Interp() {
    return *(float*)((uintptr_t)this + 0x54);
}
bool _Game_Audio_Blueprint_Notify_AkEvent_Continuous::AkEvent_Continuous_C::Received_NotifyEnd0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, bool interrupted) {
    return;
}
_Script_CoreUObject::Class* _Game_Audio_Blueprint_Notify_AkEvent_Continuous::AkEvent_Continuous_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Audio/Blueprint/Notify/AkEvent_Continuous.AkEvent_Continuous_C");
    return result;
}
bool _Game_Audio_Blueprint_Notify_AkEvent_Continuous::AkEvent_Continuous_C::Received_NotifyBegin0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation, float TotalDuration) {
    return;
}
