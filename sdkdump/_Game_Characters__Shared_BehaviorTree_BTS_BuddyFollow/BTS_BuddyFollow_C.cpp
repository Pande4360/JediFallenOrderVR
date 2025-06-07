#include "..\FUObjectArray.hpp"
#include "BTS_BuddyFollow_C.hpp"
#include "..\_Script_AIModule\AIController.hpp"
#include "..\_Script_AIModule\BTService_BlueprintBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Pawn.hpp"
void* _Game_Characters__Shared_BehaviorTree_BTS_BuddyFollow::BTS_BuddyFollow_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x98);
}
float& _Game_Characters__Shared_BehaviorTree_BTS_BuddyFollow::BTS_BuddyFollow_C::get_followRadius() {
    return *(float*)((uintptr_t)this + 0xf0);
}
void* _Game_Characters__Shared_BehaviorTree_BTS_BuddyFollow::BTS_BuddyFollow_C::get_TargetToFollow() {
    return (void*)((uintptr_t)this + 0xa0);
}
_Script_Engine::Pawn*& _Game_Characters__Shared_BehaviorTree_BTS_BuddyFollow::BTS_BuddyFollow_C::get_BuddyDroidPawn() {
    return *(_Script_Engine::Pawn**)((uintptr_t)this + 0xf8);
}
void* _Game_Characters__Shared_BehaviorTree_BTS_BuddyFollow::BTS_BuddyFollow_C::get_TargetLocation() {
    return (void*)((uintptr_t)this + 0xc8);
}
void _Game_Characters__Shared_BehaviorTree_BTS_BuddyFollow::BTS_BuddyFollow_C::ReceiveTickAI0(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn, float DeltaSeconds) {
    return;
}
_Script_CoreUObject::Class* _Game_Characters__Shared_BehaviorTree_BTS_BuddyFollow::BTS_BuddyFollow_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/_Shared/BehaviorTree/BTS_BuddyFollow.BTS_BuddyFollow_C");
    return result;
}
void _Game_Characters__Shared_BehaviorTree_BTS_BuddyFollow::BTS_BuddyFollow_C::ExecuteUbergraph_BTS_BuddyFollow(int32_t EntryPoint) {
    return;
}
