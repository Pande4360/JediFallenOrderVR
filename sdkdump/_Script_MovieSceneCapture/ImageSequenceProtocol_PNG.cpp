#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CompressedImageSequenceProtocol.hpp"
#include "ImageSequenceProtocol_PNG.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneCapture::ImageSequenceProtocol_PNG::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneCapture.ImageSequenceProtocol_PNG");
    return result;
}
