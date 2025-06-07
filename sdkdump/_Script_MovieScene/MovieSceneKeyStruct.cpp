#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneKeyStruct.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneKeyStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneKeyStruct");
    return result;
}
