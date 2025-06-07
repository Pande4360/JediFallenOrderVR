#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraDataSetID.hpp"
void* _Script_Niagara::NiagaraDataSetID::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraDataSetID::get_Type() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraDataSetID::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraDataSetID");
    return result;
}
