#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraFunctionSignature.hpp"
void* _Script_Niagara::NiagaraFunctionSignature::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_Niagara::NiagaraFunctionSignature::get_bMemberFunction() {
    return (*(uint8_t*)((uintptr_t)this + 0x31 + 0)) & 1 != 0;
}
void* _Script_Niagara::NiagaraFunctionSignature::get_Inputs() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_Niagara::NiagaraFunctionSignature::get_bRequiresContext() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void* _Script_Niagara::NiagaraFunctionSignature::get_Outputs() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Niagara::NiagaraFunctionSignature::get_OwnerName() {
    return (void*)((uintptr_t)this + 0x28);
}
void _Script_Niagara::NiagaraFunctionSignature::set_bMemberFunction(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x31 + 0);
    *(uint8_t*)((uintptr_t)this + 0x31 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Niagara::NiagaraFunctionSignature::set_bRequiresContext(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraFunctionSignature::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraFunctionSignature");
    return result;
}
