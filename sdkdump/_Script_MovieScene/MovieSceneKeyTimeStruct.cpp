#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneKeyStruct.hpp"
#include "MovieSceneKeyTimeStruct.hpp"
void* _Script_MovieScene::MovieSceneKeyTimeStruct::get_Time() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneKeyTimeStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneKeyTimeStruct");
    return result;
}
