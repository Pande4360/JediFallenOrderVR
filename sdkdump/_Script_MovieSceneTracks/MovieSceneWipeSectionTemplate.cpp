#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
#include "MovieSceneWipeSectionTemplate.hpp"
float& _Script_MovieSceneTracks::MovieSceneWipeSectionTemplate::get_WipeDirection() {
    return *(float*)((uintptr_t)this + 0xc0);
}
void* _Script_MovieSceneTracks::MovieSceneWipeSectionTemplate::get_WipeCurve() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneWipeSectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneWipeSectionTemplate");
    return result;
}
