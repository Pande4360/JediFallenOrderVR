#include "..\FUObjectArray.hpp"
#include "BTCompositeNode.hpp"
#include "BehaviorTree.hpp"
#include "BehaviorTreeTemplateInfo.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_AIModule::BehaviorTree*& _Script_AIModule::BehaviorTreeTemplateInfo::get_Asset() {
    return *(_Script_AIModule::BehaviorTree**)((uintptr_t)this + 0x0);
}
_Script_AIModule::BTCompositeNode*& _Script_AIModule::BehaviorTreeTemplateInfo::get_Template() {
    return *(_Script_AIModule::BTCompositeNode**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_AIModule::BehaviorTreeTemplateInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.BehaviorTreeTemplateInfo");
    return result;
}
