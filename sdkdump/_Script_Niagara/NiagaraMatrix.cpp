#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraMatrix.hpp"
void* _Script_Niagara::NiagaraMatrix::get_Row1() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Niagara::NiagaraMatrix::get_Row0() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraMatrix::get_Row3() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Niagara::NiagaraMatrix::get_Row2() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraMatrix::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraMatrix");
    return result;
}
