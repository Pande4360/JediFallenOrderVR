#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieScenePropertyTrack.hpp"
#include "MovieSceneStringTrack.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneStringTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneStringTrack");
    return result;
}
