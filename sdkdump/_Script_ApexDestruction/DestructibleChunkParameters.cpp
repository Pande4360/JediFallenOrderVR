#include "..\FUObjectArray.hpp"
#include "DestructibleChunkParameters.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
bool _Script_ApexDestruction::DestructibleChunkParameters::get_bIsSupportChunk() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
bool _Script_ApexDestruction::DestructibleChunkParameters::get_bDoNotCrumble() {
    return (*(uint8_t*)((uintptr_t)this + 0x3 + 0)) & 1 != 0;
}
void _Script_ApexDestruction::DestructibleChunkParameters::set_bIsSupportChunk(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ApexDestruction::DestructibleChunkParameters::get_bDoNotFracture() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
void _Script_ApexDestruction::DestructibleChunkParameters::set_bDoNotFracture(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ApexDestruction::DestructibleChunkParameters::get_bDoNotDamage() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 1 != 0;
}
void _Script_ApexDestruction::DestructibleChunkParameters::set_bDoNotCrumble(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_ApexDestruction::DestructibleChunkParameters::set_bDoNotDamage(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_ApexDestruction::DestructibleChunkParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ApexDestruction.DestructibleChunkParameters");
    return result;
}
