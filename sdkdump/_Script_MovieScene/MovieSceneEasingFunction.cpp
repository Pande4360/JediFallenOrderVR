#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "MovieSceneEasingFunction.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneEasingFunction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneEasingFunction");
    return result;
}
float _Script_MovieScene::MovieSceneEasingFunction::OnEvaluate(float Interp) {
    return;
}
