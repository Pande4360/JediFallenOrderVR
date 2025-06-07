#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
#include "MovieSceneAudioSectionTemplate.hpp"
void* _Script_MovieSceneTracks::MovieSceneAudioSectionTemplate::get_AudioData() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::MovieSceneAudioSectionTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.MovieSceneAudioSectionTemplate");
    return result;
}
