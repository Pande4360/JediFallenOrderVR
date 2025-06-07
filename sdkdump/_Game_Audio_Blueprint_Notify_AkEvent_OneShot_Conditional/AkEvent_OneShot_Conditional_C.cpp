#include "..\FUObjectArray.hpp"
#include "AkEvent_OneShot_Conditional_C.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\RsConditionalAnimNotify.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
void _Game_Audio_Blueprint_Notify_AkEvent_OneShot_Conditional::AkEvent_OneShot_Conditional_C::set_Follow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x98 + 0);
    *(uint8_t*)((uintptr_t)this + 0x98 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Audio_Blueprint_Notify_AkEvent_OneShot_Conditional::AkEvent_OneShot_Conditional_C::get_Attach_Name() {
    return (void*)((uintptr_t)this + 0x80);
}
_Script_AkAudio::AkAudioEvent*& _Game_Audio_Blueprint_Notify_AkEvent_OneShot_Conditional::AkEvent_OneShot_Conditional_C::get_Event() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x90);
}
bool _Game_Audio_Blueprint_Notify_AkEvent_OneShot_Conditional::AkEvent_OneShot_Conditional_C::get_Follow() {
    return (*(uint8_t*)((uintptr_t)this + 0x98 + 0)) & 1 != 0;
}
void _Game_Audio_Blueprint_Notify_AkEvent_OneShot_Conditional::AkEvent_OneShot_Conditional_C::set_Occlusion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Audio_Blueprint_Notify_AkEvent_OneShot_Conditional::AkEvent_OneShot_Conditional_C::get_EventName() {
    return (void*)((uintptr_t)this + 0xa0);
}
bool _Game_Audio_Blueprint_Notify_AkEvent_OneShot_Conditional::AkEvent_OneShot_Conditional_C::get_Occlusion() {
    return (*(uint8_t*)((uintptr_t)this + 0xb0 + 0)) & 1 != 0;
}
void* _Game_Audio_Blueprint_Notify_AkEvent_OneShot_Conditional::AkEvent_OneShot_Conditional_C::get_Location_Offset() {
    return (void*)((uintptr_t)this + 0xb4);
}
_Script_CoreUObject::Class* _Game_Audio_Blueprint_Notify_AkEvent_OneShot_Conditional::AkEvent_OneShot_Conditional_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Audio/Blueprint/Notify/AkEvent_OneShot_Conditional.AkEvent_OneShot_Conditional_C");
    return result;
}
bool _Game_Audio_Blueprint_Notify_AkEvent_OneShot_Conditional::AkEvent_OneShot_Conditional_C::Received_Notify(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation) {
    return;
}
