#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneNameableTrack.hpp"
#include "MovieSceneCameraAnimTrack.hpp"
void* _Script_MovieSceneTracks::MovieSceneCameraAnimTrack::get_CameraAnimSections() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneCameraAnimTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneCameraAnimTrack");
    return result;
}
