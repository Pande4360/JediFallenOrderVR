#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataInterface.hpp"
#include "NiagaraScriptDataInterfaceInfo.hpp"
_Script_Niagara::NiagaraDataInterface*& _Script_Niagara::NiagaraScriptDataInterfaceInfo::get_DataInterface() {
    return *(_Script_Niagara::NiagaraDataInterface**)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraScriptDataInterfaceInfo::get_Name() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Niagara::NiagaraScriptDataInterfaceInfo::get_RegisteredParameterMapWrite() {
    return (void*)((uintptr_t)this + 0x38);
}
int32_t& _Script_Niagara::NiagaraScriptDataInterfaceInfo::get_UserPtrIdx() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
void* _Script_Niagara::NiagaraScriptDataInterfaceInfo::get_Type() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Niagara::NiagaraScriptDataInterfaceInfo::get_RegisteredParameterMapRead() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraScriptDataInterfaceInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraScriptDataInterfaceInfo");
    return result;
}
