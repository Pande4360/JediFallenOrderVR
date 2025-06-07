#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneComponentMaterialTrack.hpp"
#include "MovieSceneMaterialTrack.hpp"
int32_t& _Script_MovieSceneTracks::MovieSceneComponentMaterialTrack::get_MaterialIndex() {
    return *(int32_t*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneComponentMaterialTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneComponentMaterialTrack");
    return result;
}
