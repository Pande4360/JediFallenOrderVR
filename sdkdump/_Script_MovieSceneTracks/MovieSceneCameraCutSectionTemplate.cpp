#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
#include "MovieSceneCameraCutSectionTemplate.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneCameraCutSectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneCameraCutSectionTemplate");
    return result;
}
void* _Script_MovieSceneTracks::MovieSceneCameraCutSectionTemplate::get_CameraBindingID() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_MovieSceneTracks::MovieSceneCameraCutSectionTemplate::get_CutTransform() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Script_MovieSceneTracks::MovieSceneCameraCutSectionTemplate::get_bHasCutTransform() {
    return (*(uint8_t*)((uintptr_t)this + 0x70 + 0)) & 1 != 0;
}
void _Script_MovieSceneTracks::MovieSceneCameraCutSectionTemplate::set_bHasCutTransform(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x70 + 0);
    *(uint8_t*)((uintptr_t)this + 0x70 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
