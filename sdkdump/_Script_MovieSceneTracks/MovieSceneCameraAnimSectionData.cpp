#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CameraAnim.hpp"
#include "MovieSceneCameraAnimSectionData.hpp"
float& _Script_MovieSceneTracks::MovieSceneCameraAnimSectionData::get_BlendInTime() {
    return *(float*)((uintptr_t)this + 0x10);
}
_Script_Engine::CameraAnim*& _Script_MovieSceneTracks::MovieSceneCameraAnimSectionData::get_CameraAnim() {
    return *(_Script_Engine::CameraAnim**)((uintptr_t)this + 0x0);
}
float& _Script_MovieSceneTracks::MovieSceneCameraAnimSectionData::get_Playrate() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_MovieSceneTracks::MovieSceneCameraAnimSectionData::get_PlayScale() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_MovieSceneTracks::MovieSceneCameraAnimSectionData::get_BlendOutTime() {
    return *(float*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneCameraAnimSectionData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneCameraAnimSectionData");
    return result;
}
bool _Script_MovieSceneTracks::MovieSceneCameraAnimSectionData::get_bLooping() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 1 != 0;
}
void _Script_MovieSceneTracks::MovieSceneCameraAnimSectionData::set_bLooping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
