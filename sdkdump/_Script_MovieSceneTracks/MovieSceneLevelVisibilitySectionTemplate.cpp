#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
#include "MovieSceneLevelVisibilitySectionTemplate.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneLevelVisibilitySectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneLevelVisibilitySectionTemplate");
    return result;
}
void* _Script_MovieSceneTracks::MovieSceneLevelVisibilitySectionTemplate::get_Visibility() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_MovieSceneTracks::MovieSceneLevelVisibilitySectionTemplate::get_LevelNames() {
    return (void*)((uintptr_t)this + 0x28);
}
