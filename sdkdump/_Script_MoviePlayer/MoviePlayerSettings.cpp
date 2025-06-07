#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MoviePlayerSettings.hpp"
bool _Script_MoviePlayer::MoviePlayerSettings::get_bWaitForMoviesToComplete() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_MoviePlayer::MoviePlayerSettings::set_bWaitForMoviesToComplete(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MoviePlayer::MoviePlayerSettings::get_StartupMovies() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_MoviePlayer::MoviePlayerSettings::get_bMoviesAreSkippable() {
    return (*(uint8_t*)((uintptr_t)this + 0x29 + 0)) & 1 != 0;
}
void _Script_MoviePlayer::MoviePlayerSettings::set_bMoviesAreSkippable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29 + 0);
    *(uint8_t*)((uintptr_t)this + 0x29 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_MoviePlayer::MoviePlayerSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MoviePlayer.MoviePlayerSettings");
    return result;
}
