#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "TireConfig.hpp"
float& _Script_PhysXVehicles::TireConfig::get_FrictionScale() {
    return *(float*)((uintptr_t)this + 0x30);
}
void* _Script_PhysXVehicles::TireConfig::get_TireFrictionScales() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_PhysXVehicles::TireConfig::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/PhysXVehicles.TireConfig");
    return result;
}
