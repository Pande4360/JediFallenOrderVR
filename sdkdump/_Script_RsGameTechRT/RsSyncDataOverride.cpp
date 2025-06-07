#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimationAsset.hpp"
#include "RsSyncDataOverride.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsSyncDataOverride::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsSyncDataOverride");
    return result;
}
_Script_Engine::AnimationAsset*& _Script_RsGameTechRT::RsSyncDataOverride::get_Animation() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsSyncDataOverride::get_SocketName() {
    return (void*)((uintptr_t)this + 0x8);
}
void _Script_RsGameTechRT::RsSyncDataOverride::set_BreakOnMontageBlendingOut(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsSyncDataOverride::get_BreakOnMontageBlendingOut() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
bool _Script_RsGameTechRT::RsSyncDataOverride::get_ContinueAnimationAfterSync() {
    return (*(uint8_t*)((uintptr_t)this + 0x11 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsSyncDataOverride::set_ContinueAnimationAfterSync(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x11 + 0);
    *(uint8_t*)((uintptr_t)this + 0x11 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsSyncDataOverride::get_DeathAnimationData() {
    return (void*)((uintptr_t)this + 0x18);
}
