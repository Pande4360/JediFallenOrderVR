#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSequenceID.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSequenceID::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneSequenceID");
    return result;
}
void* _Script_MovieScene::MovieSceneSequenceID::get_Value() {
    return (void*)((uintptr_t)this + 0x0);
}
