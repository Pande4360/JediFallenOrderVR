#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneTrack.hpp"
#include "MovieScene3DConstraintTrack.hpp"
void* _Script_MovieSceneTracks::MovieScene3DConstraintTrack::get_ConstraintSections() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieScene3DConstraintTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieScene3DConstraintTrack");
    return result;
}
