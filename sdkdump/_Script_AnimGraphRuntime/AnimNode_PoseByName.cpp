#include "..\FUObjectArray.hpp"
#include "AnimNode_PoseByName.hpp"
#include "AnimNode_PoseHandler.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::AnimNode_PoseByName::get_PoseName() {
    return (void*)((uintptr_t)this + 0x98);
}
float& _Script_AnimGraphRuntime::AnimNode_PoseByName::get_PoseWeight() {
    return *(float*)((uintptr_t)this + 0xa0);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_PoseByName::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_PoseByName");
    return result;
}
