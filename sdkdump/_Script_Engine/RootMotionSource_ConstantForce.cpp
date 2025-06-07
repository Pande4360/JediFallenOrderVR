#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CurveFloat.hpp"
#include "RootMotionSource.hpp"
#include "RootMotionSource_ConstantForce.hpp"
void* _Script_Engine::RootMotionSource_ConstantForce::get_Force() {
    return (void*)((uintptr_t)this + 0x98);
}
_Script_CoreUObject::Class* _Script_Engine::RootMotionSource_ConstantForce::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RootMotionSource_ConstantForce");
    return result;
}
_Script_Engine::CurveFloat*& _Script_Engine::RootMotionSource_ConstantForce::get_StrengthOverTime() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0xa8);
}
