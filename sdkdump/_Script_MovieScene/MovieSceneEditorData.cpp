#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEditorData.hpp"
void* _Script_MovieScene::MovieSceneEditorData::get_ExpansionStates() {
    return (void*)((uintptr_t)this + 0x0);
}
double& _Script_MovieScene::MovieSceneEditorData::get_ViewStart() {
    return *(double*)((uintptr_t)this + 0x50);
}
double& _Script_MovieScene::MovieSceneEditorData::get_WorkEnd() {
    return *(double*)((uintptr_t)this + 0x68);
}
double& _Script_MovieScene::MovieSceneEditorData::get_ViewEnd() {
    return *(double*)((uintptr_t)this + 0x58);
}
double& _Script_MovieScene::MovieSceneEditorData::get_WorkStart() {
    return *(double*)((uintptr_t)this + 0x60);
}
void* _Script_MovieScene::MovieSceneEditorData::get_MarkedFrames() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_MovieScene::MovieSceneEditorData::get_WorkingRange() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_MovieScene::MovieSceneEditorData::get_ViewRange() {
    return (void*)((uintptr_t)this + 0xd0);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneEditorData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneEditorData");
    return result;
}
