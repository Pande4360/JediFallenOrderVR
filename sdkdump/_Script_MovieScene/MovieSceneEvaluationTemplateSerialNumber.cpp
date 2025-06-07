#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEvaluationTemplateSerialNumber.hpp"
void* _Script_MovieScene::MovieSceneEvaluationTemplateSerialNumber::get_Value() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneEvaluationTemplateSerialNumber::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneEvaluationTemplateSerialNumber");
    return result;
}
