#include "..\FUObjectArray.hpp"
#include "DestructibleParametersFlag.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void _Script_ApexDestruction::DestructibleParametersFlag::set_bDebrisTimeout(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_ApexDestruction::DestructibleParametersFlag::get_bDebrisTimeout() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 8 != 0;
}
bool _Script_ApexDestruction::DestructibleParametersFlag::get_bAssetDefinedSupport() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 2 != 0;
}
bool _Script_ApexDestruction::DestructibleParametersFlag::get_bAccumulateDamage() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_ApexDestruction::DestructibleParametersFlag::set_bAccumulateDamage(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_ApexDestruction::DestructibleParametersFlag::set_bAssetDefinedSupport(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_ApexDestruction::DestructibleParametersFlag::get_bWorldSupport() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 4 != 0;
}
void _Script_ApexDestruction::DestructibleParametersFlag::set_bWorldSupport(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_ApexDestruction::DestructibleParametersFlag::set_bFormExtendedStructures(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ApexDestruction::DestructibleParametersFlag::get_bDebrisMaxSeparation() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 16 != 0;
}
void _Script_ApexDestruction::DestructibleParametersFlag::set_bDebrisMaxSeparation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_ApexDestruction::DestructibleParametersFlag::get_bCrumbleSmallestChunks() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 32 != 0;
}
void _Script_ApexDestruction::DestructibleParametersFlag::set_bCrumbleSmallestChunks(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_ApexDestruction::DestructibleParametersFlag::get_bAccurateRaycasts() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 64 != 0;
}
void _Script_ApexDestruction::DestructibleParametersFlag::set_bAccurateRaycasts(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_ApexDestruction::DestructibleParametersFlag::get_bUseValidBounds() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 128 != 0;
}
void _Script_ApexDestruction::DestructibleParametersFlag::set_bUseValidBounds(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_ApexDestruction::DestructibleParametersFlag::get_bFormExtendedStructures() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_ApexDestruction::DestructibleParametersFlag::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ApexDestruction.DestructibleParametersFlag");
    return result;
}
