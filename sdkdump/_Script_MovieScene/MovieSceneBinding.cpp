#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneBinding.hpp"
void* _Script_MovieScene::MovieSceneBinding::get_ObjectGuid() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneBinding::get_BindingName() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_MovieScene::MovieSceneBinding::get_Tracks() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneBinding");
    return result;
}
