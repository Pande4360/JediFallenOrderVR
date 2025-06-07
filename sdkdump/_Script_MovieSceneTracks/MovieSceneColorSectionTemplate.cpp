#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieScenePropertySectionTemplate.hpp"
#include "MovieSceneColorSectionTemplate.hpp"
void* _Script_MovieSceneTracks::MovieSceneColorSectionTemplate::get_Curves() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_MovieSceneTracks::MovieSceneColorSectionTemplate::get_BlendType() {
    return (void*)((uintptr_t)this + 0x2c8);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneColorSectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneColorSectionTemplate");
    return result;
}
