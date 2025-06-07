#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraEmitter.hpp"
#include "NiagaraEmitterHandle.hpp"
void* _Script_Niagara::NiagaraEmitterHandle::get_Name() {
    return (void*)((uintptr_t)this + 0x20);
}
void _Script_Niagara::NiagaraEmitterHandle::set_bIsEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Niagara::NiagaraEmitterHandle::get_ID() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_Niagara::NiagaraEmitter*& _Script_Niagara::NiagaraEmitterHandle::get_Instance() {
    return *(_Script_Niagara::NiagaraEmitter**)((uintptr_t)this + 0x28);
}
void* _Script_Niagara::NiagaraEmitterHandle::get_IdName() {
    return (void*)((uintptr_t)this + 0x10);
}
bool _Script_Niagara::NiagaraEmitterHandle::get_bIsEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraEmitterHandle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraEmitterHandle");
    return result;
}
