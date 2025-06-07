#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MovieSceneBuiltInEasingFunction.hpp"
void* _Script_MovieScene::MovieSceneBuiltInEasingFunction::get_Type() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneBuiltInEasingFunction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneBuiltInEasingFunction");
    return result;
}
