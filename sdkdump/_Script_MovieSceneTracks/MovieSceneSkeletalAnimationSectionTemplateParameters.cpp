#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneSkeletalAnimationParams.hpp"
#include "MovieSceneSkeletalAnimationSectionTemplateParameters.hpp"
void* _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSectionTemplateParameters::get_SectionEndTime() {
    return (void*)((uintptr_t)this + 0xcc);
}
void* _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSectionTemplateParameters::get_SectionStartTime() {
    return (void*)((uintptr_t)this + 0xc8);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneSkeletalAnimationSectionTemplateParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters");
    return result;
}
