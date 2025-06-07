#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
#include "MovieSceneCameraCutSection.hpp"
void* _Script_MovieSceneTracks::MovieSceneCameraCutSection::get_CameraGuid() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_MovieSceneTracks::MovieSceneCameraCutSection::get_CameraBindingID() {
    return (void*)((uintptr_t)this + 0xf0);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneCameraCutSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneCameraCutSection");
    return result;
}
