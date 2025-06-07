#include "..\FUObjectArray.hpp"
#include "BTD_CheckHeroClimbing_C.hpp"
#include "..\_Script_AIModule\AIController.hpp"
#include "..\_Script_AIModule\BTDecorator_BlueprintBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Pawn.hpp"
_Script_CoreUObject::Class* _Game_Characters_BuddyDroid_01_Logic_BehaviorTree_BTD_CheckHeroClimbing::BTD_CheckHeroClimbing_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/BuddyDroid_01/Logic/BehaviorTree/BTD_CheckHeroClimbing.BTD_CheckHeroClimbing_C");
    return result;
}
bool _Game_Characters_BuddyDroid_01_Logic_BehaviorTree_BTD_CheckHeroClimbing::BTD_CheckHeroClimbing_C::PerformConditionCheckAI0(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn) {
    return;
}
