#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "NiagaraScript.hpp"
void* _Script_Niagara::NiagaraScript::get_Usage() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Niagara::NiagaraScript::get_ScriptExecutionParamStoreCPU() {
    return (void*)((uintptr_t)this + 0x130);
}
void* _Script_Niagara::NiagaraScript::get_NumericOutputTypeSelectionMode() {
    return (void*)((uintptr_t)this + 0x128);
}
int32_t& _Script_Niagara::NiagaraScript::get_UsageIndex() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
void* _Script_Niagara::NiagaraScript::get_UsageId() {
    return (void*)((uintptr_t)this + 0x30);
}
int32_t& _Script_Niagara::NiagaraScript::get_ModuleUsageBitmask() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
void* _Script_Niagara::NiagaraScript::get_RapidIterationParameters() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Niagara::NiagaraScript::get_ScriptExecutionParamStoreGPU() {
    return (void*)((uintptr_t)this + 0x230);
}
void* _Script_Niagara::NiagaraScript::get_CachedScriptVMId() {
    return (void*)((uintptr_t)this + 0x330);
}
void* _Script_Niagara::NiagaraScript::get_LastGeneratedVMId() {
    return (void*)((uintptr_t)this + 0x398);
}
void* _Script_Niagara::NiagaraScript::get_CachedScriptVM() {
    return (void*)((uintptr_t)this + 0x548);
}
void* _Script_Niagara::NiagaraScript::get_CachedParameterCollectionReferences() {
    return (void*)((uintptr_t)this + 0x6b0);
}
void* _Script_Niagara::NiagaraScript::get_CachedDefaultDataInterfaces() {
    return (void*)((uintptr_t)this + 0x6c0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraScript::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraScript");
    return result;
}
void _Script_Niagara::NiagaraScript::OnCompilationComplete() {
    return;
}
