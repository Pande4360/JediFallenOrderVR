#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneGeometryCacheSection.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
void* _Script_GeometryCacheTracks::MovieSceneGeometryCacheSection::get_Params() {
    return (void*)((uintptr_t)this + 0xe0);
}
_Script_CoreUObject::Class* _Script_GeometryCacheTracks::MovieSceneGeometryCacheSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GeometryCacheTracks.MovieSceneGeometryCacheSection");
    return result;
}
