#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneByteChannel.hpp"
#include "MovieSceneParticleChannel.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneParticleChannel::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneParticleChannel");
    return result;
}
