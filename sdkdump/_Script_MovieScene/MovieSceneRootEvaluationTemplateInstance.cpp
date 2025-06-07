#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneRootEvaluationTemplateInstance.hpp"
void* _Script_MovieScene::MovieSceneRootEvaluationTemplateInstance::get_DirectorInstances() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneRootEvaluationTemplateInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneRootEvaluationTemplateInstance");
    return result;
}
