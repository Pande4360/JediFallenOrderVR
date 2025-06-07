#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEvaluationFieldSegmentPtr.hpp"
#include "MovieSceneEvaluationFieldTrackPtr.hpp"
void* _Script_MovieScene::MovieSceneEvaluationFieldSegmentPtr::get_SegmentID() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneEvaluationFieldSegmentPtr::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneEvaluationFieldSegmentPtr");
    return result;
}
