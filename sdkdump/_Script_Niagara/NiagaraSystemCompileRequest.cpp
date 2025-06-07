#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraSystemCompileRequest.hpp"
void* _Script_Niagara::NiagaraSystemCompileRequest::get_RootObjects() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraSystemCompileRequest::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraSystemCompileRequest");
    return result;
}
