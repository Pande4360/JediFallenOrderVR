#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneGeometryCacheTrack.hpp"
#include "..\_Script_MovieScene\MovieSceneNameableTrack.hpp"
void* _Script_GeometryCacheTracks::MovieSceneGeometryCacheTrack::get_AnimationSections() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_GeometryCacheTracks::MovieSceneGeometryCacheTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GeometryCacheTracks.MovieSceneGeometryCacheTrack");
    return result;
}
