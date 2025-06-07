#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CompressedImageSequenceProtocol.hpp"
#include "ImageSequenceProtocol_JPG.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneCapture::ImageSequenceProtocol_JPG::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneCapture.ImageSequenceProtocol_JPG");
    return result;
}
