#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataInterface.hpp"
#include "NiagaraDataInterfaceCurveBase.hpp"
bool _Script_Niagara::NiagaraDataInterfaceCurveBase::get_GPUBufferDirty() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
bool _Script_Niagara::NiagaraDataInterfaceCurveBase::get_bUseLUT() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraDataInterfaceCurveBase::set_GPUBufferDirty(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Niagara::NiagaraDataInterfaceCurveBase::set_bUseLUT(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Niagara::NiagaraDataInterfaceCurveBase::get_ShaderLUT() {
    return (void*)((uintptr_t)this + 0x30);
}
float& _Script_Niagara::NiagaraDataInterfaceCurveBase::get_LUTMinTime() {
    return *(float*)((uintptr_t)this + 0x40);
}
float& _Script_Niagara::NiagaraDataInterfaceCurveBase::get_LUTMaxTime() {
    return *(float*)((uintptr_t)this + 0x44);
}
float& _Script_Niagara::NiagaraDataInterfaceCurveBase::get_LUTInvTimeRange() {
    return *(float*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataInterfaceCurveBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraDataInterfaceCurveBase");
    return result;
}
