#include "..\FUObjectArray.hpp"
#include "ClothConfig.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ClothingSystemRuntime::ClothConfig::get_WindMethod() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_ClothingSystemRuntime::ClothConfig::get_SelfCollisionStiffness() {
    return *(float*)((uintptr_t)this + 0x54);
}
void* _Script_ClothingSystemRuntime::ClothConfig::get_HorizontalConstraintConfig() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_ClothingSystemRuntime::ClothConfig::get_OverrideRootBoneName() {
    return (void*)((uintptr_t)this + 0x8);
}
void _Script_ClothingSystemRuntime::ClothConfig::set_bUseGravityOverride(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ClothingSystemRuntime::ClothConfig::get_VerticalConstraintConfig() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_ClothingSystemRuntime::ClothConfig::get_BendConstraintConfig() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_ClothingSystemRuntime::ClothConfig::get_ShearConstraintConfig() {
    return (void*)((uintptr_t)this + 0x40);
}
float& _Script_ClothingSystemRuntime::ClothConfig::get_SelfCollisionRadius() {
    return *(float*)((uintptr_t)this + 0x50);
}
void* _Script_ClothingSystemRuntime::ClothConfig::get_LinearDrag() {
    return (void*)((uintptr_t)this + 0x74);
}
float& _Script_ClothingSystemRuntime::ClothConfig::get_SelfCollisionCullScale() {
    return *(float*)((uintptr_t)this + 0x58);
}
void* _Script_ClothingSystemRuntime::ClothConfig::get_Damping() {
    return (void*)((uintptr_t)this + 0x5c);
}
float& _Script_ClothingSystemRuntime::ClothConfig::get_Friction() {
    return *(float*)((uintptr_t)this + 0x68);
}
float& _Script_ClothingSystemRuntime::ClothConfig::get_WindDragCoefficient() {
    return *(float*)((uintptr_t)this + 0x6c);
}
float& _Script_ClothingSystemRuntime::ClothConfig::get_WindLiftCoefficient() {
    return *(float*)((uintptr_t)this + 0x70);
}
void* _Script_ClothingSystemRuntime::ClothConfig::get_AngularDrag() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_ClothingSystemRuntime::ClothConfig::get_LinearInertiaScale() {
    return (void*)((uintptr_t)this + 0x8c);
}
void* _Script_ClothingSystemRuntime::ClothConfig::get_AngularInertiaScale() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_ClothingSystemRuntime::ClothConfig::get_CentrifugalInertiaScale() {
    return (void*)((uintptr_t)this + 0xa4);
}
float& _Script_ClothingSystemRuntime::ClothConfig::get_SolverFrequency() {
    return *(float*)((uintptr_t)this + 0xb0);
}
float& _Script_ClothingSystemRuntime::ClothConfig::get_StiffnessFrequency() {
    return *(float*)((uintptr_t)this + 0xb4);
}
float& _Script_ClothingSystemRuntime::ClothConfig::get_AnimDriveDamperStiffness() {
    return *(float*)((uintptr_t)this + 0xdc);
}
float& _Script_ClothingSystemRuntime::ClothConfig::get_GravityScale() {
    return *(float*)((uintptr_t)this + 0xb8);
}
void* _Script_ClothingSystemRuntime::ClothConfig::get_GravityOverride() {
    return (void*)((uintptr_t)this + 0xbc);
}
bool _Script_ClothingSystemRuntime::ClothConfig::get_bUseGravityOverride() {
    return (*(uint8_t*)((uintptr_t)this + 0xc8 + 0)) & 1 != 0;
}
float& _Script_ClothingSystemRuntime::ClothConfig::get_TetherStiffness() {
    return *(float*)((uintptr_t)this + 0xcc);
}
float& _Script_ClothingSystemRuntime::ClothConfig::get_CollisionThickness() {
    return *(float*)((uintptr_t)this + 0xd4);
}
float& _Script_ClothingSystemRuntime::ClothConfig::get_TetherLimit() {
    return *(float*)((uintptr_t)this + 0xd0);
}
float& _Script_ClothingSystemRuntime::ClothConfig::get_AnimDriveSpringStiffness() {
    return *(float*)((uintptr_t)this + 0xd8);
}
_Script_CoreUObject::Class* _Script_ClothingSystemRuntime::ClothConfig::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ClothingSystemRuntime.ClothConfig");
    return result;
}
