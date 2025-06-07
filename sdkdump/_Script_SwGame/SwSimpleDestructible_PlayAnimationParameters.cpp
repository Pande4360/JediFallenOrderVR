#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimationAsset.hpp"
#include "SwSimpleDestructible_PlayAnimationParameters.hpp"
bool _Script_SwGame::SwSimpleDestructible_PlayAnimationParameters::get_Activate() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
bool _Script_SwGame::SwSimpleDestructible_PlayAnimationParameters::get_StartPhysicsOnThisComponentAtTheEndOfAnimation() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
void _Script_SwGame::SwSimpleDestructible_PlayAnimationParameters::set_Activate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwSimpleDestructible_PlayAnimationParameters::get_SkeletalMeshComponentName() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SwGame::SwSimpleDestructible_PlayAnimationParameters::get_PlayOnlyForSpecificDamageSourceType() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_Engine::AnimationAsset*& _Script_SwGame::SwSimpleDestructible_PlayAnimationParameters::get_AnimationToPlay() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x18);
}
void _Script_SwGame::SwSimpleDestructible_PlayAnimationParameters::set_StartPhysicsOnThisComponentAtTheEndOfAnimation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwSimpleDestructible_PlayAnimationParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwSimpleDestructible_PlayAnimationParameters");
    return result;
}
