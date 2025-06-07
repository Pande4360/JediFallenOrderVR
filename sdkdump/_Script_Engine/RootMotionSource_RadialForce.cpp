#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "CurveFloat.hpp"
#include "RootMotionSource.hpp"
#include "RootMotionSource_RadialForce.hpp"
bool _Script_Engine::RootMotionSource_RadialForce::get_bNoZForce() {
    return (*(uint8_t*)((uintptr_t)this + 0xb9 + 0)) & 1 != 0;
}
void* _Script_Engine::RootMotionSource_RadialForce::get_Location() {
    return (void*)((uintptr_t)this + 0x98);
}
float& _Script_Engine::RootMotionSource_RadialForce::get_Radius() {
    return *(float*)((uintptr_t)this + 0xb0);
}
_Script_Engine::Actor*& _Script_Engine::RootMotionSource_RadialForce::get_LocationActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0xa8);
}
float& _Script_Engine::RootMotionSource_RadialForce::get_Strength() {
    return *(float*)((uintptr_t)this + 0xb4);
}
bool _Script_Engine::RootMotionSource_RadialForce::get_bIsPush() {
    return (*(uint8_t*)((uintptr_t)this + 0xb8 + 0)) & 1 != 0;
}
void _Script_Engine::RootMotionSource_RadialForce::set_bIsPush(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::RootMotionSource_RadialForce::set_bNoZForce(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb9 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::CurveFloat*& _Script_Engine::RootMotionSource_RadialForce::get_StrengthDistanceFalloff() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0xc0);
}
_Script_Engine::CurveFloat*& _Script_Engine::RootMotionSource_RadialForce::get_StrengthOverTime() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0xc8);
}
bool _Script_Engine::RootMotionSource_RadialForce::get_bUseFixedWorldDirection() {
    return (*(uint8_t*)((uintptr_t)this + 0xd0 + 0)) & 1 != 0;
}
void _Script_Engine::RootMotionSource_RadialForce::set_bUseFixedWorldDirection(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::RootMotionSource_RadialForce::get_FixedWorldDirection() {
    return (void*)((uintptr_t)this + 0xd4);
}
_Script_CoreUObject::Class* _Script_Engine::RootMotionSource_RadialForce::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RootMotionSource_RadialForce");
    return result;
}
