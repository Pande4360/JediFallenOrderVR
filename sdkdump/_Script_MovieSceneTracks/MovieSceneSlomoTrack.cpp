#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneFloatTrack.hpp"
#include "MovieSceneSlomoTrack.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneSlomoTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneSlomoTrack");
    return result;
}
