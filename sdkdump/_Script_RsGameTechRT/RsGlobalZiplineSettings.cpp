#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DeveloperSettings.hpp"
#include "RsGlobalZiplineSettings.hpp"
float& _Script_RsGameTechRT::RsGlobalZiplineSettings::get_ZiplineMaxVerticalAngleDegrees() {
    return *(float*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsGlobalZiplineSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsGlobalZiplineSettings");
    return result;
}
