#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "NiagaraRendererProperties.hpp"
#include "NiagaraRibbonRendererProperties.hpp"
float& _Script_Niagara::NiagaraRibbonRendererProperties::get_UV1TilingDistance() {
    return *(float*)((uintptr_t)this + 0x54);
}
_Script_Engine::MaterialInterface*& _Script_Niagara::NiagaraRibbonRendererProperties::get_Material() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x30);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_FacingMode() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_UV0AgeOffsetMode() {
    return (void*)((uintptr_t)this + 0x50);
}
float& _Script_Niagara::NiagaraRibbonRendererProperties::get_UV0TilingDistance() {
    return *(float*)((uintptr_t)this + 0x3c);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_UV0Scale() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_UV0Offset() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraRibbonRendererProperties::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraRibbonRendererProperties");
    return result;
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_UV1Scale() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_UV1Offset() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_UV1AgeOffsetMode() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_DrawDirection() {
    return (void*)((uintptr_t)this + 0x69);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_PositionBinding() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_ColorBinding() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_VelocityBinding() {
    return (void*)((uintptr_t)this + 0x190);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_NormalizedAgeBinding() {
    return (void*)((uintptr_t)this + 0x220);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_RibbonTwistBinding() {
    return (void*)((uintptr_t)this + 0x2b0);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_RibbonWidthBinding() {
    return (void*)((uintptr_t)this + 0x340);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_RibbonFacingBinding() {
    return (void*)((uintptr_t)this + 0x3d0);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_RibbonIdBinding() {
    return (void*)((uintptr_t)this + 0x460);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_RibbonLinkOrderBinding() {
    return (void*)((uintptr_t)this + 0x4f0);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_MaterialRandomBinding() {
    return (void*)((uintptr_t)this + 0x580);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_DynamicMaterialBinding() {
    return (void*)((uintptr_t)this + 0x610);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_DynamicMaterial1Binding() {
    return (void*)((uintptr_t)this + 0x6a0);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_DynamicMaterial2Binding() {
    return (void*)((uintptr_t)this + 0x730);
}
void* _Script_Niagara::NiagaraRibbonRendererProperties::get_DynamicMaterial3Binding() {
    return (void*)((uintptr_t)this + 0x7c0);
}
int32_t& _Script_Niagara::NiagaraRibbonRendererProperties::get_SyncId() {
    return *(int32_t*)((uintptr_t)this + 0x850);
}
