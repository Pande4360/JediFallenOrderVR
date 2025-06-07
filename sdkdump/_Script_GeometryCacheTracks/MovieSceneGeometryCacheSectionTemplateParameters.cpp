#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneGeometryCacheParams.hpp"
#include "MovieSceneGeometryCacheSectionTemplateParameters.hpp"
void* _Script_GeometryCacheTracks::MovieSceneGeometryCacheSectionTemplateParameters::get_SectionStartTime() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_GeometryCacheTracks::MovieSceneGeometryCacheSectionTemplateParameters::get_SectionEndTime() {
    return (void*)((uintptr_t)this + 0x34);
}
_Script_CoreUObject::Class* _Script_GeometryCacheTracks::MovieSceneGeometryCacheSectionTemplateParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplateParameters");
    return result;
}
