#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimSequence.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
#include "MovieSceneSkeletalAnimationSection.hpp"
void* _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::get_Params() {
    return (void*)((uintptr_t)this + 0xe0);
}
_Script_Engine::AnimSequence*& _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::get_AnimSequence() {
    return *(_Script_Engine::AnimSequence**)((uintptr_t)this + 0x1a8);
}
_Script_Engine::AnimSequenceBase*& _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::get_Animation() {
    return *(_Script_Engine::AnimSequenceBase**)((uintptr_t)this + 0x1b0);
}
void _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::set_bReverse(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::get_StartOffset() {
    return *(float*)((uintptr_t)this + 0x1b8);
}
float& _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::get_EndOffset() {
    return *(float*)((uintptr_t)this + 0x1bc);
}
bool _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::get_bReverse() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c4 + 0)) & 1 != 0;
}
float& _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::get_Playrate() {
    return *(float*)((uintptr_t)this + 0x1c0);
}
void* _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::get_SlotName() {
    return (void*)((uintptr_t)this + 0x1c8);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneSkeletalAnimationSection");
    return result;
}
