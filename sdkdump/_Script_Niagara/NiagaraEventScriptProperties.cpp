#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraEmitterScriptProperties.hpp"
#include "NiagaraEventScriptProperties.hpp"
void _Script_Niagara::NiagaraEventScriptProperties::set_bRandomSpawnNumber(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Niagara::NiagaraEventScriptProperties::get_ExecutionMode() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Niagara::NiagaraEventScriptProperties::get_MinSpawnNumber() {
    return (void*)((uintptr_t)this + 0x54);
}
bool _Script_Niagara::NiagaraEventScriptProperties::get_bRandomSpawnNumber() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
void* _Script_Niagara::NiagaraEventScriptProperties::get_SpawnNumber() {
    return (void*)((uintptr_t)this + 0x2c);
}
void* _Script_Niagara::NiagaraEventScriptProperties::get_SourceEventName() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Niagara::NiagaraEventScriptProperties::get_MaxEventsPerFrame() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Niagara::NiagaraEventScriptProperties::get_SourceEmitterID() {
    return (void*)((uintptr_t)this + 0x34);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraEventScriptProperties::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraEventScriptProperties");
    return result;
}
