#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneOrderedEvaluationKey.hpp"
void* _Script_MovieScene::MovieSceneOrderedEvaluationKey::get_Key() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneOrderedEvaluationKey::get_EvaluationIndex() {
    return (void*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneOrderedEvaluationKey::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneOrderedEvaluationKey");
    return result;
}
