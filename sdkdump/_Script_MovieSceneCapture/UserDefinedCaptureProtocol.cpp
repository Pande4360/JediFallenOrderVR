#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Texture.hpp"
#include "..\_Script_Engine\World.hpp"
#include "FrameMetrics.hpp"
#include "MovieSceneImageCaptureProtocolBase.hpp"
#include "UserDefinedCaptureProtocol.hpp"
_Script_Engine::World*& _Script_MovieSceneCapture::UserDefinedCaptureProtocol::get_World() {
    return *(_Script_Engine::World**)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_MovieSceneCapture::UserDefinedCaptureProtocol::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneCapture.UserDefinedCaptureProtocol");
    return result;
}
void _Script_MovieSceneCapture::UserDefinedCaptureProtocol::OnWarmUp() {
    return;
}
void _Script_MovieSceneCapture::UserDefinedCaptureProtocol::StopCapturingFinalPixels() {
    return;
}
void _Script_MovieSceneCapture::UserDefinedCaptureProtocol::StartCapturingFinalPixels(void* StreamName) {
    return;
}
void _Script_MovieSceneCapture::UserDefinedCaptureProtocol::ResolveBuffer(_Script_Engine::Texture* Buffer, void* BufferName, void* Handler) {
    return;
}
void _Script_MovieSceneCapture::UserDefinedCaptureProtocol::OnTick() {
    return;
}
void _Script_MovieSceneCapture::UserDefinedCaptureProtocol::PushBufferToStream(_Script_Engine::Texture* Buffer, void* StreamName) {
    return;
}
void _Script_MovieSceneCapture::UserDefinedCaptureProtocol::OnStartCapture() {
    return;
}
bool _Script_MovieSceneCapture::UserDefinedCaptureProtocol::OnSetup() {
    return;
}
void _Script_MovieSceneCapture::UserDefinedCaptureProtocol::OnPreTick() {
    return;
}
void _Script_MovieSceneCapture::UserDefinedCaptureProtocol::OnCaptureFrame() {
    return;
}
void _Script_MovieSceneCapture::UserDefinedCaptureProtocol::OnPauseCapture() {
    return;
}
void _Script_MovieSceneCapture::UserDefinedCaptureProtocol::OnFinalize() {
    return;
}
bool _Script_MovieSceneCapture::UserDefinedCaptureProtocol::OnCanFinalize() {
    return;
}
void _Script_MovieSceneCapture::UserDefinedCaptureProtocol::OnBeginFinalize() {
    return;
}
_Script_MovieSceneCapture::FrameMetrics _Script_MovieSceneCapture::UserDefinedCaptureProtocol::GetCurrentFrameMetrics() {
    return;
}
void* _Script_MovieSceneCapture::UserDefinedCaptureProtocol::GenerateFilename(_Script_MovieSceneCapture::FrameMetrics& InFrameMetrics) {
    return;
}
void _Script_MovieSceneCapture::UserDefinedCaptureProtocol::BindToStream(void* StreamName, void* Handler) {
    return;
}
