#include "..\FUObjectArray.hpp"
#include "NodeHierarchyData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimationCore::NodeHierarchyData::get_Nodes() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AnimationCore::NodeHierarchyData::get_Transforms() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_AnimationCore::NodeHierarchyData::get_NodeNameToIndexMapping() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_AnimationCore::NodeHierarchyData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimationCore.NodeHierarchyData");
    return result;
}
