#include "..\FUObjectArray.hpp"
#include "AkEvent_OneShot_C.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotify.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
void _Game_Audio_Blueprint_Notify_AkEvent_OneShot::AkEvent_OneShot_C::set_Follow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Audio_Blueprint_Notify_AkEvent_OneShot::AkEvent_OneShot_C::get_Attach_Name() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_AkAudio::AkAudioEvent*& _Game_Audio_Blueprint_Notify_AkEvent_OneShot::AkEvent_OneShot_C::get_Event() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x48);
}
bool _Game_Audio_Blueprint_Notify_AkEvent_OneShot::AkEvent_OneShot_C::get_Occlusion() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 1 != 0;
}
bool _Game_Audio_Blueprint_Notify_AkEvent_OneShot::AkEvent_OneShot_C::get_Follow() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
void* _Game_Audio_Blueprint_Notify_AkEvent_OneShot::AkEvent_OneShot_C::get_EventName() {
    return (void*)((uintptr_t)this + 0x58);
}
void _Game_Audio_Blueprint_Notify_AkEvent_OneShot::AkEvent_OneShot_C::set_Occlusion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Audio_Blueprint_Notify_AkEvent_OneShot::AkEvent_OneShot_C::get_Location_Offset() {
    return (void*)((uintptr_t)this + 0x6c);
}
float& _Game_Audio_Blueprint_Notify_AkEvent_OneShot::AkEvent_OneShot_C::get_Occlusion_Interp() {
    return *(float*)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Game_Audio_Blueprint_Notify_AkEvent_OneShot::AkEvent_OneShot_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Audio/Blueprint/Notify/AkEvent_OneShot.AkEvent_OneShot_C");
    return result;
}
bool _Game_Audio_Blueprint_Notify_AkEvent_OneShot::AkEvent_OneShot_C::Received_Notify0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation) {
    return;
}
