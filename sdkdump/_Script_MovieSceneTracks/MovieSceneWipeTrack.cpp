#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneFloatTrack.hpp"
#include "MovieSceneWipeTrack.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneWipeTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneWipeTrack");
    return result;
}
