#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneTrack.hpp"
#include "MovieSceneSpawnTrack.hpp"
void* _Script_MovieSceneTracks::MovieSceneSpawnTrack::get_Sections() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_MovieSceneTracks::MovieSceneSpawnTrack::get_ObjectGuid() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneSpawnTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneSpawnTrack");
    return result;
}
