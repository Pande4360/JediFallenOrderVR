#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MovieSceneAudioCaptureProtocolBase.hpp"
#include "MovieSceneCapture.hpp"
#include "MovieSceneCaptureProtocolBase.hpp"
#include "MovieSceneImageCaptureProtocolBase.hpp"
void* _Script_MovieSceneCapture::MovieSceneCapture::get_ImageCaptureProtocolType() {
    return (void*)((uintptr_t)this + 0x38);
}
bool _Script_MovieSceneCapture::MovieSceneCapture::get_bUseSeparateProcess() {
    return (*(uint8_t*)((uintptr_t)this + 0xc8 + 0)) & 1 != 0;
}
void* _Script_MovieSceneCapture::MovieSceneCapture::get_AudioCaptureProtocolType() {
    return (void*)((uintptr_t)this + 0x50);
}
bool _Script_MovieSceneCapture::MovieSceneCapture::get_bCloseEditorWhenCaptureStarts() {
    return (*(uint8_t*)((uintptr_t)this + 0xc9 + 0)) & 1 != 0;
}
_Script_MovieSceneCapture::MovieSceneImageCaptureProtocolBase*& _Script_MovieSceneCapture::MovieSceneCapture::get_ImageCaptureProtocol() {
    return *(_Script_MovieSceneCapture::MovieSceneImageCaptureProtocolBase**)((uintptr_t)this + 0x68);
}
_Script_MovieSceneCapture::MovieSceneAudioCaptureProtocolBase*& _Script_MovieSceneCapture::MovieSceneCapture::get_AudioCaptureProtocol() {
    return *(_Script_MovieSceneCapture::MovieSceneAudioCaptureProtocolBase**)((uintptr_t)this + 0x70);
}
void* _Script_MovieSceneCapture::MovieSceneCapture::get_Settings() {
    return (void*)((uintptr_t)this + 0x78);
}
void _Script_MovieSceneCapture::MovieSceneCapture::set_bUseSeparateProcess(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_MovieSceneCapture::MovieSceneCapture::set_bCloseEditorWhenCaptureStarts(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MovieSceneCapture::MovieSceneCapture::get_AdditionalCommandLineArguments() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_MovieSceneCapture::MovieSceneCapture::get_InheritedCommandLineArguments() {
    return (void*)((uintptr_t)this + 0xe0);
}
_Script_CoreUObject::Class* _Script_MovieSceneCapture::MovieSceneCapture::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneCapture.MovieSceneCapture");
    return result;
}
void _Script_MovieSceneCapture::MovieSceneCapture::SetImageCaptureProtocolType(void* ProtocolType) {
    return;
}
void _Script_MovieSceneCapture::MovieSceneCapture::SetAudioCaptureProtocolType(void* ProtocolType) {
    return;
}
_Script_MovieSceneCapture::MovieSceneCaptureProtocolBase* _Script_MovieSceneCapture::MovieSceneCapture::GetImageCaptureProtocol() {
    return;
}
_Script_MovieSceneCapture::MovieSceneCaptureProtocolBase* _Script_MovieSceneCapture::MovieSceneCapture::GetAudioCaptureProtocol() {
    return;
}
