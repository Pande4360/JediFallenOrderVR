#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "RsPhysicalAnimationMotorsDriveProfile.hpp"
void* _Script_RsGameTechRT::RsPhysicalAnimationMotorsDriveProfile::get_MotorsDriveParameters() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsPhysicalAnimationMotorsDriveProfile::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsPhysicalAnimationMotorsDriveProfile");
    return result;
}
