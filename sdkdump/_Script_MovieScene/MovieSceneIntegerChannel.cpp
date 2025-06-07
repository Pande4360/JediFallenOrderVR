#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneChannel.hpp"
#include "MovieSceneIntegerChannel.hpp"
void* _Script_MovieScene::MovieSceneIntegerChannel::get_Times() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_MovieScene::MovieSceneIntegerChannel::get_bHasDefaultValue() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 1 != 0;
}
int32_t& _Script_MovieScene::MovieSceneIntegerChannel::get_DefaultValue() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
void _Script_MovieScene::MovieSceneIntegerChannel::set_bHasDefaultValue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneIntegerChannel::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneIntegerChannel");
    return result;
}
void* _Script_MovieScene::MovieSceneIntegerChannel::get_Values() {
    return (void*)((uintptr_t)this + 0x20);
}
