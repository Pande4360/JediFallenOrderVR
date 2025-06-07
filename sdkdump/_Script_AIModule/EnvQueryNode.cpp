#include "..\FUObjectArray.hpp"
#include "EnvQueryNode.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
int32_t& _Script_AIModule::EnvQueryNode::get_VerNum() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_AIModule::EnvQueryNode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.EnvQueryNode");
    return result;
}
