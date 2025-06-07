#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAnimatedCameraSocketSettings.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAnimatedCameraSocketSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAnimatedCameraSocketSettings");
    return result;
}
void* _Script_RsGameTechRT::RsAnimatedCameraSocketSettings::get_SocketName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsAnimatedCameraSocketSettings::get_FOVCurveName() {
    return (void*)((uintptr_t)this + 0x8);
}
