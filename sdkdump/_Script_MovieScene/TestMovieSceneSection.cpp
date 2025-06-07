#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSection.hpp"
#include "TestMovieSceneSection.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::TestMovieSceneSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.TestMovieSceneSection");
    return result;
}
