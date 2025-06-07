#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PhysicalMaterial.hpp"
#include "TireConfigMaterialFriction.hpp"
_Script_Engine::PhysicalMaterial*& _Script_PhysXVehicles::TireConfigMaterialFriction::get_PhysicalMaterial() {
    return *(_Script_Engine::PhysicalMaterial**)((uintptr_t)this + 0x0);
}
float& _Script_PhysXVehicles::TireConfigMaterialFriction::get_FrictionScale() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_PhysXVehicles::TireConfigMaterialFriction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PhysXVehicles.TireConfigMaterialFriction");
    return result;
}
