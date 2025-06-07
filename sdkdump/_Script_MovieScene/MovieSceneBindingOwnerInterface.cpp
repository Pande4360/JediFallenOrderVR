#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "MovieSceneBindingOwnerInterface.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneBindingOwnerInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneBindingOwnerInterface");
    return result;
}
