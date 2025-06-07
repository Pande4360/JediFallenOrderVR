#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSegmentIdentifier.hpp"
int32_t& _Script_MovieScene::MovieSceneSegmentIdentifier::get_IdentifierIndex() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_MovieScene::MovieSceneSegmentIdentifier::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieScene.MovieSceneSegmentIdentifier");
    return result;
}
