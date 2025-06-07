#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneFadeTrack.hpp"
#include "MovieSceneFloatTrack.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneFadeTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneFadeTrack");
    return result;
}
