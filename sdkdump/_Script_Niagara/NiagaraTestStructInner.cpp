#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraTestStructInner.hpp"
void* _Script_Niagara::NiagaraTestStructInner::get_InnerVector1() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraTestStructInner::get_InnerVector2() {
    return (void*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraTestStructInner::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraTestStructInner");
    return result;
}
