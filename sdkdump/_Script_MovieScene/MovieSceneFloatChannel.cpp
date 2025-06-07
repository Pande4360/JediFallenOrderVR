#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneChannel.hpp"
#include "MovieSceneFloatChannel.hpp"
void _Script_MovieScene::MovieSceneFloatChannel::set_bHasDefaultValue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x34 + 0);
    *(uint8_t*)((uintptr_t)this + 0x34 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MovieScene::MovieSceneFloatChannel::get_PreInfinityExtrap() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_MovieScene::MovieSceneFloatChannel::get_PostInfinityExtrap() {
    return (void*)((uintptr_t)this + 0x9);
}
void* _Script_MovieScene::MovieSceneFloatChannel::get_Times() {
    return (void*)((uintptr_t)this + 0x10);
}
float& _Script_MovieScene::MovieSceneFloatChannel::get_DefaultValue() {
    return *(float*)((uintptr_t)this + 0x30);
}
void* _Script_MovieScene::MovieSceneFloatChannel::get_Values() {
    return (void*)((uintptr_t)this + 0x20);
}
bool _Script_MovieScene::MovieSceneFloatChannel::get_bHasDefaultValue() {
    return (*(uint8_t*)((uintptr_t)this + 0x34 + 0)) & 1 != 0;
}
void* _Script_MovieScene::MovieSceneFloatChannel::get_KeyHandles() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_MovieScene::MovieSceneFloatChannel::get_TickResolution() {
    return (void*)((uintptr_t)this + 0x98);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneFloatChannel::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneFloatChannel");
    return result;
}
