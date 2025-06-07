#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "NiagaraEmitter.hpp"
#include "NiagaraScript.hpp"
void* _Script_Niagara::NiagaraEmitter::get_EmitterSpawnScriptProps() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_Niagara::NiagaraEmitter::get_UpdateScriptProps() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_Niagara::NiagaraEmitter::get_bLocalSpace() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraEmitter::set_bLocalSpace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Niagara::NiagaraEmitter::get_SpawnScriptProps() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Niagara::NiagaraEmitter::get_EmitterUpdateScriptProps() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_Niagara::NiagaraEmitter::get_FixedBounds() {
    return (void*)((uintptr_t)this + 0xd4);
}
void* _Script_Niagara::NiagaraEmitter::get_SimTarget() {
    return (void*)((uintptr_t)this + 0xd0);
}
int32_t& _Script_Niagara::NiagaraEmitter::get_MinDetailLevel() {
    return *(int32_t*)((uintptr_t)this + 0xf0);
}
int32_t& _Script_Niagara::NiagaraEmitter::get_MaxDetailLevel() {
    return *(int32_t*)((uintptr_t)this + 0xf4);
}
bool _Script_Niagara::NiagaraEmitter::get_bInterpolatedSpawning() {
    return (*(uint8_t*)((uintptr_t)this + 0xf8 + 0)) & 1 != 0;
}
void _Script_Niagara::NiagaraEmitter::set_bInterpolatedSpawning(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Niagara::NiagaraEmitter::get_bFixedBounds() {
    return (*(uint8_t*)((uintptr_t)this + 0xf8 + 0)) & 2 != 0;
}
void _Script_Niagara::NiagaraEmitter::set_bFixedBounds(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Niagara::NiagaraEmitter::get_bUseMinDetailLevel() {
    return (*(uint8_t*)((uintptr_t)this + 0xf8 + 0)) & 4 != 0;
}
void _Script_Niagara::NiagaraEmitter::set_bUseMinDetailLevel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf8 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Niagara::NiagaraEmitter::get_bUseMaxDetailLevel() {
    return (*(uint8_t*)((uintptr_t)this + 0xf8 + 0)) & 8 != 0;
}
void _Script_Niagara::NiagaraEmitter::set_bUseMaxDetailLevel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf8 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void* _Script_Niagara::NiagaraEmitter::get_UniqueEmitterName() {
    return (void*)((uintptr_t)this + 0x100);
}
bool _Script_Niagara::NiagaraEmitter::get_bRequiresPersistentIDs() {
    return (*(uint8_t*)((uintptr_t)this + 0xf8 + 0)) & 16 != 0;
}
void _Script_Niagara::NiagaraEmitter::set_bRequiresPersistentIDs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf8 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void* _Script_Niagara::NiagaraEmitter::get_RendererProperties() {
    return (void*)((uintptr_t)this + 0x110);
}
void* _Script_Niagara::NiagaraEmitter::get_EventHandlerScriptProps() {
    return (void*)((uintptr_t)this + 0x120);
}
_Script_Niagara::NiagaraScript*& _Script_Niagara::NiagaraEmitter::get_GPUComputeScript() {
    return *(_Script_Niagara::NiagaraScript**)((uintptr_t)this + 0x130);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraEmitter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraEmitter");
    return result;
}
