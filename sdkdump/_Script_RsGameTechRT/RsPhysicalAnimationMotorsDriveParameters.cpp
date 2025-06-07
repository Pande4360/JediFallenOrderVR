#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsPhysicalAnimationMotorsDriveParameters.hpp"
float& _Script_RsGameTechRT::RsPhysicalAnimationMotorsDriveParameters::get_DefaultPositionDrive() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_RsGameTechRT::RsPhysicalAnimationMotorsDriveParameters::get_DefaultVelocityDrive() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsPhysicalAnimationMotorsDriveParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsPhysicalAnimationMotorsDriveParameters");
    return result;
}
bool _Script_RsGameTechRT::RsPhysicalAnimationMotorsDriveParameters::get_UseMotorsDriveConfiguration() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsPhysicalAnimationMotorsDriveParameters::set_UseMotorsDriveConfiguration(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsPhysicalAnimationMotorsDriveParameters::get_MotorsDriveConfiguration() {
    return (void*)((uintptr_t)this + 0x10);
}
