#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
#include "RsMovieSceneSubtitleEventSection.hpp"
void* _Script_RsGameTechRT::RsMovieSceneSubtitleEventSection::get_TextOverride() {
    return (void*)((uintptr_t)this + 0xe8);
}
void* _Script_RsGameTechRT::RsMovieSceneSubtitleEventSection::get_RAPUID() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_RsGameTechRT::RsMovieSceneSubtitleEventSection::get_RAPSystem() {
    return (void*)((uintptr_t)this + 0x100);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsMovieSceneSubtitleEventSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsMovieSceneSubtitleEventSection");
    return result;
}
