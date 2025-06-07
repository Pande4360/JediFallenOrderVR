#include "..\FUObjectArray.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "RsRagdollSoundEvents.hpp"
void* _Script_RsGameTechRT::RsRagdollSoundEvents::get_BonesToPlayCollisionSounds() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_AkAudio::AkAudioEvent*& _Script_RsGameTechRT::RsRagdollSoundEvents::get_RollingStop() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x48);
}
bool _Script_RsGameTechRT::RsRagdollSoundEvents::get_AudioEventsDisabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsRagdollSoundEvents::set_AudioEventsDisabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_AkAudio::AkAudioEvent*& _Script_RsGameTechRT::RsRagdollSoundEvents::get_ImpactEvent() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x38);
}
_Script_AkAudio::AkAudioEvent*& _Script_RsGameTechRT::RsRagdollSoundEvents::get_RollingLoop() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x40);
}
void* _Script_RsGameTechRT::RsRagdollSoundEvents::get_BonesExcludedFromPlayingCollisionSounds() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsRagdollSoundEvents::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsRagdollSoundEvents");
    return result;
}
