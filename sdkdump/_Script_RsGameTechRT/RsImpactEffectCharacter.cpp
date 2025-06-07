#include "..\FUObjectArray.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "RsImpactEffectCharacter.hpp"
void _Script_RsGameTechRT::RsImpactEffectCharacter::set_bUseDefaultSound(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsImpactEffectCharacter::get_bUseDefaultSound() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
bool _Script_RsGameTechRT::RsImpactEffectCharacter::get_bUseDefaultVFX() {
    return (*(uint8_t*)((uintptr_t)this + 0x9 + 0)) & 1 != 0;
}
_Script_AkAudio::AkAudioEvent*& _Script_RsGameTechRT::RsImpactEffectCharacter::get_ImpactSound() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x10);
}
void _Script_RsGameTechRT::RsImpactEffectCharacter::set_bUseDefaultVFX(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsImpactEffectCharacter::get_ImpactVFX() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsImpactEffectCharacter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsImpactEffectCharacter");
    return result;
}
