#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEvalTemplate.hpp"
#include "MovieSceneEvalTemplateBase.hpp"
#include "MovieSceneSection.hpp"
void* _Script_MovieScene::MovieSceneEvalTemplate::get_CompletionMode() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_MovieScene::MovieSceneSection*& _Script_MovieScene::MovieSceneEvalTemplate::get_SourceSection() {
    return *(_Script_MovieScene::MovieSceneSection**)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneEvalTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneEvalTemplate");
    return result;
}
