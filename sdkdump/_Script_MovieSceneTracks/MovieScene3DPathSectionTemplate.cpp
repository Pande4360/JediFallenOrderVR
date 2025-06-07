#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
#include "MovieScene3DPathSectionTemplate.hpp"
void* _Script_MovieSceneTracks::MovieScene3DPathSectionTemplate::get_PathBindingID() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_MovieSceneTracks::MovieScene3DPathSectionTemplate::get_TimingCurve() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_MovieSceneTracks::MovieScene3DPathSectionTemplate::set_bReverse(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xdc + 0);
    *(uint8_t*)((uintptr_t)this + 0xdc + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_MovieSceneTracks::MovieScene3DPathSectionTemplate::get_FrontAxisEnum() {
    return (void*)((uintptr_t)this + 0xd8);
}
void* _Script_MovieSceneTracks::MovieScene3DPathSectionTemplate::get_UpAxisEnum() {
    return (void*)((uintptr_t)this + 0xd9);
}
bool _Script_MovieSceneTracks::MovieScene3DPathSectionTemplate::get_bFollow() {
    return (*(uint8_t*)((uintptr_t)this + 0xdc + 0)) & 1 != 0;
}
bool _Script_MovieSceneTracks::MovieScene3DPathSectionTemplate::get_bReverse() {
    return (*(uint8_t*)((uintptr_t)this + 0xdc + 0)) & 2 != 0;
}
void _Script_MovieSceneTracks::MovieScene3DPathSectionTemplate::set_bFollow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xdc + 0);
    *(uint8_t*)((uintptr_t)this + 0xdc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieSceneTracks::MovieScene3DPathSectionTemplate::get_bForceUpright() {
    return (*(uint8_t*)((uintptr_t)this + 0xdc + 0)) & 4 != 0;
}
void _Script_MovieSceneTracks::MovieScene3DPathSectionTemplate::set_bForceUpright(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xdc + 0);
    *(uint8_t*)((uintptr_t)this + 0xdc + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieScene3DPathSectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieScene3DPathSectionTemplate");
    return result;
}
