#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraVariable.hpp"
void* _Script_Niagara::NiagaraVariable::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraVariable::get_TypeDef() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Niagara::NiagaraVariable::get_VarData() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraVariable::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraVariable");
    return result;
}
