#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MasterAudioSubmixCaptureProtocol.hpp"
#include "MovieSceneAudioCaptureProtocolBase.hpp"
void* _Script_MovieSceneCapture::MasterAudioSubmixCaptureProtocol::get_Filename() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_MovieSceneCapture::MasterAudioSubmixCaptureProtocol::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneCapture.MasterAudioSubmixCaptureProtocol");
    return result;
}
