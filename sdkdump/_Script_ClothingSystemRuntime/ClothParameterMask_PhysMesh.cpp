#include "..\FUObjectArray.hpp"
#include "ClothParameterMask_PhysMesh.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void _Script_ClothingSystemRuntime::ClothParameterMask_PhysMesh::set_bEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_ClothingSystemRuntime::ClothParameterMask_PhysMesh::get_MaskName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_ClothingSystemRuntime::ClothParameterMask_PhysMesh::get_Values() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_ClothingSystemRuntime::ClothParameterMask_PhysMesh::get_CurrentTarget() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_ClothingSystemRuntime::ClothParameterMask_PhysMesh::get_MaxValue() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_ClothingSystemRuntime::ClothParameterMask_PhysMesh::get_MinValue() {
    return *(float*)((uintptr_t)this + 0x10);
}
bool _Script_ClothingSystemRuntime::ClothParameterMask_PhysMesh::get_bEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_ClothingSystemRuntime::ClothParameterMask_PhysMesh::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ClothingSystemRuntime.ClothParameterMask_PhysMesh");
    return result;
}
