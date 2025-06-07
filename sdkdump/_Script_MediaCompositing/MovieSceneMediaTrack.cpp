#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneMediaTrack.hpp"
#include "..\_Script_MovieScene\MovieSceneNameableTrack.hpp"
void* _Script_MediaCompositing::MovieSceneMediaTrack::get_MediaSections() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_MediaCompositing::MovieSceneMediaTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MediaCompositing.MovieSceneMediaTrack");
    return result;
}
