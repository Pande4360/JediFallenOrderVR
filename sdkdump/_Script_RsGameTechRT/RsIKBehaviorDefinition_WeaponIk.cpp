#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsIKBehaviorDefinition.hpp"
#include "RsIKBehaviorDefinition_WeaponIk.hpp"
float& _Script_RsGameTechRT::RsIKBehaviorDefinition_WeaponIk::get_MaxTwoHandedWeaponRotationAngleDegrees() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_RsGameTechRT::RsIKBehaviorDefinition_WeaponIk::get_MaxOneHandedWeaponRotationAngleDegrees() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_RsGameTechRT::RsIKBehaviorDefinition_WeaponIk::get_MaxPositionDelta() {
    return *(float*)((uintptr_t)this + 0x40);
}
float& _Script_RsGameTechRT::RsIKBehaviorDefinition_WeaponIk::get_MinDistFromHand() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_RsGameTechRT::RsIKBehaviorDefinition_WeaponIk::get_BlendInTime() {
    return *(float*)((uintptr_t)this + 0x3c);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsIKBehaviorDefinition_WeaponIk::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsIKBehaviorDefinition_WeaponIk");
    return result;
}
bool _Script_RsGameTechRT::RsIKBehaviorDefinition_WeaponIk::get_bDebugDraw() {
    return (*(uint8_t*)((uintptr_t)this + 0x44 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsIKBehaviorDefinition_WeaponIk::set_bDebugDraw(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x44 + 0);
    *(uint8_t*)((uintptr_t)this + 0x44 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
