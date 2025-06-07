#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundBase.hpp"
#include "SoundCue.hpp"
#include "SoundNode.hpp"
bool _Script_Engine::SoundCue::get_bOverrideAttenuation() {
    return (*(uint8_t*)((uintptr_t)this + 0xa8 + 0)) & 1 != 0;
}
float& _Script_Engine::SoundCue::get_PitchMultiplier() {
    return *(float*)((uintptr_t)this + 0xbc);
}
void _Script_Engine::SoundCue::set_bOverrideAttenuation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SoundCue::get_bExcludeFromRandomNodeBranchCulling() {
    return (*(uint8_t*)((uintptr_t)this + 0xa8 + 0)) & 2 != 0;
}
float& _Script_Engine::SoundCue::get_VolumeMultiplier() {
    return *(float*)((uintptr_t)this + 0xb8);
}
void _Script_Engine::SoundCue::set_bExcludeFromRandomNodeBranchCulling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::SoundCue::get_AttenuationOverrides() {
    return (void*)((uintptr_t)this + 0xc0);
}
_Script_Engine::SoundNode*& _Script_Engine::SoundCue::get_FirstNode() {
    return *(_Script_Engine::SoundNode**)((uintptr_t)this + 0xb0);
}
float& _Script_Engine::SoundCue::get_SubtitlePriority() {
    return *(float*)((uintptr_t)this + 0x368);
}
_Script_CoreUObject::Class* _Script_Engine::SoundCue::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundCue");
    return result;
}
