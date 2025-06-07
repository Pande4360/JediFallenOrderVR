#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimationAsset.hpp"
#include "SingleAnimationPlayData.hpp"
bool _Script_Engine::SingleAnimationPlayData::get_bSavedPlaying() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 2 != 0;
}
_Script_Engine::AnimationAsset*& _Script_Engine::SingleAnimationPlayData::get_AnimToPlay() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x0);
}
float& _Script_Engine::SingleAnimationPlayData::get_SavedPosition() {
    return *(float*)((uintptr_t)this + 0xc);
}
bool _Script_Engine::SingleAnimationPlayData::get_bSavedLooping() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_Engine::SingleAnimationPlayData::set_bSavedLooping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::SingleAnimationPlayData::set_bSavedPlaying(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::SingleAnimationPlayData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SingleAnimationPlayData");
    return result;
}
float& _Script_Engine::SingleAnimationPlayData::get_SavedPlayRate() {
    return *(float*)((uintptr_t)this + 0x10);
}
