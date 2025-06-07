#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
#include "RsMovieSceneSubtitleEventSection.hpp"
#include "RsMovieSceneSubtitleTemplate.hpp"
_Script_RsGameTechRT::RsMovieSceneSubtitleEventSection*& _Script_RsGameTechRT::RsMovieSceneSubtitleTemplate::get_Section() {
    return *(_Script_RsGameTechRT::RsMovieSceneSubtitleEventSection**)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsMovieSceneSubtitleTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsMovieSceneSubtitleTemplate");
    return result;
}
