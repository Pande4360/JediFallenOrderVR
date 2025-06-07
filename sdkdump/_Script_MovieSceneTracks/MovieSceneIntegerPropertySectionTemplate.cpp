#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieScenePropertySectionTemplate.hpp"
#include "MovieSceneIntegerPropertySectionTemplate.hpp"
void* _Script_MovieSceneTracks::MovieSceneIntegerPropertySectionTemplate::get_IntegerCurve() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_MovieSceneTracks::MovieSceneIntegerPropertySectionTemplate::get_BlendType() {
    return (void*)((uintptr_t)this + 0xd8);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneIntegerPropertySectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneIntegerPropertySectionTemplate");
    return result;
}
