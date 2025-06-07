#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BehaviorTree.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAICharacterOverrideBehaviors.hpp"
_Script_AIModule::BehaviorTree*& _Script_RsGameTechRT::RsAICharacterOverrideBehaviors::get_RootBehavior() {
    return *(_Script_AIModule::BehaviorTree**)((uintptr_t)this + 0x0);
}
_Script_AIModule::BehaviorTree*& _Script_RsGameTechRT::RsAICharacterOverrideBehaviors::get_FightIdleBehavior() {
    return *(_Script_AIModule::BehaviorTree**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAICharacterOverrideBehaviors::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAICharacterOverrideBehaviors");
    return result;
}
