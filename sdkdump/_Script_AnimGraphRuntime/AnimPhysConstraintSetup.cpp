#include "..\FUObjectArray.hpp"
#include "AnimPhysConstraintSetup.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::AnimPhysConstraintSetup::get_AngularLimitsMin() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_AnimGraphRuntime::AnimPhysConstraintSetup::get_LinearXLimitType() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_AnimGraphRuntime::AnimPhysConstraintSetup::get_ConeAngle() {
    return *(float*)((uintptr_t)this + 0x20);
}
void* _Script_AnimGraphRuntime::AnimPhysConstraintSetup::get_LinearYLimitType() {
    return (void*)((uintptr_t)this + 0x1);
}
void* _Script_AnimGraphRuntime::AnimPhysConstraintSetup::get_LinearZLimitType() {
    return (void*)((uintptr_t)this + 0x2);
}
void* _Script_AnimGraphRuntime::AnimPhysConstraintSetup::get_AngularConstraintType() {
    return (void*)((uintptr_t)this + 0x1c);
}
void* _Script_AnimGraphRuntime::AnimPhysConstraintSetup::get_LinearAxesMin() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_AnimGraphRuntime::AnimPhysConstraintSetup::get_LinearAxesMax() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_AnimGraphRuntime::AnimPhysConstraintSetup::get_TwistAxis() {
    return (void*)((uintptr_t)this + 0x1d);
}
float& _Script_AnimGraphRuntime::AnimPhysConstraintSetup::get_AngularXAngle() {
    return *(float*)((uintptr_t)this + 0x24);
}
float& _Script_AnimGraphRuntime::AnimPhysConstraintSetup::get_AngularYAngle() {
    return *(float*)((uintptr_t)this + 0x28);
}
float& _Script_AnimGraphRuntime::AnimPhysConstraintSetup::get_AngularZAngle() {
    return *(float*)((uintptr_t)this + 0x2c);
}
void* _Script_AnimGraphRuntime::AnimPhysConstraintSetup::get_AngularLimitsMax() {
    return (void*)((uintptr_t)this + 0x3c);
}
void* _Script_AnimGraphRuntime::AnimPhysConstraintSetup::get_AngularTargetAxis() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_AnimGraphRuntime::AnimPhysConstraintSetup::get_AngularTarget() {
    return (void*)((uintptr_t)this + 0x4c);
}
bool _Script_AnimGraphRuntime::AnimPhysConstraintSetup::get_bLinearFullyLocked() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimPhysConstraintSetup::set_bLinearFullyLocked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimPhysConstraintSetup::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimPhysConstraintSetup");
    return result;
}
