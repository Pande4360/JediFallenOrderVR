#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEvaluationMetaData.hpp"
void* _Script_MovieScene::MovieSceneEvaluationMetaData::get_ActiveEntities() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_MovieScene::MovieSceneEvaluationMetaData::get_ActiveSequences() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneEvaluationMetaData::get_SubTemplateSerialNumbers() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneEvaluationMetaData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneEvaluationMetaData");
    return result;
}
