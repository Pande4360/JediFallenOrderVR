#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneAudioCaptureProtocolBase.hpp"
#include "NullAudioCaptureProtocol.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneCapture::NullAudioCaptureProtocol::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneCapture.NullAudioCaptureProtocol");
    return result;
}
