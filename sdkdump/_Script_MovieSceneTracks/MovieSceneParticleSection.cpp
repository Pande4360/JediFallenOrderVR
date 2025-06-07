#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
#include "MovieSceneParticleSection.hpp"
void* _Script_MovieSceneTracks::MovieSceneParticleSection::get_ParticleKeys() {
    return (void*)((uintptr_t)this + 0xe0);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneParticleSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneParticleSection");
    return result;
}
