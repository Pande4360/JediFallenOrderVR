#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneAdditiveCameraAnimationTemplate.hpp"
#include "MovieSceneCameraAnimSectionTemplate.hpp"
void* _Script_MovieSceneTracks::MovieSceneCameraAnimSectionTemplate::get_SourceData() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_MovieSceneTracks::MovieSceneCameraAnimSectionTemplate::get_SectionStartTime() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneCameraAnimSectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneCameraAnimSectionTemplate");
    return result;
}
