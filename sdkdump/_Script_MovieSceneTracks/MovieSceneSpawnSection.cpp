#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneBoolSection.hpp"
#include "MovieSceneSpawnSection.hpp"
void* _Script_MovieSceneTracks::MovieSceneSpawnSection::get_Params() {
    return (void*)((uintptr_t)this + 0x1a8);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneSpawnSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneSpawnSection");
    return result;
}
