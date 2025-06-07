#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimationAsset.hpp"
#include "RsSyncData.hpp"
bool _Script_RsGameTechRT::RsSyncData::get_bUseHeroOffGroundFallback() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
bool _Script_RsGameTechRT::RsSyncData::get_bDontUseAsFallback() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsSyncData::set_bDontUseAsFallback(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsGameTechRT::RsSyncData::set_bUseHeroOffGroundFallback(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsGameTechRT::RsSyncData::set_BreakOnMontageBlendingOut(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::AnimationAsset*& _Script_RsGameTechRT::RsSyncData::get_Animation() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x8);
}
bool _Script_RsGameTechRT::RsSyncData::get_BreakOnMontageBlendingOut() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
bool _Script_RsGameTechRT::RsSyncData::get_ContinueAnimationAfterSync() {
    return (*(uint8_t*)((uintptr_t)this + 0x11 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsSyncData::set_ContinueAnimationAfterSync(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x11 + 0);
    *(uint8_t*)((uintptr_t)this + 0x11 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsSyncData::get_DeathAnimationData() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_RsGameTechRT::RsSyncData::get_SocketName() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsSyncData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsSyncData");
    return result;
}
void* _Script_RsGameTechRT::RsSyncData::get_ComponentName() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_RsGameTechRT::RsSyncData::get_OffsetTransform() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_RsGameTechRT::RsSyncData::get_PutInState() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_RsGameTechRT::RsSyncData::get_CharacterToSyncDataMappingNative() {
    return (void*)((uintptr_t)this + 0xa8);
}
