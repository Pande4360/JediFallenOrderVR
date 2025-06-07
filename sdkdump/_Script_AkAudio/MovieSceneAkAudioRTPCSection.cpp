#include "..\FUObjectArray.hpp"
#include "MovieSceneAkAudioRTPCSection.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
void* _Script_AkAudio::MovieSceneAkAudioRTPCSection::get_Name() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_AkAudio::MovieSceneAkAudioRTPCSection::get_FloatCurve() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_AkAudio::MovieSceneAkAudioRTPCSection::get_FloatChannelSerializationHelper() {
    return (void*)((uintptr_t)this + 0x160);
}
_Script_CoreUObject::Class* _Script_AkAudio::MovieSceneAkAudioRTPCSection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.MovieSceneAkAudioRTPCSection");
    return result;
}
