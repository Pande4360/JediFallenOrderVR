#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
#include "MovieSceneSkeletalAnimationSectionTemplate.hpp"
void* _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSectionTemplate::get_Params() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate");
    return result;
}
