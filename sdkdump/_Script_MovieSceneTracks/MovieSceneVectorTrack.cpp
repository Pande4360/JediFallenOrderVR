#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieScenePropertyTrack.hpp"
#include "MovieSceneVectorTrack.hpp"
int32_t& _Script_MovieSceneTracks::MovieSceneVectorTrack::get_NumChannelsUsed() {
    return *(int32_t*)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneVectorTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneVectorTrack");
    return result;
}
