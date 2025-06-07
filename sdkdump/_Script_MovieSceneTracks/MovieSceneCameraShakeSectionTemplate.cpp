#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneAdditiveCameraAnimationTemplate.hpp"
#include "MovieSceneCameraShakeSectionTemplate.hpp"
void* _Script_MovieSceneTracks::MovieSceneCameraShakeSectionTemplate::get_SourceData() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_MovieSceneTracks::MovieSceneCameraShakeSectionTemplate::get_SectionStartTime() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneCameraShakeSectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneCameraShakeSectionTemplate");
    return result;
}
