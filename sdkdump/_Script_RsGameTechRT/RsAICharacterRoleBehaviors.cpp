#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BehaviorTree.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAICharacterRoleBehaviors.hpp"
_Script_AIModule::BehaviorTree*& _Script_RsGameTechRT::RsAICharacterRoleBehaviors::get_GuardBehavior() {
    return *(_Script_AIModule::BehaviorTree**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAICharacterRoleBehaviors::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAICharacterRoleBehaviors");
    return result;
}
