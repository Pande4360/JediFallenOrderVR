#include "..\FUObjectArray.hpp"
#include "AnimNode_RotateRootBone.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_Base.hpp"
float& _Script_AnimGraphRuntime::AnimNode_RotateRootBone::get_ActualYaw() {
    return *(float*)((uintptr_t)this + 0xb8);
}
void* _Script_AnimGraphRuntime::AnimNode_RotateRootBone::get_BasePose() {
    return (void*)((uintptr_t)this + 0x30);
}
float& _Script_AnimGraphRuntime::AnimNode_RotateRootBone::get_Pitch() {
    return *(float*)((uintptr_t)this + 0x40);
}
float& _Script_AnimGraphRuntime::AnimNode_RotateRootBone::get_Yaw() {
    return *(float*)((uintptr_t)this + 0x44);
}
void* _Script_AnimGraphRuntime::AnimNode_RotateRootBone::get_PitchScaleBiasClamp() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_AnimGraphRuntime::AnimNode_RotateRootBone::get_MeshToComponent() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_AnimGraphRuntime::AnimNode_RotateRootBone::get_YawScaleBiasClamp() {
    return (void*)((uintptr_t)this + 0x78);
}
float& _Script_AnimGraphRuntime::AnimNode_RotateRootBone::get_ActualPitch() {
    return *(float*)((uintptr_t)this + 0xb4);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_RotateRootBone::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_RotateRootBone");
    return result;
}
