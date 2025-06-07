#include "..\FUObjectArray.hpp"
#include "BTT_SetBuddyState_C.hpp"
#include "..\_Script_AIModule\AIController.hpp"
#include "..\_Script_AIModule\BTTask_BlueprintBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Pawn.hpp"
void* _Game_Characters_BuddyDroid_01_Logic_BehaviorTree_BTT_SetBuddyState::BTT_SetBuddyState_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Game_Characters_BuddyDroid_01_Logic_BehaviorTree_BTT_SetBuddyState::BTT_SetBuddyState_C::get_BuddyState() {
    return (void*)((uintptr_t)this + 0xa8);
}
_Script_CoreUObject::Class* _Game_Characters_BuddyDroid_01_Logic_BehaviorTree_BTT_SetBuddyState::BTT_SetBuddyState_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/BuddyDroid_01/Logic/BehaviorTree/BTT_SetBuddyState.BTT_SetBuddyState_C");
    return result;
}
void _Game_Characters_BuddyDroid_01_Logic_BehaviorTree_BTT_SetBuddyState::BTT_SetBuddyState_C::ReceiveExecuteAI0(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BehaviorTree_BTT_SetBuddyState::BTT_SetBuddyState_C::ExecuteUbergraph_BTT_SetBuddyState(int32_t EntryPoint) {
    return;
}
