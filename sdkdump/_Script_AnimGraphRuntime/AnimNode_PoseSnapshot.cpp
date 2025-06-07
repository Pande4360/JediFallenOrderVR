#include "..\FUObjectArray.hpp"
#include "AnimNode_PoseSnapshot.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNode_Base.hpp"
void* _Script_AnimGraphRuntime::AnimNode_PoseSnapshot::get_Mode() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_AnimGraphRuntime::AnimNode_PoseSnapshot::get_SnapshotName() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_AnimGraphRuntime::AnimNode_PoseSnapshot::get_Snapshot() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_PoseSnapshot::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_PoseSnapshot");
    return result;
}
