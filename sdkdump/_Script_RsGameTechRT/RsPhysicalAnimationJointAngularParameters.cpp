#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsPhysicalAnimationJointAngularParameters.hpp"
float& _Script_RsGameTechRT::RsPhysicalAnimationJointAngularParameters::get_TwistLimitDegrees() {
    return *(float*)((uintptr_t)this + 0x1c);
}
void* _Script_RsGameTechRT::RsPhysicalAnimationJointAngularParameters::get_ConstraintBone1() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsPhysicalAnimationJointAngularParameters::get_ConstraintBone2() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_RsGameTechRT::RsPhysicalAnimationJointAngularParameters::get_Swing1LimitDegrees() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_RsGameTechRT::RsPhysicalAnimationJointAngularParameters::get_Swing2LimitDegrees() {
    return *(float*)((uintptr_t)this + 0x14);
}
void* _Script_RsGameTechRT::RsPhysicalAnimationJointAngularParameters::get_Swing1Motion() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_RsGameTechRT::RsPhysicalAnimationJointAngularParameters::get_Swing2Motion() {
    return (void*)((uintptr_t)this + 0x19);
}
void* _Script_RsGameTechRT::RsPhysicalAnimationJointAngularParameters::get_TwistMotion() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsPhysicalAnimationJointAngularParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsPhysicalAnimationJointAngularParameters");
    return result;
}
