#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsPhysicalAnimationNotifyParameters.hpp"
void _Script_RsGameTechRT::RsPhysicalAnimationNotifyParameters::set_ModifyPhysicsBlendWeight(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsPhysicalAnimationNotifyParameters::get_BoneName() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_RsGameTechRT::RsPhysicalAnimationNotifyParameters::get_PhysicsBlendWeightFadeInTime() {
    return *(float*)((uintptr_t)this + 0x18);
}
bool _Script_RsGameTechRT::RsPhysicalAnimationNotifyParameters::get_ModifyVelocityDriveStrength() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsPhysicalAnimationNotifyParameters::set_ModifyVelocityDriveStrength(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsPhysicalAnimationNotifyParameters::get_ModifyPhysicsBlendWeight() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
float& _Script_RsGameTechRT::RsPhysicalAnimationNotifyParameters::get_VelocityDriveStrength() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_RsGameTechRT::RsPhysicalAnimationNotifyParameters::get_PhysicsBlendWeight() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_RsGameTechRT::RsPhysicalAnimationNotifyParameters::get_PhysicsBlendWeightFadeOutTime() {
    return *(float*)((uintptr_t)this + 0x1c);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsPhysicalAnimationNotifyParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsPhysicalAnimationNotifyParameters");
    return result;
}
