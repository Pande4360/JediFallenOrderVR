#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
#include "MovieSceneAdditiveCameraAnimationTemplate.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneAdditiveCameraAnimationTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneAdditiveCameraAnimationTemplate");
    return result;
}
