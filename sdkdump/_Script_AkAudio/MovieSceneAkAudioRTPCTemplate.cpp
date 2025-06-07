#include "..\FUObjectArray.hpp"
#include "MovieSceneAkAudioRTPCSection.hpp"
#include "MovieSceneAkAudioRTPCTemplate.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneEvalTemplate.hpp"
_Script_AkAudio::MovieSceneAkAudioRTPCSection*& _Script_AkAudio::MovieSceneAkAudioRTPCTemplate::get_Section() {
    return *(_Script_AkAudio::MovieSceneAkAudioRTPCSection**)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_AkAudio::MovieSceneAkAudioRTPCTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AkAudio.MovieSceneAkAudioRTPCTemplate");
    return result;
}
