#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FrameGrabberProtocol.hpp"
#include "MovieSceneImageCaptureProtocolBase.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneCapture::FrameGrabberProtocol::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneCapture.FrameGrabberProtocol");
    return result;
}
