#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSpawnParams.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneSpawnParams::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneSpawnParams");
    return result;
}
bool _Script_MovieSceneTracks::MovieSceneSpawnParams::get_bUsePlayerCharacter() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_MovieSceneTracks::MovieSceneSpawnParams::set_bUseBuddyDroidCharacter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_MovieSceneTracks::MovieSceneSpawnParams::set_bUsePlayerCharacter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieSceneTracks::MovieSceneSpawnParams::get_bIsMovable() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
bool _Script_MovieSceneTracks::MovieSceneSpawnParams::get_bUseBuddyDroidCharacter() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
void* _Script_MovieSceneTracks::MovieSceneSpawnParams::get_AISpawner() {
    return (void*)((uintptr_t)this + 0x8);
}
void _Script_MovieSceneTracks::MovieSceneSpawnParams::set_bIsMovable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
