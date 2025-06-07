#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
#include "MovieSceneFloatSection.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneFloatSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneFloatSection");
    return result;
}
void* _Script_MovieSceneTracks::MovieSceneFloatSection::get_FloatCurve() {
    return (void*)((uintptr_t)this + 0xe0);
}
