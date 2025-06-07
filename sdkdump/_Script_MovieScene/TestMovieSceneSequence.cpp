#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieScene.hpp"
#include "MovieSceneSequence.hpp"
#include "TestMovieSceneSequence.hpp"
_Script_MovieScene::MovieScene*& _Script_MovieScene::TestMovieSceneSequence::get_MovieScene() {
    return *(_Script_MovieScene::MovieScene**)((uintptr_t)this + 0x348);
}
_Script_CoreUObject::Class* _Script_MovieScene::TestMovieSceneSequence::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.TestMovieSceneSequence");
    return result;
}
