#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneFrameRange.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneFrameRange::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneFrameRange");
    return result;
}
