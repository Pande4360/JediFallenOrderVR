#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieScenePropertySectionTemplate.hpp"
#include "MovieSceneBytePropertySectionTemplate.hpp"
void* _Script_MovieSceneTracks::MovieSceneBytePropertySectionTemplate::get_ByteCurve() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneBytePropertySectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneBytePropertySectionTemplate");
    return result;
}
