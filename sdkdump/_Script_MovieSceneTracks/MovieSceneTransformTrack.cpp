#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieScenePropertyTrack.hpp"
#include "MovieSceneTransformTrack.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneTransformTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneTransformTrack");
    return result;
}
