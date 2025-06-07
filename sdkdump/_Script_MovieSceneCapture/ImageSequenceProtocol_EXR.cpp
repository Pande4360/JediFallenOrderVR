#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ImageSequenceProtocol.hpp"
#include "ImageSequenceProtocol_EXR.hpp"
bool _Script_MovieSceneCapture::ImageSequenceProtocol_EXR::get_bCompressed() {
    return (*(uint8_t*)((uintptr_t)this + 0xd8 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_MovieSceneCapture::ImageSequenceProtocol_EXR::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneCapture.ImageSequenceProtocol_EXR");
    return result;
}
void _Script_MovieSceneCapture::ImageSequenceProtocol_EXR::set_bCompressed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_MovieSceneCapture::ImageSequenceProtocol_EXR::get_CaptureGamut() {
    return (void*)((uintptr_t)this + 0xd9);
}
