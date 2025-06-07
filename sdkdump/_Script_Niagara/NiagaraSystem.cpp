#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "NiagaraScript.hpp"
#include "NiagaraSystem.hpp"
void* _Script_Niagara::NiagaraSystem::get_ParameterCollectionOverrides() {
    return (void*)((uintptr_t)this + 0x40);
}
void _Script_Niagara::NiagaraSystem::set_bSolo(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x170 + 0);
    *(uint8_t*)((uintptr_t)this + 0x170 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Niagara::NiagaraSystem::get_bDumpDebugSystemInfo() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraSystem::set_bDumpDebugSystemInfo(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Niagara::NiagaraSystem::get_ActiveCompilations() {
    return (void*)((uintptr_t)this + 0x50);
}
bool _Script_Niagara::NiagaraSystem::get_bDumpDebugEmitterInfo() {
    return (*(uint8_t*)((uintptr_t)this + 0x29 + 0)) & 1 != 0;
}
void* _Script_Niagara::NiagaraSystem::get_EmitterHandles() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_Niagara::NiagaraScript*& _Script_Niagara::NiagaraSystem::get_SystemSpawnScript() {
    return *(_Script_Niagara::NiagaraScript**)((uintptr_t)this + 0x60);
}
void _Script_Niagara::NiagaraSystem::set_bDumpDebugEmitterInfo(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29 + 0);
    *(uint8_t*)((uintptr_t)this + 0x29 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Niagara::NiagaraScript*& _Script_Niagara::NiagaraSystem::get_SystemUpdateScript() {
    return *(_Script_Niagara::NiagaraScript**)((uintptr_t)this + 0x68);
}
void* _Script_Niagara::NiagaraSystem::get_EmitterSpawnAttributes() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Niagara::NiagaraSystem::get_ExposedParameters() {
    return (void*)((uintptr_t)this + 0x80);
}
bool _Script_Niagara::NiagaraSystem::get_bAutoDeactivate() {
    return (*(uint8_t*)((uintptr_t)this + 0x160 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraSystem::set_bAutoDeactivate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x160 + 0);
    *(uint8_t*)((uintptr_t)this + 0x160 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Niagara::NiagaraSystem::get_WarmupTime() {
    return *(float*)((uintptr_t)this + 0x164);
}
int32_t& _Script_Niagara::NiagaraSystem::get_WarmupTickCount() {
    return *(int32_t*)((uintptr_t)this + 0x168);
}
float& _Script_Niagara::NiagaraSystem::get_WarmupTickDelta() {
    return *(float*)((uintptr_t)this + 0x16c);
}
bool _Script_Niagara::NiagaraSystem::get_bSolo() {
    return (*(uint8_t*)((uintptr_t)this + 0x170 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraSystem");
    return result;
}
