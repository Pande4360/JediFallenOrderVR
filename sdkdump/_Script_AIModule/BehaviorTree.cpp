#include "..\FUObjectArray.hpp"
#include "BTCompositeNode.hpp"
#include "BehaviorTree.hpp"
#include "BlackboardData.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
_Script_AIModule::BTCompositeNode*& _Script_AIModule::BehaviorTree::get_RootNode() {
    return *(_Script_AIModule::BTCompositeNode**)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_AIModule::BehaviorTree::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BehaviorTree");
    return result;
}
_Script_AIModule::BlackboardData*& _Script_AIModule::BehaviorTree::get_BlackboardAsset() {
    return *(_Script_AIModule::BlackboardData**)((uintptr_t)this + 0x30);
}
void* _Script_AIModule::BehaviorTree::get_RootDecorators() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_AIModule::BehaviorTree::get_RootDecoratorOps() {
    return (void*)((uintptr_t)this + 0x48);
}
