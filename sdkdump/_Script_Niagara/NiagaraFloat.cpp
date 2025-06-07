#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraFloat.hpp"
_Script_CoreUObject::Class* _Script_Niagara::NiagaraFloat::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraFloat");
    return result;
}
float& _Script_Niagara::NiagaraFloat::get_Value() {
    return *(float*)((uintptr_t)this + 0x0);
}
