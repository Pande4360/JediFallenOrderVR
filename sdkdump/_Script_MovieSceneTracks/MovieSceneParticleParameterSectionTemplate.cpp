#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneParameterSectionTemplate.hpp"
#include "MovieSceneParticleParameterSectionTemplate.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneParticleParameterSectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneParticleParameterSectionTemplate");
    return result;
}
