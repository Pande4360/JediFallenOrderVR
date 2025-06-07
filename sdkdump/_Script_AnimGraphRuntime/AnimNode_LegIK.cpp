#include "..\FUObjectArray.hpp"
#include "AnimNode_LegIK.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::AnimNode_LegIK::get_LegsData() {
    return (void*)((uintptr_t)this + 0x108);
}
int32_t& _Script_AnimGraphRuntime::AnimNode_LegIK::get_MaxIterations() {
    return *(int32_t*)((uintptr_t)this + 0xf4);
}
float& _Script_AnimGraphRuntime::AnimNode_LegIK::get_ReachPrecision() {
    return *(float*)((uintptr_t)this + 0xf0);
}
void* _Script_AnimGraphRuntime::AnimNode_LegIK::get_LegsDefinition() {
    return (void*)((uintptr_t)this + 0xf8);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_LegIK::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_LegIK");
    return result;
}
