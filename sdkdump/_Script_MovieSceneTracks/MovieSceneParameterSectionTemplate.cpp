#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
#include "MovieSceneParameterSectionTemplate.hpp"
void* _Script_MovieSceneTracks::MovieSceneParameterSectionTemplate::get_Scalars() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneParameterSectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneParameterSectionTemplate");
    return result;
}
void* _Script_MovieSceneTracks::MovieSceneParameterSectionTemplate::get_Vectors() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_MovieSceneTracks::MovieSceneParameterSectionTemplate::get_Colors() {
    return (void*)((uintptr_t)this + 0x40);
}
