#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ImageSequenceProtocol.hpp"
#include "ImageSequenceProtocol_BMP.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneCapture::ImageSequenceProtocol_BMP::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MovieSceneCapture.ImageSequenceProtocol_BMP");
    return result;
}
