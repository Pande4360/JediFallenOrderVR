#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraVariableMetaData.hpp"
void* _Script_Niagara::NiagaraVariableMetaData::get_PropertyMetaData() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraVariableMetaData::get_ReferencerNodes() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_Niagara::NiagaraVariableMetaData::get_Description() {
    return (void*)((uintptr_t)this + 0x50);
}
int32_t& _Script_Niagara::NiagaraVariableMetaData::get_CallSortPriority() {
    return *(int32_t*)((uintptr_t)this + 0x84);
}
void* _Script_Niagara::NiagaraVariableMetaData::get_CategoryName() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraVariableMetaData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraVariableMetaData");
    return result;
}
int32_t& _Script_Niagara::NiagaraVariableMetaData::get_EditorSortPriority() {
    return *(int32_t*)((uintptr_t)this + 0x80);
}
