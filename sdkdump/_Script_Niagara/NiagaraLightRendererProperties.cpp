#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraLightRendererProperties.hpp"
#include "NiagaraRendererProperties.hpp"
void* _Script_Niagara::NiagaraLightRendererProperties::get_RadiusBinding() {
    return (void*)((uintptr_t)this + 0x160);
}
float& _Script_Niagara::NiagaraLightRendererProperties::get_RadiusScale() {
    return *(float*)((uintptr_t)this + 0x30);
}
void* _Script_Niagara::NiagaraLightRendererProperties::get_PositionBinding() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Niagara::NiagaraLightRendererProperties::get_ColorAdd() {
    return (void*)((uintptr_t)this + 0x34);
}
void* _Script_Niagara::NiagaraLightRendererProperties::get_ColorBinding() {
    return (void*)((uintptr_t)this + 0xd0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraLightRendererProperties::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraLightRendererProperties");
    return result;
}
