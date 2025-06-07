#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEventParameters.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneEventParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneEventParameters");
    return result;
}
