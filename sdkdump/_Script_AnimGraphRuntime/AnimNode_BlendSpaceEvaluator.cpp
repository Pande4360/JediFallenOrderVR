#include "..\FUObjectArray.hpp"
#include "AnimNode_BlendSpaceEvaluator.hpp"
#include "AnimNode_BlendSpacePlayer.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_AnimGraphRuntime::AnimNode_BlendSpaceEvaluator::get_NormalizedTime() {
    return *(float*)((uintptr_t)this + 0x130);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_BlendSpaceEvaluator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendSpaceEvaluator");
    return result;
}
