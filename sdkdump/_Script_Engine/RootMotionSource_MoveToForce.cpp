#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CurveVector.hpp"
#include "RootMotionSource.hpp"
#include "RootMotionSource_MoveToForce.hpp"
bool _Script_Engine::RootMotionSource_MoveToForce::get_bRestrictSpeedToExpected() {
    return (*(uint8_t*)((uintptr_t)this + 0xb0 + 0)) & 1 != 0;
}
void* _Script_Engine::RootMotionSource_MoveToForce::get_StartLocation() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_Engine::RootMotionSource_MoveToForce::get_TargetLocation() {
    return (void*)((uintptr_t)this + 0xa4);
}
void _Script_Engine::RootMotionSource_MoveToForce::set_bRestrictSpeedToExpected(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::CurveVector*& _Script_Engine::RootMotionSource_MoveToForce::get_PathOffsetCurve() {
    return *(_Script_Engine::CurveVector**)((uintptr_t)this + 0xb8);
}
_Script_CoreUObject::Class* _Script_Engine::RootMotionSource_MoveToForce::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RootMotionSource_MoveToForce");
    return result;
}
