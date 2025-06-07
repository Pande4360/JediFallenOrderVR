#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraStatScope.hpp"
_Script_CoreUObject::Class* _Script_Niagara::NiagaraStatScope::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraStatScope");
    return result;
}
void* _Script_Niagara::NiagaraStatScope::get_FullName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraStatScope::get_FriendlyName() {
    return (void*)((uintptr_t)this + 0x8);
}
