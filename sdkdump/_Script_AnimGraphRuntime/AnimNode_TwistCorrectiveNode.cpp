#include "..\FUObjectArray.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "AnimNode_TwistCorrectiveNode.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::AnimNode_TwistCorrectiveNode::get_BaseFrame() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_AnimGraphRuntime::AnimNode_TwistCorrectiveNode::get_TwistFrame() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_AnimGraphRuntime::AnimNode_TwistCorrectiveNode::get_Curve() {
    return (void*)((uintptr_t)this + 0x160);
}
void* _Script_AnimGraphRuntime::AnimNode_TwistCorrectiveNode::get_TwistPlaneNormalAxis() {
    return (void*)((uintptr_t)this + 0x140);
}
float& _Script_AnimGraphRuntime::AnimNode_TwistCorrectiveNode::get_RangeMax() {
    return *(float*)((uintptr_t)this + 0x150);
}
float& _Script_AnimGraphRuntime::AnimNode_TwistCorrectiveNode::get_RemappedMax() {
    return *(float*)((uintptr_t)this + 0x158);
}
float& _Script_AnimGraphRuntime::AnimNode_TwistCorrectiveNode::get_RemappedMin() {
    return *(float*)((uintptr_t)this + 0x154);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_TwistCorrectiveNode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_TwistCorrectiveNode");
    return result;
}
