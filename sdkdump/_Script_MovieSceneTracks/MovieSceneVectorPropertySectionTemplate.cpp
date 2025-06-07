#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieScenePropertySectionTemplate.hpp"
#include "MovieSceneVectorPropertySectionTemplate.hpp"
void* _Script_MovieSceneTracks::MovieSceneVectorPropertySectionTemplate::get_ComponentCurves() {
    return (void*)((uintptr_t)this + 0x48);
}
int32_t& _Script_MovieSceneTracks::MovieSceneVectorPropertySectionTemplate::get_NumChannelsUsed() {
    return *(int32_t*)((uintptr_t)this + 0x2c8);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneVectorPropertySectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneVectorPropertySectionTemplate");
    return result;
}
void* _Script_MovieSceneTracks::MovieSceneVectorPropertySectionTemplate::get_BlendType() {
    return (void*)((uintptr_t)this + 0x2cc);
}
