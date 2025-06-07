#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RigidBodyErrorCorrection.hpp"
float& _Script_Engine::RigidBodyErrorCorrection::get_PingExtrapolation() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::RigidBodyErrorCorrection::get_MaxRestoredStateError() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_Engine::RigidBodyErrorCorrection::get_PingLimit() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::RigidBodyErrorCorrection::get_ErrorPerLinearDifference() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::RigidBodyErrorCorrection::get_AngleLerp() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_Engine::RigidBodyErrorCorrection::get_ErrorPerAngularDifference() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::RigidBodyErrorCorrection::get_MaxLinearHardSnapDistance() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_Engine::RigidBodyErrorCorrection::get_PositionLerp() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_Engine::RigidBodyErrorCorrection::get_LinearVelocityCoefficient() {
    return *(float*)((uintptr_t)this + 0x20);
}
float& _Script_Engine::RigidBodyErrorCorrection::get_AngularVelocityCoefficient() {
    return *(float*)((uintptr_t)this + 0x24);
}
float& _Script_Engine::RigidBodyErrorCorrection::get_ErrorAccumulationSeconds() {
    return *(float*)((uintptr_t)this + 0x28);
}
float& _Script_Engine::RigidBodyErrorCorrection::get_ErrorAccumulationDistanceSq() {
    return *(float*)((uintptr_t)this + 0x2c);
}
float& _Script_Engine::RigidBodyErrorCorrection::get_ErrorAccumulationSimilarity() {
    return *(float*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::RigidBodyErrorCorrection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RigidBodyErrorCorrection");
    return result;
}
