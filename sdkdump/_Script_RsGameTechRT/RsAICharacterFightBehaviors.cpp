#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BehaviorTree.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAICharacterFightBehaviors.hpp"
_Script_AIModule::BehaviorTree*& _Script_RsGameTechRT::RsAICharacterFightBehaviors::get_ActiveBehavior() {
    return *(_Script_AIModule::BehaviorTree**)((uintptr_t)this + 0x0);
}
_Script_AIModule::BehaviorTree*& _Script_RsGameTechRT::RsAICharacterFightBehaviors::get_PassiveBehavior() {
    return *(_Script_AIModule::BehaviorTree**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAICharacterFightBehaviors::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAICharacterFightBehaviors");
    return result;
}
