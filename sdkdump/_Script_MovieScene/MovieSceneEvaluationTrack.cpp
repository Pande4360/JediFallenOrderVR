#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEvaluationTrack.hpp"
#include "MovieSceneTrack.hpp"
void* _Script_MovieScene::MovieSceneEvaluationTrack::get_EvaluationTree() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_MovieScene::MovieSceneEvaluationTrack::get_ObjectBindingId() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneEvaluationTrack::get_EvaluationPriority() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_MovieScene::MovieSceneTrack*& _Script_MovieScene::MovieSceneEvaluationTrack::get_SourceTrack() {
    return *(_Script_MovieScene::MovieSceneTrack**)((uintptr_t)this + 0x38);
}
void* _Script_MovieScene::MovieSceneEvaluationTrack::get_EvaluationMethod() {
    return (void*)((uintptr_t)this + 0x12);
}
void* _Script_MovieScene::MovieSceneEvaluationTrack::get_ChildTemplates() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_MovieScene::MovieSceneEvaluationTrack::get_Segments() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_MovieScene::MovieSceneEvaluationTrack::get_TrackTemplate() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_MovieScene::MovieSceneEvaluationTrack::get_EvaluationGroup() {
    return (void*)((uintptr_t)this + 0xe8);
}
bool _Script_MovieScene::MovieSceneEvaluationTrack::get_bEvaluateInPreroll() {
    return (*(uint8_t*)((uintptr_t)this + 0xf0 + 0)) & 1 != 0;
}
void _Script_MovieScene::MovieSceneEvaluationTrack::set_bEvaluateInPreroll(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_MovieScene::MovieSceneEvaluationTrack::set_bEvaluateInPostroll(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_MovieScene::MovieSceneEvaluationTrack::get_bEvaluateInPostroll() {
    return (*(uint8_t*)((uintptr_t)this + 0xf0 + 0)) & 2 != 0;
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneEvaluationTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneEvaluationTrack");
    return result;
}
