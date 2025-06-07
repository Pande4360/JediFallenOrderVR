#include "..\FUObjectArray.hpp"
#include "BTD_DoOnce_C.hpp"
#include "..\_Script_AIModule\AIController.hpp"
#include "..\_Script_AIModule\BTDecorator_BlueprintBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Pawn.hpp"
void _Game_Characters__Shared_BehaviorTree_BTD_DoOnce::BTD_DoOnce_C::set_Success(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters__Shared_BehaviorTree_BTD_DoOnce::BTD_DoOnce_C::get_Success() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Game_Characters__Shared_BehaviorTree_BTD_DoOnce::BTD_DoOnce_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/_Shared/BehaviorTree/BTD_DoOnce.BTD_DoOnce_C");
    return result;
}
bool _Game_Characters__Shared_BehaviorTree_BTD_DoOnce::BTD_DoOnce_C::PerformConditionCheckAI0(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn) {
    return;
}
