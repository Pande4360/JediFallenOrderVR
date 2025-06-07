#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEvaluationKey.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneEvaluationKey::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneEvaluationKey");
    return result;
}
void* _Script_MovieScene::MovieSceneEvaluationKey::get_SequenceID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneEvaluationKey::get_TrackIdentifier() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_MovieScene::MovieSceneEvaluationKey::get_SectionIndex() {
    return (void*)((uintptr_t)this + 0x8);
}
