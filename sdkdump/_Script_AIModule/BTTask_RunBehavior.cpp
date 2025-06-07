#include "..\FUObjectArray.hpp"
#include "BTTaskNode.hpp"
#include "BTTask_RunBehavior.hpp"
#include "BehaviorTree.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_AIModule::BehaviorTree*& _Script_AIModule::BTTask_RunBehavior::get_BehaviorAsset() {
    return *(_Script_AIModule::BehaviorTree**)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_AIModule::BTTask_RunBehavior::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTTask_RunBehavior");
    return result;
}
