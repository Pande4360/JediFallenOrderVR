#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieScenePropertySectionData.hpp"
void* _Script_MovieScene::MovieScenePropertySectionData::get_PropertyPath() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_MovieScene::MovieScenePropertySectionData::get_PropertyName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieScenePropertySectionData::get_FunctionName() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_MovieScene::MovieScenePropertySectionData::get_NotifyFunctionName() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieScenePropertySectionData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieScenePropertySectionData");
    return result;
}
