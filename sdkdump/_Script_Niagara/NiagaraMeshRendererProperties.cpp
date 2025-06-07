#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "NiagaraMeshRendererProperties.hpp"
#include "NiagaraRendererProperties.hpp"
bool _Script_Niagara::NiagaraMeshRendererProperties::get_bSortOnlyWhenTranslucent() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 2 != 0;
}
_Script_Engine::StaticMesh*& _Script_Niagara::NiagaraMeshRendererProperties::get_ParticleMesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x30);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_SortMode() {
    return (void*)((uintptr_t)this + 0x38);
}
bool _Script_Niagara::NiagaraMeshRendererProperties::get_bOverrideMaterials() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 1 != 0;
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_FacingMode() {
    return (void*)((uintptr_t)this + 0x50);
}
void _Script_Niagara::NiagaraMeshRendererProperties::set_bSortOnlyWhenTranslucent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Niagara::NiagaraMeshRendererProperties::set_bOverrideMaterials(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_OverrideMaterials() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_PositionBinding() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_ColorBinding() {
    return (void*)((uintptr_t)this + 0xe8);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_VelocityBinding() {
    return (void*)((uintptr_t)this + 0x178);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_MeshOrientationBinding() {
    return (void*)((uintptr_t)this + 0x208);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_ScaleBinding() {
    return (void*)((uintptr_t)this + 0x298);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_DynamicMaterialBinding() {
    return (void*)((uintptr_t)this + 0x328);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_DynamicMaterial1Binding() {
    return (void*)((uintptr_t)this + 0x3b8);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_DynamicMaterial2Binding() {
    return (void*)((uintptr_t)this + 0x448);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_DynamicMaterial3Binding() {
    return (void*)((uintptr_t)this + 0x4d8);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_MaterialRandomBinding() {
    return (void*)((uintptr_t)this + 0x568);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_NormalizedAgeBinding() {
    return (void*)((uintptr_t)this + 0x688);
}
void* _Script_Niagara::NiagaraMeshRendererProperties::get_CustomSortingBinding() {
    return (void*)((uintptr_t)this + 0x5f8);
}
int32_t& _Script_Niagara::NiagaraMeshRendererProperties::get_SyncId() {
    return *(int32_t*)((uintptr_t)this + 0x718);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraMeshRendererProperties::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraMeshRendererProperties");
    return result;
}
