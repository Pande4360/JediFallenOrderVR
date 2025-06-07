#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEvalTemplateBase.hpp"
#include "MovieSceneTrackImplementation.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneTrackImplementation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneTrackImplementation");
    return result;
}
