#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneTrackIdentifier.hpp"
void* _Script_MovieScene::MovieSceneTrackIdentifier::get_Value() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneTrackIdentifier::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneTrackIdentifier");
    return result;
}
