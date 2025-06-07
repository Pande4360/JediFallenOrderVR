#include "..\FUObjectArray.hpp"
#include "NamedFilmbackPreset.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_CinematicCamera::NamedFilmbackPreset::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_CinematicCamera::NamedFilmbackPreset::get_FilmbackSettings() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_CinematicCamera::NamedFilmbackPreset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CinematicCamera.NamedFilmbackPreset");
    return result;
}
