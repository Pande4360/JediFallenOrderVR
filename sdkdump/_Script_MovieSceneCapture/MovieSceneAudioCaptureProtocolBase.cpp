#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MovieSceneAudioCaptureProtocolBase.hpp"
#include "MovieSceneCaptureProtocolBase.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneCapture::MovieSceneAudioCaptureProtocolBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneCapture.MovieSceneAudioCaptureProtocolBase");
    return result;
}
