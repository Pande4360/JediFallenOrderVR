#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneGeometryCacheSectionTemplate.hpp"
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
_Script_CoreUObject::Class* _Script_GeometryCacheTracks::MovieSceneGeometryCacheSectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplate");
    return result;
}
void* _Script_GeometryCacheTracks::MovieSceneGeometryCacheSectionTemplate::get_Params() {
    return (void*)((uintptr_t)this + 0x20);
}
