#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
#include "MovieSceneEventSection.hpp"
void* _Script_MovieSceneTracks::MovieSceneEventSection::get_Events() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_MovieSceneTracks::MovieSceneEventSection::get_EventData() {
    return (void*)((uintptr_t)this + 0x148);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneEventSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneEventSection");
    return result;
}
