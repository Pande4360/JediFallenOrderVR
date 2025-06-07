#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneTimecodeSource.hpp"
void* _Script_MovieScene::MovieSceneTimecodeSource::get_Timecode() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneTimecodeSource::get_DeltaFrame() {
    return (void*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneTimecodeSource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneTimecodeSource");
    return result;
}
