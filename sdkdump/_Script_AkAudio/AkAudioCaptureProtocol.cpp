#include "..\FUObjectArray.hpp"
#include "AkAudioCaptureProtocol.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieSceneCapture\MovieSceneAudioCaptureProtocolBase.hpp"
void* _Script_AkAudio::AkAudioCaptureProtocol::get_Filename() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkAudioCaptureProtocol::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.AkAudioCaptureProtocol");
    return result;
}
