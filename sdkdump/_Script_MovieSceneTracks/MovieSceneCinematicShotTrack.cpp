#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneSubTrack.hpp"
#include "MovieSceneCinematicShotTrack.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneCinematicShotTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneCinematicShotTrack");
    return result;
}
