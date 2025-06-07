#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DeveloperSettings.hpp"
#include "RsCameraSettings.hpp"
void* _Script_RsGameTechRT::RsCameraSettings::get_CameraManagerDefinition() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsCameraSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsCameraSettings");
    return result;
}
