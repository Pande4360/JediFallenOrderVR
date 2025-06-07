#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "NiagaraParameterStore.hpp"
_Script_CoreUObject::Class* _Script_Niagara::NiagaraParameterStore::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraParameterStore");
    return result;
}
_Script_CoreUObject::Object*& _Script_Niagara::NiagaraParameterStore::get_Owner() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraParameterStore::get_ParameterOffsets() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Niagara::NiagaraParameterStore::get_ParameterData() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Niagara::NiagaraParameterStore::get_DataInterfaces() {
    return (void*)((uintptr_t)this + 0x68);
}
