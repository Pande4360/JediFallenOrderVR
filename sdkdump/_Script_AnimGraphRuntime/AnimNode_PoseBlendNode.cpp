#include "..\FUObjectArray.hpp"
#include "AnimNode_PoseBlendNode.hpp"
#include "AnimNode_PoseHandler.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CurveFloat.hpp"
void* _Script_AnimGraphRuntime::AnimNode_PoseBlendNode::get_SourcePose() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_AnimGraphRuntime::AnimNode_PoseBlendNode::get_BlendOption() {
    return (void*)((uintptr_t)this + 0xa8);
}
_Script_Engine::CurveFloat*& _Script_AnimGraphRuntime::AnimNode_PoseBlendNode::get_CustomCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0xb0);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_PoseBlendNode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_PoseBlendNode");
    return result;
}
