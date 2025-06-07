#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsFireProjectileParameter.hpp"
bool _Script_RsGameTechRT::RsFireProjectileParameter::get_bFireAlternateProjectileType() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsFireProjectileParameter::get_ShotAccuracyOverrideMode() {
    return (void*)((uintptr_t)this + 0x1);
}
void _Script_RsGameTechRT::RsFireProjectileParameter::set_bFireAlternateProjectileType(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsFireProjectileParameter::get_bCanShootDuringForceSlow() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 2 != 0;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsFireProjectileParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsFireProjectileParameter");
    return result;
}
void _Script_RsGameTechRT::RsFireProjectileParameter::set_bCanShootDuringForceSlow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_RsGameTechRT::RsFireProjectileParameter::get_ShootingConeHalfAngle() {
    return *(float*)((uintptr_t)this + 0x4);
}
