#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieSceneTracks\MovieScenePropertyTrack.hpp"
#include "MovieScene2DTransformTrack.hpp"
_Script_CoreUObject::Class* _Script_UMG::MovieScene2DTransformTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.MovieScene2DTransformTrack");
    return result;
}
