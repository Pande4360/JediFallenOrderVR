#include "..\FUObjectArray.hpp"
#include "BTD_CheckBuddyState_C.hpp"
#include "..\_Script_AIModule\AIController.hpp"
#include "..\_Script_AIModule\BTDecorator_BlueprintBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Pawn.hpp"
void* _Game_Characters_BuddyDroid_01_Logic_BehaviorTree_BTD_CheckBuddyState::BTD_CheckBuddyState_C::get_BuddyState() {
    return (void*)((uintptr_t)this + 0xa0);
}
_Script_CoreUObject::Class* _Game_Characters_BuddyDroid_01_Logic_BehaviorTree_BTD_CheckBuddyState::BTD_CheckBuddyState_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/BuddyDroid_01/Logic/BehaviorTree/BTD_CheckBuddyState.BTD_CheckBuddyState_C");
    return result;
}
bool _Game_Characters_BuddyDroid_01_Logic_BehaviorTree_BTD_CheckBuddyState::BTD_CheckBuddyState_C::PerformConditionCheckAI0(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn) {
    return;
}
