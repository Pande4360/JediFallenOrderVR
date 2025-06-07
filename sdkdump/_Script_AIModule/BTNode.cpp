#include "..\FUObjectArray.hpp"
#include "BTCompositeNode.hpp"
#include "BTNode.hpp"
#include "BehaviorTree.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
void* _Script_AIModule::BTNode::get_NodeName() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_AIModule::BehaviorTree*& _Script_AIModule::BTNode::get_TreeAsset() {
    return *(_Script_AIModule::BehaviorTree**)((uintptr_t)this + 0x40);
}
_Script_AIModule::BTCompositeNode*& _Script_AIModule::BTNode::get_ParentNode() {
    return *(_Script_AIModule::BTCompositeNode**)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_AIModule::BTNode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTNode");
    return result;
}
