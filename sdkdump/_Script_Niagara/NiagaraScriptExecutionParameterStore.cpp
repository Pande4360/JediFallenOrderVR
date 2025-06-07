#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraParameterStore.hpp"
#include "NiagaraScriptExecutionParameterStore.hpp"
bool _Script_Niagara::NiagaraScriptExecutionParameterStore::get_bInitialized() {
    return (*(uint8_t*)((uintptr_t)this + 0xf8 + 0)) & 1 != 0;
}
void* _Script_Niagara::NiagaraScriptExecutionParameterStore::get_PaddingInfo() {
    return (void*)((uintptr_t)this + 0xe8);
}
int32_t& _Script_Niagara::NiagaraScriptExecutionParameterStore::get_ParameterSize() {
    return *(int32_t*)((uintptr_t)this + 0xe0);
}
void* _Script_Niagara::NiagaraScriptExecutionParameterStore::get_PaddedParameterSize() {
    return (void*)((uintptr_t)this + 0xe4);
}
void _Script_Niagara::NiagaraScriptExecutionParameterStore::set_bInitialized(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraScriptExecutionParameterStore::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraScriptExecutionParameterStore");
    return result;
}
