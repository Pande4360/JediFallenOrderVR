#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "MovieSceneTransformOrigin.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneTransformOrigin::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneTransformOrigin");
    return result;
}
_Script_CoreUObject::Transform _Script_MovieSceneTracks::MovieSceneTransformOrigin::BP_GetTransformOrigin() {
    return;
}
