#include "..\FUObjectArray.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "AnimNotifyState_RsFootstep.hpp"
#include "RsCharacterDefinition.hpp"
bool _Script_RsGameTechRT::AnimNotifyState_RsFootstep::get_bLockFootPosition() {
    return (*(uint8_t*)((uintptr_t)this + 0x32 + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::AnimNotifyState_RsFootstep::get_FootType() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_RsGameTechRT::AnimNotifyState_RsFootstep::get_bSpawnFootEffects() {
    return (*(uint8_t*)((uintptr_t)this + 0x31 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::AnimNotifyState_RsFootstep::set_bSpawnFootEffects(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x31 + 0);
    *(uint8_t*)((uintptr_t)this + 0x31 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_AkAudio::AkAudioEvent*& _Script_RsGameTechRT::AnimNotifyState_RsFootstep::get_AudioOverrideEvent() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x38);
}
void _Script_RsGameTechRT::AnimNotifyState_RsFootstep::set_bLockFootPosition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x32 + 0);
    *(uint8_t*)((uintptr_t)this + 0x32 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::AnimNotifyState_RsFootstep::get_bBeginAudioEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x33 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::AnimNotifyState_RsFootstep::set_bBeginAudioEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x33 + 0);
    *(uint8_t*)((uintptr_t)this + 0x33 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_AkAudio::AkAudioEvent*& _Script_RsGameTechRT::AnimNotifyState_RsFootstep::get_FoliageAudioOverrideEvent() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x40);
}
_Script_RsGameTechRT::RsCharacterDefinition*& _Script_RsGameTechRT::AnimNotifyState_RsFootstep::get_EditorCharacterDefinitionOverride() {
    return *(_Script_RsGameTechRT::RsCharacterDefinition**)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::AnimNotifyState_RsFootstep::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.AnimNotifyState_RsFootstep");
    return result;
}
