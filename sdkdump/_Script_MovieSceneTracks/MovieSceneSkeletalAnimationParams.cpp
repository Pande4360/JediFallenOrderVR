#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "MovieSceneSkeletalAnimationParams.hpp"
_Script_Engine::AnimSequenceBase*& _Script_MovieSceneTracks::MovieSceneSkeletalAnimationParams::get_Animation() {
    return *(_Script_Engine::AnimSequenceBase**)((uintptr_t)this + 0x0);
}
float& _Script_MovieSceneTracks::MovieSceneSkeletalAnimationParams::get_StartOffset() {
    return *(float*)((uintptr_t)this + 0x8);
}
void* _Script_MovieSceneTracks::MovieSceneSkeletalAnimationParams::get_SlotName() {
    return (void*)((uintptr_t)this + 0x18);
}
bool _Script_MovieSceneTracks::MovieSceneSkeletalAnimationParams::get_bReverse() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
float& _Script_MovieSceneTracks::MovieSceneSkeletalAnimationParams::get_EndOffset() {
    return *(float*)((uintptr_t)this + 0xc);
}
void _Script_MovieSceneTracks::MovieSceneSkeletalAnimationParams::set_bReverse(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_MovieSceneTracks::MovieSceneSkeletalAnimationParams::get_Playrate() {
    return *(float*)((uintptr_t)this + 0x10);
}
void _Script_MovieSceneTracks::MovieSceneSkeletalAnimationParams::set_bSkipAnimNotifiers(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MovieSceneTracks::MovieSceneSkeletalAnimationParams::get_Weight() {
    return (void*)((uintptr_t)this + 0x20);
}
bool _Script_MovieSceneTracks::MovieSceneSkeletalAnimationParams::get_bSkipAnimNotifiers() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 1 != 0;
}
bool _Script_MovieSceneTracks::MovieSceneSkeletalAnimationParams::get_bUseDefaultRootMotionSettings() {
    return (*(uint8_t*)((uintptr_t)this + 0xc4 + 0)) & 1 != 0;
}
void _Script_MovieSceneTracks::MovieSceneSkeletalAnimationParams::set_bUseDefaultRootMotionSettings(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneSkeletalAnimationParams::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneSkeletalAnimationParams");
    return result;
}
