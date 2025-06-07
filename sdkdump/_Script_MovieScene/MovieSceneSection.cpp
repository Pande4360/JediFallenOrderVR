#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSection.hpp"
#include "MovieSceneSignedObject.hpp"
void* _Script_MovieScene::MovieSceneSection::get_EvalOptions() {
    return (void*)((uintptr_t)this + 0x50);
}
bool _Script_MovieScene::MovieSceneSection::get_bIsActive() {
    return (*(uint8_t*)((uintptr_t)this + 0xb0 + 0)) & 1 != 0;
}
void* _Script_MovieScene::MovieSceneSection::get_Easing() {
    return (void*)((uintptr_t)this + 0x58);
}
int32_t& _Script_MovieScene::MovieSceneSection::get_OverlapPriority() {
    return *(int32_t*)((uintptr_t)this + 0xac);
}
void* _Script_MovieScene::MovieSceneSection::get_SectionRange() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_MovieScene::MovieSceneSection::get_PreRollFrames() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_MovieScene::MovieSceneSection::get_PostRollFrames() {
    return (void*)((uintptr_t)this + 0xa4);
}
int32_t& _Script_MovieScene::MovieSceneSection::get_RowIndex() {
    return *(int32_t*)((uintptr_t)this + 0xa8);
}
void _Script_MovieScene::MovieSceneSection::set_bIsActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieScene::MovieSceneSection::get_bIsLocked() {
    return (*(uint8_t*)((uintptr_t)this + 0xb0 + 0)) & 2 != 0;
}
void _Script_MovieScene::MovieSceneSection::set_bIsLocked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_MovieScene::MovieSceneSection::get_StartTime() {
    return *(float*)((uintptr_t)this + 0xb4);
}
float& _Script_MovieScene::MovieSceneSection::get_EndTime() {
    return *(float*)((uintptr_t)this + 0xb8);
}
float& _Script_MovieScene::MovieSceneSection::get_PrerollTime() {
    return *(float*)((uintptr_t)this + 0xbc);
}
float& _Script_MovieScene::MovieSceneSection::get_PostrollTime() {
    return *(float*)((uintptr_t)this + 0xc0);
}
bool _Script_MovieScene::MovieSceneSection::get_bIsInfinite() {
    return (*(uint8_t*)((uintptr_t)this + 0xc4 + 0)) & 1 != 0;
}
void _Script_MovieScene::MovieSceneSection::set_bIsInfinite(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieScene::MovieSceneSection::get_bSupportsInfiniteRange() {
    return (*(uint8_t*)((uintptr_t)this + 0xc8 + 0)) & 1 != 0;
}
void _Script_MovieScene::MovieSceneSection::set_bSupportsInfiniteRange(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MovieScene::MovieSceneSection::get_BlendType() {
    return (void*)((uintptr_t)this + 0xc9);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneSection");
    return result;
}
