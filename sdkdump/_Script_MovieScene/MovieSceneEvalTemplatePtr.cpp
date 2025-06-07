#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEvalTemplatePtr.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneEvalTemplatePtr::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneEvalTemplatePtr");
    return result;
}
