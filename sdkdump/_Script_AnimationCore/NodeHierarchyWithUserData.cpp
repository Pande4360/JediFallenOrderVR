#include "..\FUObjectArray.hpp"
#include "NodeHierarchyWithUserData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimationCore::NodeHierarchyWithUserData::get_Hierarchy() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_AnimationCore::NodeHierarchyWithUserData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimationCore.NodeHierarchyWithUserData");
    return result;
}
