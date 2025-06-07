#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSignedObject.hpp"
#include "MovieSceneTrack.hpp"
void* _Script_MovieScene::MovieSceneTrack::get_EvalOptions() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneTrack");
    return result;
}
