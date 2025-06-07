#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "CompositionGraphCaptureProtocol.hpp"
#include "MovieSceneImageCaptureProtocolBase.hpp"
void _Script_MovieSceneCapture::CompositionGraphCaptureProtocol::set_bDisableScreenPercentage(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x90 + 0);
    *(uint8_t*)((uintptr_t)this + 0x90 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MovieSceneCapture::CompositionGraphCaptureProtocol::get_IncludeRenderPasses() {
    return (void*)((uintptr_t)this + 0x58);
}
bool _Script_MovieSceneCapture::CompositionGraphCaptureProtocol::get_bCaptureFramesInHDR() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 1 != 0;
}
void _Script_MovieSceneCapture::CompositionGraphCaptureProtocol::set_bCaptureFramesInHDR(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_MovieSceneCapture::CompositionGraphCaptureProtocol::get_HDRCompressionQuality() {
    return *(int32_t*)((uintptr_t)this + 0x6c);
}
void* _Script_MovieSceneCapture::CompositionGraphCaptureProtocol::get_CaptureGamut() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_MovieSceneCapture::CompositionGraphCaptureProtocol::get_PostProcessingMaterial() {
    return (void*)((uintptr_t)this + 0x78);
}
bool _Script_MovieSceneCapture::CompositionGraphCaptureProtocol::get_bDisableScreenPercentage() {
    return (*(uint8_t*)((uintptr_t)this + 0x90 + 0)) & 1 != 0;
}
_Script_Engine::MaterialInterface*& _Script_MovieSceneCapture::CompositionGraphCaptureProtocol::get_PostProcessingMaterialPtr() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x98);
}
_Script_CoreUObject::Class* _Script_MovieSceneCapture::CompositionGraphCaptureProtocol::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneCapture.CompositionGraphCaptureProtocol");
    return result;
}
