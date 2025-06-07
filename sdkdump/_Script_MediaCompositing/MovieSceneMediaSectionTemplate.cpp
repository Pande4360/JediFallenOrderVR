#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneMediaSectionTemplate.hpp"
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
void* _Script_MediaCompositing::MovieSceneMediaSectionTemplate::get_Params() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_MediaCompositing::MovieSceneMediaSectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MediaCompositing.MovieSceneMediaSectionTemplate");
    return result;
}
