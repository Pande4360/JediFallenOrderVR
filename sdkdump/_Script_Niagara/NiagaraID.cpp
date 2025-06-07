#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraID.hpp"
int32_t& _Script_Niagara::NiagaraID::get_Index() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Niagara::NiagaraID::get_AcquireTag() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraID::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraID");
    return result;
}
