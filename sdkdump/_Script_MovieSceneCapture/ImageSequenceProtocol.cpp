#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FrameGrabberProtocol.hpp"
#include "ImageSequenceProtocol.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneCapture::ImageSequenceProtocol::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneCapture.ImageSequenceProtocol");
    return result;
}
