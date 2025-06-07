#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
#include "MovieSceneLevelVisibilitySection.hpp"
void* _Script_MovieSceneTracks::MovieSceneLevelVisibilitySection::get_Visibility() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_MovieSceneTracks::MovieSceneLevelVisibilitySection::get_LevelNames() {
    return (void*)((uintptr_t)this + 0xe8);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneLevelVisibilitySection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneLevelVisibilitySection");
    return result;
}
