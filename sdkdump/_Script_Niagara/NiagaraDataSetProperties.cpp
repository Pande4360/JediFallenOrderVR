#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataSetProperties.hpp"
void* _Script_Niagara::NiagaraDataSetProperties::get_ID() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraDataSetProperties::get_Variables() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataSetProperties::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraDataSetProperties");
    return result;
}
