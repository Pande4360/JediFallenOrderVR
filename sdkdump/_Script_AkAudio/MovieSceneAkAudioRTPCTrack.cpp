#include "..\FUObjectArray.hpp"
#include "MovieSceneAkAudioRTPCTrack.hpp"
#include "MovieSceneAkTrack.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AkAudio::MovieSceneAkAudioRTPCTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.MovieSceneAkAudioRTPCTrack");
    return result;
}
