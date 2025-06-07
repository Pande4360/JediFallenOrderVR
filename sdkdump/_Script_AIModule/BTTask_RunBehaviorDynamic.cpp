#include "..\FUObjectArray.hpp"
#include "BTTaskNode.hpp"
#include "BTTask_RunBehaviorDynamic.hpp"
#include "BehaviorTree.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
_Script_AIModule::BehaviorTree*& _Script_AIModule::BTTask_RunBehaviorDynamic::get_BehaviorAsset() {
    return *(_Script_AIModule::BehaviorTree**)((uintptr_t)this + 0x80);
}
void* _Script_AIModule::BTTask_RunBehaviorDynamic::get_InjectionTag() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Object*& _Script_AIModule::BTTask_RunBehaviorDynamic::get_InjectionContextObject() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x88);
}
_Script_AIModule::BehaviorTree*& _Script_AIModule::BTTask_RunBehaviorDynamic::get_DefaultBehaviorAsset() {
    return *(_Script_AIModule::BehaviorTree**)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Script_AIModule::BTTask_RunBehaviorDynamic::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTTask_RunBehaviorDynamic");
    return result;
}
