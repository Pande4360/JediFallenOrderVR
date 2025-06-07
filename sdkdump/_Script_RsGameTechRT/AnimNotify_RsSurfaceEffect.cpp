#include "..\FUObjectArray.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotify.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "AnimNotify_RsSurfaceEffect.hpp"
_Script_Engine::DataTable*& _Script_RsGameTechRT::AnimNotify_RsSurfaceEffect::get_EffectTable() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0x38);
}
float& _Script_RsGameTechRT::AnimNotify_RsSurfaceEffect::get_RayDistance() {
    return *(float*)((uintptr_t)this + 0x64);
}
bool _Script_RsGameTechRT::AnimNotify_RsSurfaceEffect::get_bMirrorDecal() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::AnimNotify_RsSurfaceEffect::get_SocketName() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_RsGameTechRT::AnimNotify_RsSurfaceEffect::get_RayDirection() {
    return (void*)((uintptr_t)this + 0x58);
}
void _Script_RsGameTechRT::AnimNotify_RsSurfaceEffect::set_bMirrorDecal(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::AnimNotify_RsSurfaceEffect::get_DecalRotation() {
    return (void*)((uintptr_t)this + 0x4c);
}
float& _Script_RsGameTechRT::AnimNotify_RsSurfaceEffect::get_Radius() {
    return *(float*)((uintptr_t)this + 0x68);
}
_Script_AkAudio::AkAudioEvent*& _Script_RsGameTechRT::AnimNotify_RsSurfaceEffect::get_SoundEvent() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x70);
}
_Script_AkAudio::AkAudioEvent*& _Script_RsGameTechRT::AnimNotify_RsSurfaceEffect::get_FoliageSoundEvent() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x78);
}
bool _Script_RsGameTechRT::AnimNotify_RsSurfaceEffect::get_OcclusionEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::AnimNotify_RsSurfaceEffect::set_OcclusionEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::AnimNotify_RsSurfaceEffect::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.AnimNotify_RsSurfaceEffect");
    return result;
}
