#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieScene3DConstraintSection.hpp"
#include "MovieScene3DPathSection.hpp"
void _Script_MovieSceneTracks::MovieScene3DPathSection::set_bReverse(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1ac + 0);
    *(uint8_t*)((uintptr_t)this + 0x1ac + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_MovieSceneTracks::MovieScene3DPathSection::get_TimingCurve() {
    return (void*)((uintptr_t)this + 0x108);
}
void* _Script_MovieSceneTracks::MovieScene3DPathSection::get_FrontAxisEnum() {
    return (void*)((uintptr_t)this + 0x1a8);
}
bool _Script_MovieSceneTracks::MovieScene3DPathSection::get_bForceUpright() {
    return (*(uint8_t*)((uintptr_t)this + 0x1ac + 0)) & 4 != 0;
}
void* _Script_MovieSceneTracks::MovieScene3DPathSection::get_UpAxisEnum() {
    return (void*)((uintptr_t)this + 0x1a9);
}
bool _Script_MovieSceneTracks::MovieScene3DPathSection::get_bFollow() {
    return (*(uint8_t*)((uintptr_t)this + 0x1ac + 0)) & 1 != 0;
}
void _Script_MovieSceneTracks::MovieScene3DPathSection::set_bFollow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1ac + 0);
    *(uint8_t*)((uintptr_t)this + 0x1ac + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_MovieSceneTracks::MovieScene3DPathSection::get_bReverse() {
    return (*(uint8_t*)((uintptr_t)this + 0x1ac + 0)) & 2 != 0;
}
void _Script_MovieSceneTracks::MovieScene3DPathSection::set_bForceUpright(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1ac + 0);
    *(uint8_t*)((uintptr_t)this + 0x1ac + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieScene3DPathSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieScene3DPathSection");
    return result;
}
