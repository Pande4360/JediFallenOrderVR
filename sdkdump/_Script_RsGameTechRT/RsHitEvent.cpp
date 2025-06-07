#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsHitEvent.hpp"
void* _Script_RsGameTechRT::RsHitEvent::get_DamageTypeClass() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsHitEvent::get_BlockDepleteLevel() {
    return (void*)((uintptr_t)this + 0x15);
}
void* _Script_RsGameTechRT::RsHitEvent::get_AttackType() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_RsGameTechRT::RsHitEvent::get_HeroDamageFactor() {
    return *(float*)((uintptr_t)this + 0x10);
}
void* _Script_RsGameTechRT::RsHitEvent::get_BlockLevel() {
    return (void*)((uintptr_t)this + 0x16);
}
void* _Script_RsGameTechRT::RsHitEvent::get_DamageLevel() {
    return (void*)((uintptr_t)this + 0x14);
}
float& _Script_RsGameTechRT::RsHitEvent::get_BlockReactAngleCos() {
    return *(float*)((uintptr_t)this + 0x18);
}
bool _Script_RsGameTechRT::RsHitEvent::get_Undodgeable() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsHitEvent::set_Undodgeable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsHitEvent::get_SingleHit() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e + 0)) & 1 != 0;
}
bool _Script_RsGameTechRT::RsHitEvent::get_Unparryable() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsHitEvent::set_Unparryable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsGameTechRT::RsHitEvent::set_SingleHit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsHitEvent::get_NoDamageInSlowdown() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsHitEvent::set_NoDamageInSlowdown(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsHitEvent::get_DamageFriendlies() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsHitEvent::set_DamageFriendlies(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsHitEvent::get_HitPause() {
    return (void*)((uintptr_t)this + 0x24);
}
void* _Script_RsGameTechRT::RsHitEvent::get_HitImpulse() {
    return (void*)((uintptr_t)this + 0x30);
}
int32_t& _Script_RsGameTechRT::RsHitEvent::get_UniqueHitID() {
    return *(int32_t*)((uintptr_t)this + 0x3c);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsHitEvent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsHitEvent");
    return result;
}
