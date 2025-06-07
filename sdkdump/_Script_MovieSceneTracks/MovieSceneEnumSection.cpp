#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
#include "MovieSceneEnumSection.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneEnumSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneEnumSection");
    return result;
}
void* _Script_MovieSceneTracks::MovieSceneEnumSection::get_EnumCurve() {
    return (void*)((uintptr_t)this + 0xe0);
}
