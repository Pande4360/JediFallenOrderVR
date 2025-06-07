#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PredictProjectilePathParams.hpp"
void* _Script_Engine::PredictProjectilePathParams::get_StartLocation() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::PredictProjectilePathParams::get_LaunchVelocity() {
    return (void*)((uintptr_t)this + 0xc);
}
bool _Script_Engine::PredictProjectilePathParams::get_bTraceWithCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 1 != 0;
}
void _Script_Engine::PredictProjectilePathParams::set_bTraceWithCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::PredictProjectilePathParams::get_ProjectileRadius() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_Engine::PredictProjectilePathParams::get_MaxSimTime() {
    return *(float*)((uintptr_t)this + 0x20);
}
bool _Script_Engine::PredictProjectilePathParams::get_bTraceWithChannel() {
    return (*(uint8_t*)((uintptr_t)this + 0x24 + 0)) & 1 != 0;
}
void _Script_Engine::PredictProjectilePathParams::set_bTraceWithChannel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24 + 0);
    *(uint8_t*)((uintptr_t)this + 0x24 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::PredictProjectilePathParams::get_TraceChannel() {
    return (void*)((uintptr_t)this + 0x25);
}
void* _Script_Engine::PredictProjectilePathParams::get_ObjectTypes() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::PredictProjectilePathParams::get_ActorsToIgnore() {
    return (void*)((uintptr_t)this + 0x38);
}
float& _Script_Engine::PredictProjectilePathParams::get_SimFrequency() {
    return *(float*)((uintptr_t)this + 0x48);
}
float& _Script_Engine::PredictProjectilePathParams::get_OverrideGravityZ() {
    return *(float*)((uintptr_t)this + 0x4c);
}
void* _Script_Engine::PredictProjectilePathParams::get_DrawDebugType() {
    return (void*)((uintptr_t)this + 0x50);
}
float& _Script_Engine::PredictProjectilePathParams::get_DrawDebugTime() {
    return *(float*)((uintptr_t)this + 0x54);
}
bool _Script_Engine::PredictProjectilePathParams::get_bTraceComplex() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
void _Script_Engine::PredictProjectilePathParams::set_bTraceComplex(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::PredictProjectilePathParams::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PredictProjectilePathParams");
    return result;
}
