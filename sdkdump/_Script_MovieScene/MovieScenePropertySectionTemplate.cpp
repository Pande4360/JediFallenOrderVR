#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEvalTemplate.hpp"
#include "MovieScenePropertySectionTemplate.hpp"
void* _Script_MovieScene::MovieScenePropertySectionTemplate::get_PropertyData() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieScenePropertySectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieScenePropertySectionTemplate");
    return result;
}
