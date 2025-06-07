#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraVMExecutableDataId.hpp"
void* _Script_Niagara::NiagaraVMExecutableDataId::get_BaseScriptID() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Niagara::NiagaraVMExecutableDataId::get_AdditionalDefines() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Niagara::NiagaraVMExecutableDataId::get_CompilerVersionID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraVMExecutableDataId::get_ScriptUsageType() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Niagara::NiagaraVMExecutableDataId::get_ReferencedDependencyIds() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Niagara::NiagaraVMExecutableDataId::get_ScriptUsageTypeID() {
    return (void*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraVMExecutableDataId::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraVMExecutableDataId");
    return result;
}
