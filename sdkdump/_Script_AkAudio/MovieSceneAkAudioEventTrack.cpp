#include "..\FUObjectArray.hpp"
#include "MovieSceneAkAudioEventTrack.hpp"
#include "MovieSceneAkTrack.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AkAudio::MovieSceneAkAudioEventTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.MovieSceneAkAudioEventTrack");
    return result;
}
