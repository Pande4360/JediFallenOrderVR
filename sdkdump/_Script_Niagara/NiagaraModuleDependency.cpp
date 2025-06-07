#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraModuleDependency.hpp"
void* _Script_Niagara::NiagaraModuleDependency::get_Type() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Niagara::NiagaraModuleDependency::get_ID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraModuleDependency::get_Description() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraModuleDependency::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraModuleDependency");
    return result;
}
