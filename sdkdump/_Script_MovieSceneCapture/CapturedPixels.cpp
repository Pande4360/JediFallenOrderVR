#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CapturedPixels.hpp"
_Script_CoreUObject::Class* _Script_MovieSceneCapture::CapturedPixels::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneCapture.CapturedPixels");
    return result;
}
