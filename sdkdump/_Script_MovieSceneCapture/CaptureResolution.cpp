#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CaptureResolution.hpp"
int32_t& _Script_MovieSceneCapture::CaptureResolution::get_ResX() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_MovieSceneCapture::CaptureResolution::get_ResY() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_MovieSceneCapture::CaptureResolution::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneCapture.CaptureResolution");
    return result;
}
