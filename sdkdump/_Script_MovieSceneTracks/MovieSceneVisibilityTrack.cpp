#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneBoolTrack.hpp"
#include "MovieSceneVisibilityTrack.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneVisibilityTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneVisibilityTrack");
    return result;
}
