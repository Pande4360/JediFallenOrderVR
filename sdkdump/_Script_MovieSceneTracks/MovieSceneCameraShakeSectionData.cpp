#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneCameraShakeSectionData.hpp"
void* _Script_MovieSceneTracks::MovieSceneCameraShakeSectionData::get_ShakeClass() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_MovieSceneTracks::MovieSceneCameraShakeSectionData::get_PlayScale() {
    return *(float*)((uintptr_t)this + 0x8);
}
void* _Script_MovieSceneTracks::MovieSceneCameraShakeSectionData::get_PlaySpace() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_MovieSceneTracks::MovieSceneCameraShakeSectionData::get_UserDefinedPlaySpace() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneCameraShakeSectionData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneCameraShakeSectionData");
    return result;
}
