#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
#include "MovieSceneVectorSection.hpp"
void* _Script_MovieSceneTracks::MovieSceneVectorSection::get_Curves() {
    return (void*)((uintptr_t)this + 0xe0);
}
int32_t& _Script_MovieSceneTracks::MovieSceneVectorSection::get_ChannelsUsed() {
    return *(int32_t*)((uintptr_t)this + 0x360);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneVectorSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneTracks.MovieSceneVectorSection");
    return result;
}
