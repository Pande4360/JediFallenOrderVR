#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSectionParameters.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSectionParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneSectionParameters");
    return result;
}
void* _Script_MovieScene::MovieSceneSectionParameters::get_StartFrameOffset() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_MovieScene::MovieSceneSectionParameters::get_HierarchicalBias() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
float& _Script_MovieScene::MovieSceneSectionParameters::get_TimeScale() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_MovieScene::MovieSceneSectionParameters::get_StartOffset() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_MovieScene::MovieSceneSectionParameters::get_PostrollTime() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_MovieScene::MovieSceneSectionParameters::get_PrerollTime() {
    return *(float*)((uintptr_t)this + 0x10);
}
