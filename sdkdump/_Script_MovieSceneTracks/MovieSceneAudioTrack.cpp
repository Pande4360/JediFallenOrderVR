#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneNameableTrack.hpp"
#include "MovieSceneAudioTrack.hpp"
void* _Script_MovieSceneTracks::MovieSceneAudioTrack::get_AudioSections() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneAudioTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneAudioTrack");
    return result;
}
