#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneNameableTrack.hpp"
#include "MovieSceneSubTrack.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSubTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneSubTrack");
    return result;
}
void* _Script_MovieScene::MovieSceneSubTrack::get_Sections() {
    return (void*)((uintptr_t)this + 0x58);
}
