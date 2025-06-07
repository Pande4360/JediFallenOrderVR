#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneNameableTrack.hpp"
#include "MovieSceneTrack.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneNameableTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneNameableTrack");
    return result;
}
