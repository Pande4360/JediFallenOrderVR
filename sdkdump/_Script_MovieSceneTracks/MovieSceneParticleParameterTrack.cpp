#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneNameableTrack.hpp"
#include "MovieSceneParticleParameterTrack.hpp"
void* _Script_MovieSceneTracks::MovieSceneParticleParameterTrack::get_Sections() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneParticleParameterTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneParticleParameterTrack");
    return result;
}
