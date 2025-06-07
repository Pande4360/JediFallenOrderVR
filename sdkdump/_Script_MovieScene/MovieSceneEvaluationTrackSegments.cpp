#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEvaluationTrackSegments.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneEvaluationTrackSegments::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneEvaluationTrackSegments");
    return result;
}
void* _Script_MovieScene::MovieSceneEvaluationTrackSegments::get_SegmentIdentifierToIndex() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneEvaluationTrackSegments::get_SortedSegments() {
    return (void*)((uintptr_t)this + 0x10);
}
