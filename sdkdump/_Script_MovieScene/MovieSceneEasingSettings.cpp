#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneEasingSettings.hpp"
int32_t& _Script_MovieScene::MovieSceneEasingSettings::get_AutoEaseInDuration() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Script_MovieScene::MovieSceneEasingSettings::get_EaseOut() {
    return (void*)((uintptr_t)this + 0x20);
}
int32_t& _Script_MovieScene::MovieSceneEasingSettings::get_AutoEaseOutDuration() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
void* _Script_MovieScene::MovieSceneEasingSettings::get_EaseIn() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_MovieScene::MovieSceneEasingSettings::get_bManualEaseIn() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 1 != 0;
}
void _Script_MovieScene::MovieSceneEasingSettings::set_bManualEaseIn(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_MovieScene::MovieSceneEasingSettings::get_ManualEaseInDuration() {
    return *(int32_t*)((uintptr_t)this + 0x1c);
}
bool _Script_MovieScene::MovieSceneEasingSettings::get_bManualEaseOut() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_MovieScene::MovieSceneEasingSettings::set_bManualEaseOut(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_MovieScene::MovieSceneEasingSettings::get_ManualEaseOutDuration() {
    return *(int32_t*)((uintptr_t)this + 0x34);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneEasingSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneEasingSettings");
    return result;
}
