#include "..\FUObjectArray.hpp"
#include "BTD_IsEffectActive_C.hpp"
#include "..\_Script_AIModule\AIController.hpp"
#include "..\_Script_AIModule\BTDecorator_BlueprintBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Pawn.hpp"
_Script_CoreUObject::Class* _Game_Characters_Bat_Logic_BehaviorTree_BTD_IsEffectActive::BTD_IsEffectActive_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Bat/Logic/BehaviorTree/BTD_IsEffectActive.BTD_IsEffectActive_C");
    return result;
}
void* _Game_Characters_Bat_Logic_BehaviorTree_BTD_IsEffectActive::BTD_IsEffectActive_C::get_EffectType() {
    return (void*)((uintptr_t)this + 0xa0);
}
bool _Game_Characters_Bat_Logic_BehaviorTree_BTD_IsEffectActive::BTD_IsEffectActive_C::PerformConditionCheckAI0(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn) {
    return;
}
