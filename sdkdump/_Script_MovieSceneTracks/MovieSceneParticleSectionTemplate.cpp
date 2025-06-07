#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
#include "MovieSceneParticleSectionTemplate.hpp"
void* _Script_MovieSceneTracks::MovieSceneParticleSectionTemplate::get_ParticleKeys() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneParticleSectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneParticleSectionTemplate");
    return result;
}
