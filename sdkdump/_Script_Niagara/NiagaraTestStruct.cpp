#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraTestStruct.hpp"
void* _Script_Niagara::NiagaraTestStruct::get_Vector1() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraTestStruct::get_Vector2() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_Niagara::NiagaraTestStruct::get_InnerStruct1() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Niagara::NiagaraTestStruct::get_InnerStruct2() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraTestStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraTestStruct");
    return result;
}
