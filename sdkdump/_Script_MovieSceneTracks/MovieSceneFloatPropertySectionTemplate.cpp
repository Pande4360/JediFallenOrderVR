#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieScenePropertySectionTemplate.hpp"
#include "MovieSceneFloatPropertySectionTemplate.hpp"
void* _Script_MovieSceneTracks::MovieSceneFloatPropertySectionTemplate::get_FloatFunction() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_MovieSceneTracks::MovieSceneFloatPropertySectionTemplate::get_BlendType() {
    return (void*)((uintptr_t)this + 0xe8);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneFloatPropertySectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneFloatPropertySectionTemplate");
    return result;
}
