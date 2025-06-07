#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneTrackImplementationPtr.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneTrackImplementationPtr::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneTrackImplementationPtr");
    return result;
}
