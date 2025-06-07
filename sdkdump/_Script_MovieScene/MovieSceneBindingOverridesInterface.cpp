#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "MovieSceneBindingOverridesInterface.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneBindingOverridesInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneBindingOverridesInterface");
    return result;
}
