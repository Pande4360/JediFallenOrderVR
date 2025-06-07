#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieScene3DConstraintTrack.hpp"
#include "MovieScene3DPathTrack.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieScene3DPathTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieScene3DPathTrack");
    return result;
}
