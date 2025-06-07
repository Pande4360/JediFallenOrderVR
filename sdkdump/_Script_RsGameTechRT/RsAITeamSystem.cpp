#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BehaviorTree.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "RsAITeamSystem.hpp"
_Script_AIModule::BehaviorTree*& _Script_RsGameTechRT::RsAITeamSystem::get_TeamRootBehavior() {
    return *(_Script_AIModule::BehaviorTree**)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAITeamSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAITeamSystem");
    return result;
}
void* _Script_RsGameTechRT::RsAITeamSystem::get_Teams() {
    return (void*)((uintptr_t)this + 0x38);
}
