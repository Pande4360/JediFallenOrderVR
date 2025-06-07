#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEulerTransformTrack.hpp"
#include "MovieScenePropertyTrack.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneEulerTransformTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneEulerTransformTrack");
    return result;
}
