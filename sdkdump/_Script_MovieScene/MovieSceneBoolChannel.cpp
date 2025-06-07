#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneBoolChannel.hpp"
#include "MovieSceneChannel.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneBoolChannel::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneBoolChannel");
    return result;
}
void* _Script_MovieScene::MovieSceneBoolChannel::get_Times() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_MovieScene::MovieSceneBoolChannel::get_DefaultValue() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 1 != 0;
}
void _Script_MovieScene::MovieSceneBoolChannel::set_DefaultValue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_MovieScene::MovieSceneBoolChannel::set_bHasDefaultValue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x19 + 0);
    *(uint8_t*)((uintptr_t)this + 0x19 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieScene::MovieSceneBoolChannel::get_bHasDefaultValue() {
    return (*(uint8_t*)((uintptr_t)this + 0x19 + 0)) & 1 != 0;
}
void* _Script_MovieScene::MovieSceneBoolChannel::get_Values() {
    return (void*)((uintptr_t)this + 0x20);
}
