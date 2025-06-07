#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MovieSceneAudioCaptureProtocolBase.hpp"
#include "MovieSceneCaptureEnvironment.hpp"
#include "MovieSceneImageCaptureProtocolBase.hpp"
int32_t _Script_MovieSceneCapture::MovieSceneCaptureEnvironment::GetCaptureFrameNumber() {
    return;
}
_Script_CoreUObject::Class* _Script_MovieSceneCapture::MovieSceneCaptureEnvironment::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneCapture.MovieSceneCaptureEnvironment");
    return result;
}
bool _Script_MovieSceneCapture::MovieSceneCaptureEnvironment::IsCaptureInProgress() {
    return;
}
_Script_MovieSceneCapture::MovieSceneAudioCaptureProtocolBase* _Script_MovieSceneCapture::MovieSceneCaptureEnvironment::FindAudioCaptureProtocol() {
    return;
}
float _Script_MovieSceneCapture::MovieSceneCaptureEnvironment::GetCaptureElapsedTime() {
    return;
}
_Script_MovieSceneCapture::MovieSceneImageCaptureProtocolBase* _Script_MovieSceneCapture::MovieSceneCaptureEnvironment::FindImageCaptureProtocol() {
    return;
}
