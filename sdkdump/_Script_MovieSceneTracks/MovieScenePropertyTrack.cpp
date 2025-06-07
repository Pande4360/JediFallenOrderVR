#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneNameableTrack.hpp"
#include "MovieScenePropertyTrack.hpp"
void* _Script_MovieSceneTracks::MovieScenePropertyTrack::get_PropertyName() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_MovieSceneTracks::MovieScenePropertyTrack::get_PropertyPath() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_MovieSceneTracks::MovieScenePropertyTrack::get_Sections() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieScenePropertyTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieScenePropertyTrack");
    return result;
}
