#include "..\FUObjectArray.hpp"
#include "..\_Script_AnimGraphRuntime\AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsActorJointMotionAnimNode.hpp"
float& _Script_RsTechRT::RsActorJointMotionAnimNode::get_m_blendTime() {
    return *(float*)((uintptr_t)this + 0x124);
}
void* _Script_RsTechRT::RsActorJointMotionAnimNode::get_m_originJoint() {
    return (void*)((uintptr_t)this + 0xf0);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsActorJointMotionAnimNode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsTechRT.RsActorJointMotionAnimNode");
    return result;
}
void* _Script_RsTechRT::RsActorJointMotionAnimNode::get_m_targetJoint() {
    return (void*)((uintptr_t)this + 0x108);
}
void _Script_RsTechRT::RsActorJointMotionAnimNode::set_m_stripMotion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x120 + 0);
    *(uint8_t*)((uintptr_t)this + 0x120 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsTechRT::RsActorJointMotionAnimNode::get_m_stripMotion() {
    return (*(uint8_t*)((uintptr_t)this + 0x120 + 0)) & 1 != 0;
}
bool _Script_RsTechRT::RsActorJointMotionAnimNode::get_m_stripRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x121 + 0)) & 1 != 0;
}
void _Script_RsTechRT::RsActorJointMotionAnimNode::set_m_stripRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x121 + 0);
    *(uint8_t*)((uintptr_t)this + 0x121 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
