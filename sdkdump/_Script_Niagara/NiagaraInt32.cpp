#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraInt32.hpp"
int32_t& _Script_Niagara::NiagaraInt32::get_Value() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraInt32::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraInt32");
    return result;
}
