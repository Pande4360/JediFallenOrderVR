#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneChannel.hpp"
#include "MovieSceneStringChannel.hpp"
bool _Script_MovieSceneTracks::MovieSceneStringChannel::get_bHasDefaultValue() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void* _Script_MovieSceneTracks::MovieSceneStringChannel::get_Times() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_MovieSceneTracks::MovieSceneStringChannel::get_Values() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneStringChannel::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneStringChannel");
    return result;
}
void* _Script_MovieSceneTracks::MovieSceneStringChannel::get_DefaultValue() {
    return (void*)((uintptr_t)this + 0x28);
}
void _Script_MovieSceneTracks::MovieSceneStringChannel::set_bHasDefaultValue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
