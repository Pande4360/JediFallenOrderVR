#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSubSectionData.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSubSectionData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneSubSectionData");
    return result;
}
void* _Script_MovieScene::MovieSceneSubSectionData::get_Section() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneSubSectionData::get_ObjectBindingId() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_MovieScene::MovieSceneSubSectionData::get_Flags() {
    return (void*)((uintptr_t)this + 0x18);
}
