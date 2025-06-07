#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEvaluationGroupLUTIndex.hpp"
int32_t& _Script_MovieScene::MovieSceneEvaluationGroupLUTIndex::get_NumEvalPtrs() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
int32_t& _Script_MovieScene::MovieSceneEvaluationGroupLUTIndex::get_NumInitPtrs() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
int32_t& _Script_MovieScene::MovieSceneEvaluationGroupLUTIndex::get_LUTOffset() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneEvaluationGroupLUTIndex::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneEvaluationGroupLUTIndex");
    return result;
}
