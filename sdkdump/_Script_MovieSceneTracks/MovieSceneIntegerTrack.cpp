#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneIntegerTrack.hpp"
#include "MovieScenePropertyTrack.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneIntegerTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneIntegerTrack");
    return result;
}
