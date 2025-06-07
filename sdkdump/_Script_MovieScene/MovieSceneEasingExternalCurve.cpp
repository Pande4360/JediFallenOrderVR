#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\CurveFloat.hpp"
#include "MovieSceneEasingExternalCurve.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneEasingExternalCurve::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneEasingExternalCurve");
    return result;
}
_Script_Engine::CurveFloat*& _Script_MovieScene::MovieSceneEasingExternalCurve::get_Curve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x30);
}
