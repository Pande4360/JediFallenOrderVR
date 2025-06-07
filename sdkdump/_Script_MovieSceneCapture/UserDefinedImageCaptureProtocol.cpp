#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture.hpp"
#include "CapturedPixels.hpp"
#include "FrameMetrics.hpp"
#include "UserDefinedCaptureProtocol.hpp"
#include "UserDefinedImageCaptureProtocol.hpp"
void* _Script_MovieSceneCapture::UserDefinedImageCaptureProtocol::get_Format() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_MovieSceneCapture::UserDefinedImageCaptureProtocol::GenerateFilenameForBuffer(_Script_Engine::Texture* Buffer, void* StreamName) {
    return;
}
bool _Script_MovieSceneCapture::UserDefinedImageCaptureProtocol::get_bEnableCompression() {
    return (*(uint8_t*)((uintptr_t)this + 0xe1 + 0)) & 1 != 0;
}
void _Script_MovieSceneCapture::UserDefinedImageCaptureProtocol::set_bEnableCompression(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xe1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xe1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_MovieSceneCapture::UserDefinedImageCaptureProtocol::get_CompressionQuality() {
    return *(int32_t*)((uintptr_t)this + 0xe4);
}
_Script_CoreUObject::Class* _Script_MovieSceneCapture::UserDefinedImageCaptureProtocol::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol");
    return result;
}
void _Script_MovieSceneCapture::UserDefinedImageCaptureProtocol::WriteImageToDisk(_Script_MovieSceneCapture::CapturedPixels& PixelData, void* StreamName, _Script_MovieSceneCapture::FrameMetrics& FrameMetrics, bool bCopyImageData) {
    return;
}
void* _Script_MovieSceneCapture::UserDefinedImageCaptureProtocol::GenerateFilenameForCurrentFrame() {
    return;
}
