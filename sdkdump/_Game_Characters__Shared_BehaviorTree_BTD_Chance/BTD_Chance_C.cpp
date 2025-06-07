#include "..\FUObjectArray.hpp"
#include "BTD_Chance_C.hpp"
#include "..\_Script_AIModule\AIController.hpp"
#include "..\_Script_AIModule\BTDecorator_BlueprintBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Pawn.hpp"
int32_t& _Game_Characters__Shared_BehaviorTree_BTD_Chance::BTD_Chance_C::get_Chance() {
    return *(int32_t*)((uintptr_t)this + 0xa0);
}
_Script_CoreUObject::Class* _Game_Characters__Shared_BehaviorTree_BTD_Chance::BTD_Chance_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/_Shared/BehaviorTree/BTD_Chance.BTD_Chance_C");
    return result;
}
bool _Game_Characters__Shared_BehaviorTree_BTD_Chance::BTD_Chance_C::PerformConditionCheckAI0(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn) {
    return;
}
