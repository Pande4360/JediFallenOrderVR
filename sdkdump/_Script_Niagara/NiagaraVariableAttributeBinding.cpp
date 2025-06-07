#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraVariableAttributeBinding.hpp"
void* _Script_Niagara::NiagaraVariableAttributeBinding::get_DataSetVariable() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Niagara::NiagaraVariableAttributeBinding::get_BoundVariable() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraVariableAttributeBinding::get_DefaultValueIfNonExistent() {
    return (void*)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraVariableAttributeBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraVariableAttributeBinding");
    return result;
}
