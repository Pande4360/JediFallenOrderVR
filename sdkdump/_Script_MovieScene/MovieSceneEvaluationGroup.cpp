#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEvaluationGroup.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneEvaluationGroup::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneEvaluationGroup");
    return result;
}
void* _Script_MovieScene::MovieSceneEvaluationGroup::get_LUTIndices() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneEvaluationGroup::get_SegmentPtrLUT() {
    return (void*)((uintptr_t)this + 0x10);
}
