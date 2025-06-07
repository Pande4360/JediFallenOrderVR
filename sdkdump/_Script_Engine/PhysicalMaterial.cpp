#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "PhysicalMaterial.hpp"
#include "PhysicalMaterialPropertyBase.hpp"
float& _Script_Engine::PhysicalMaterial::get_Friction() {
    return *(float*)((uintptr_t)this + 0x28);
}
bool _Script_Engine::PhysicalMaterial::get_bOverrideRestitutionCombineMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x35 + 0)) & 1 != 0;
}
void* _Script_Engine::PhysicalMaterial::get_FrictionCombineMode() {
    return (void*)((uintptr_t)this + 0x2c);
}
bool _Script_Engine::PhysicalMaterial::get_bOverrideFrictionCombineMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d + 0)) & 1 != 0;
}
float& _Script_Engine::PhysicalMaterial::get_DestructibleDamageThresholdScale() {
    return *(float*)((uintptr_t)this + 0x40);
}
void _Script_Engine::PhysicalMaterial::set_bOverrideRestitutionCombineMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x35 + 0);
    *(uint8_t*)((uintptr_t)this + 0x35 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::PhysicalMaterial::set_bOverrideFrictionCombineMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::PhysicalMaterial::get_Restitution() {
    return *(float*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::PhysicalMaterial::get_RestitutionCombineMode() {
    return (void*)((uintptr_t)this + 0x34);
}
float& _Script_Engine::PhysicalMaterial::get_Density() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_Engine::PhysicalMaterial::get_RaiseMassToPower() {
    return *(float*)((uintptr_t)this + 0x3c);
}
_Script_Engine::PhysicalMaterialPropertyBase*& _Script_Engine::PhysicalMaterial::get_PhysicalMaterialProperty() {
    return *(_Script_Engine::PhysicalMaterialPropertyBase**)((uintptr_t)this + 0x48);
}
void* _Script_Engine::PhysicalMaterial::get_SurfaceType() {
    return (void*)((uintptr_t)this + 0x50);
}
float& _Script_Engine::PhysicalMaterial::get_TireFrictionScale() {
    return *(float*)((uintptr_t)this + 0x54);
}
void* _Script_Engine::PhysicalMaterial::get_TireFrictionScales() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::PhysicalMaterial::get_SurfaceTweaks() {
    return (void*)((uintptr_t)this + 0x68);
}
bool _Script_Engine::PhysicalMaterial::get_bUseNavPermissionFlags() {
    return (*(uint8_t*)((uintptr_t)this + 0x70 + 0)) & 1 != 0;
}
void _Script_Engine::PhysicalMaterial::set_bUseNavPermissionFlags(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x70 + 0);
    *(uint8_t*)((uintptr_t)this + 0x70 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::PhysicalMaterial::get_NavPermissions() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Script_Engine::PhysicalMaterial::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PhysicalMaterial");
    return result;
}
void* _Script_Engine::PhysicalMaterial::get_NavPermissionDetails() {
    return (void*)((uintptr_t)this + 0x88);
}
