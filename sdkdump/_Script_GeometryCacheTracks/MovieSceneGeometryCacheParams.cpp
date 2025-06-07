#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneGeometryCacheParams.hpp"
void _Script_GeometryCacheTracks::MovieSceneGeometryCacheParams::set_bReverse(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24 + 0);
    *(uint8_t*)((uintptr_t)this + 0x24 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_GeometryCacheTracks::MovieSceneGeometryCacheParams::get_GeometryCache() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_GeometryCacheTracks::MovieSceneGeometryCacheParams::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GeometryCacheTracks.MovieSceneGeometryCacheParams");
    return result;
}
float& _Script_GeometryCacheTracks::MovieSceneGeometryCacheParams::get_StartOffset() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_GeometryCacheTracks::MovieSceneGeometryCacheParams::get_EndOffset() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_GeometryCacheTracks::MovieSceneGeometryCacheParams::get_Playrate() {
    return *(float*)((uintptr_t)this + 0x20);
}
bool _Script_GeometryCacheTracks::MovieSceneGeometryCacheParams::get_bReverse() {
    return (*(uint8_t*)((uintptr_t)this + 0x24 + 0)) & 1 != 0;
}
