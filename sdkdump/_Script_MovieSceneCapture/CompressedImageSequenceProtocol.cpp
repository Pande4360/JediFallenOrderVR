#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CompressedImageSequenceProtocol.hpp"
#include "ImageSequenceProtocol.hpp"
int32_t& _Script_MovieSceneCapture::CompressedImageSequenceProtocol::get_CompressionQuality() {
    return *(int32_t*)((uintptr_t)this + 0xd8);
}
_Script_CoreUObject::Class* _Script_MovieSceneCapture::CompressedImageSequenceProtocol::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneCapture.CompressedImageSequenceProtocol");
    return result;
}
