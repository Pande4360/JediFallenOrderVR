#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "RsMovieSequencePreviewActor.hpp"
_Script_CoreUObject::Class* _Script_MovieScene::RsMovieSequencePreviewActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieScene.RsMovieSequencePreviewActor");
    return result;
}
