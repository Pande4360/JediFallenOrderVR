#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneObjectBindingID.hpp"
int32_t& _Script_MovieScene::MovieSceneObjectBindingID::get_SequenceID() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneObjectBindingID::get_Space() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_MovieScene::MovieSceneObjectBindingID::get_Guid() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneObjectBindingID::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneObjectBindingID");
    return result;
}
