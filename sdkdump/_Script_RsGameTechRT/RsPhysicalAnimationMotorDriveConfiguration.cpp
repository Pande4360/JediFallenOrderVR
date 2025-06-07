#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsPhysicalAnimationMotorDriveConfiguration.hpp"
void* _Script_RsGameTechRT::RsPhysicalAnimationMotorDriveConfiguration::get_ConstraintBone1() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsPhysicalAnimationMotorDriveConfiguration::get_ConstraintBone2() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_RsGameTechRT::RsPhysicalAnimationMotorDriveConfiguration::get_PositionDrive() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_RsGameTechRT::RsPhysicalAnimationMotorDriveConfiguration::get_VelocityDrive() {
    return *(float*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsPhysicalAnimationMotorDriveConfiguration::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsPhysicalAnimationMotorDriveConfiguration");
    return result;
}
