#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FrameGrabberProtocol.hpp"
#include "VideoCaptureProtocol.hpp"
bool _Script_MovieSceneCapture::VideoCaptureProtocol::get_bUseCompression() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 1 != 0;
}
void* _Script_MovieSceneCapture::VideoCaptureProtocol::get_VideoCodec() {
    return (void*)((uintptr_t)this + 0x70);
}
void _Script_MovieSceneCapture::VideoCaptureProtocol::set_bUseCompression(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_MovieSceneCapture::VideoCaptureProtocol::get_CompressionQuality() {
    return *(float*)((uintptr_t)this + 0x6c);
}
_Script_CoreUObject::Class* _Script_MovieSceneCapture::VideoCaptureProtocol::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneCapture.VideoCaptureProtocol");
    return result;
}
