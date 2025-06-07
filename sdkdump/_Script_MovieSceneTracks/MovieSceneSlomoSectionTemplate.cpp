#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
#include "MovieSceneSlomoSectionTemplate.hpp"
void* _Script_MovieSceneTracks::MovieSceneSlomoSectionTemplate::get_SlomoCurve() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneSlomoSectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneSlomoSectionTemplate");
    return result;
}
