#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimNotify.hpp"
#include "AnimNotify_PlaySound.hpp"
#include "SoundBase.hpp"
_Script_Engine::SoundBase*& _Script_Engine::AnimNotify_PlaySound::get_Sound() {
    return *(_Script_Engine::SoundBase**)((uintptr_t)this + 0x38);
}
float& _Script_Engine::AnimNotify_PlaySound::get_VolumeMultiplier() {
    return *(float*)((uintptr_t)this + 0x40);
}
bool _Script_Engine::AnimNotify_PlaySound::get_bFollow() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
float& _Script_Engine::AnimNotify_PlaySound::get_PitchMultiplier() {
    return *(float*)((uintptr_t)this + 0x44);
}
void* _Script_Engine::AnimNotify_PlaySound::get_AttachName() {
    return (void*)((uintptr_t)this + 0x50);
}
void _Script_Engine::AnimNotify_PlaySound::set_bFollow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::AnimNotify_PlaySound::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimNotify_PlaySound");
    return result;
}
