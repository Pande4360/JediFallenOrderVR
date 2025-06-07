#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieSceneTracks\MovieScenePropertyTrack.hpp"
#include "MovieSceneMarginTrack.hpp"
_Script_CoreUObject::Class* _Script_UMG::MovieSceneMarginTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UMG.MovieSceneMarginTrack");
    return result;
}
