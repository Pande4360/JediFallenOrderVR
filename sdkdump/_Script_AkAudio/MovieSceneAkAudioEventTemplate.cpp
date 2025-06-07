#include "..\FUObjectArray.hpp"
#include "MovieSceneAkAudioEventSection.hpp"
#include "MovieSceneAkAudioEventTemplate.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
_Script_AkAudio::MovieSceneAkAudioEventSection*& _Script_AkAudio::MovieSceneAkAudioEventTemplate::get_Section() {
    return *(_Script_AkAudio::MovieSceneAkAudioEventSection**)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_AkAudio::MovieSceneAkAudioEventTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AkAudio.MovieSceneAkAudioEventTemplate");
    return result;
}
