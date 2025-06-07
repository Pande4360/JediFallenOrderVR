#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneTangentData.hpp"
float& _Script_MovieScene::MovieSceneTangentData::get_ArriveTangent() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_MovieScene::MovieSceneTangentData::get_LeaveTangent() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_MovieScene::MovieSceneTangentData::get_ArriveTangentWeight() {
    return *(float*)((uintptr_t)this + 0xc);
}
void* _Script_MovieScene::MovieSceneTangentData::get_TangentWeightMode() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_MovieScene::MovieSceneTangentData::get_LeaveTangentWeight() {
    return *(float*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneTangentData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneTangentData");
    return result;
}
