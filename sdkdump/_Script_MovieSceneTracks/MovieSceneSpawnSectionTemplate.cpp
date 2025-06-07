#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
#include "MovieSceneSpawnSectionTemplate.hpp"
void* _Script_MovieSceneTracks::MovieSceneSpawnSectionTemplate::get_Curve() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneSpawnSectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneSpawnSectionTemplate");
    return result;
}
