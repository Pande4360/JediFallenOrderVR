#include "..\FUObjectArray.hpp"
#include "NodeObject.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimationCore::NodeObject::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AnimationCore::NodeObject::get_ParentName() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_AnimationCore::NodeObject::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimationCore.NodeObject");
    return result;
}
