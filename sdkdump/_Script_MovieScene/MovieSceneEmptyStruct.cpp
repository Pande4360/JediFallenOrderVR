#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEmptyStruct.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneEmptyStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneEmptyStruct");
    return result;
}
