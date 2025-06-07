#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CurveFloat.hpp"
#include "CurveVector.hpp"
#include "RootMotionSource.hpp"
#include "RootMotionSource_JumpForce.hpp"
void* _Script_Engine::RootMotionSource_JumpForce::get_Rotation() {
    return (void*)((uintptr_t)this + 0x98);
}
_Script_CoreUObject::Class* _Script_Engine::RootMotionSource_JumpForce::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RootMotionSource_JumpForce");
    return result;
}
float& _Script_Engine::RootMotionSource_JumpForce::get_Distance() {
    return *(float*)((uintptr_t)this + 0xa4);
}
void _Script_Engine::RootMotionSource_JumpForce::set_bDisableTimeout(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xac + 0);
    *(uint8_t*)((uintptr_t)this + 0xac + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::RootMotionSource_JumpForce::get_Height() {
    return *(float*)((uintptr_t)this + 0xa8);
}
bool _Script_Engine::RootMotionSource_JumpForce::get_bDisableTimeout() {
    return (*(uint8_t*)((uintptr_t)this + 0xac + 0)) & 1 != 0;
}
_Script_Engine::CurveVector*& _Script_Engine::RootMotionSource_JumpForce::get_PathOffsetCurve() {
    return *(_Script_Engine::CurveVector**)((uintptr_t)this + 0xb0);
}
_Script_Engine::CurveFloat*& _Script_Engine::RootMotionSource_JumpForce::get_TimeMappingCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0xb8);
}
