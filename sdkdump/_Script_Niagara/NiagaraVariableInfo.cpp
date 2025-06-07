#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataInterface.hpp"
#include "NiagaraVariableInfo.hpp"
void* _Script_Niagara::NiagaraVariableInfo::get_Variable() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraVariableInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraVariableInfo");
    return result;
}
void* _Script_Niagara::NiagaraVariableInfo::get_Definition() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_Niagara::NiagaraDataInterface*& _Script_Niagara::NiagaraVariableInfo::get_DataInterface() {
    return *(_Script_Niagara::NiagaraDataInterface**)((uintptr_t)this + 0x48);
}
