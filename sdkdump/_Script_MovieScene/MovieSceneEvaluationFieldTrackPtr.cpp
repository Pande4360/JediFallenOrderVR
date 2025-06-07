#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEvaluationFieldTrackPtr.hpp"
void* _Script_MovieScene::MovieSceneEvaluationFieldTrackPtr::get_SequenceID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneEvaluationFieldTrackPtr::get_TrackIdentifier() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneEvaluationFieldTrackPtr::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneEvaluationFieldTrackPtr");
    return result;
}
