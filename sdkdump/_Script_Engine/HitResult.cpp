#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HitResult.hpp"
bool _Script_Engine::HitResult::get_bBlockingHit() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
float& _Script_Engine::HitResult::get_Time() {
    return *(float*)((uintptr_t)this + 0xc);
}
void _Script_Engine::HitResult::set_bBlockingHit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::HitResult::get_bValidImpactedPoint() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
bool _Script_Engine::HitResult::get_bStartPenetrating() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 2 != 0;
}
int32_t& _Script_Engine::HitResult::get_FaceIndex() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
void _Script_Engine::HitResult::set_bStartPenetrating(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::HitResult::set_bValidImpactedPoint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::HitResult::get_Distance() {
    return *(float*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::HitResult::get_Location() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_Engine::HitResult::get_ImpactPoint() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::HitResult::get_Normal() {
    return (void*)((uintptr_t)this + 0x2c);
}
void* _Script_Engine::HitResult::get_ImpactedPoint() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::HitResult::get_ImpactNormal() {
    return (void*)((uintptr_t)this + 0x44);
}
void* _Script_Engine::HitResult::get_TraceStart() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Engine::HitResult::get_TraceEnd() {
    return (void*)((uintptr_t)this + 0x5c);
}
float& _Script_Engine::HitResult::get_PenetrationDepth() {
    return *(float*)((uintptr_t)this + 0x68);
}
int32_t& _Script_Engine::HitResult::get_Item() {
    return *(int32_t*)((uintptr_t)this + 0x6c);
}
void* _Script_Engine::HitResult::get_PhysMaterial() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Engine::HitResult::get_Actor() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_Engine::HitResult::get_Component() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_Engine::HitResult::get_BoneName() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_Engine::HitResult::get_MyBoneName() {
    return (void*)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_Engine::HitResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.HitResult");
    return result;
}
