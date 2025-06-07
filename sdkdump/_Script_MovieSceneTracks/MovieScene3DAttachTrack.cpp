#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieScene3DAttachTrack.hpp"
#include "MovieScene3DConstraintTrack.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieScene3DAttachTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieScene3DAttachTrack");
    return result;
}
