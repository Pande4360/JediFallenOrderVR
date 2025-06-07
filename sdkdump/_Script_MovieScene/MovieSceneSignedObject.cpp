#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MovieSceneSignedObject.hpp"
void* _Script_MovieScene::MovieSceneSignedObject::get_Signature() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSignedObject::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.MovieSceneSignedObject");
    return result;
}
