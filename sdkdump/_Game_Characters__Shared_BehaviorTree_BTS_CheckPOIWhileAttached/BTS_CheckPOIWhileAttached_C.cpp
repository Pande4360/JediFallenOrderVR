#include "..\FUObjectArray.hpp"
#include "BTS_CheckPOIWhileAttached_C.hpp"
#include "..\_Script_AIModule\AIController.hpp"
#include "..\_Script_AIModule\BTService_BlueprintBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Pawn.hpp"
#include "..\_Script_SwGame\SwAIBuddyDroid.hpp"
void* _Game_Characters__Shared_BehaviorTree_BTS_CheckPOIWhileAttached::BTS_CheckPOIWhileAttached_C::get_canBuddyDetach() {
    return (void*)((uintptr_t)this + 0x108);
}
void* _Game_Characters__Shared_BehaviorTree_BTS_CheckPOIWhileAttached::BTS_CheckPOIWhileAttached_C::get_attachPointOverride() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Game_Characters__Shared_BehaviorTree_BTS_CheckPOIWhileAttached::BTS_CheckPOIWhileAttached_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Game_Characters__Shared_BehaviorTree_BTS_CheckPOIWhileAttached::BTS_CheckPOIWhileAttached_C::get_POI() {
    return (void*)((uintptr_t)this + 0xa0);
}
float& _Game_Characters__Shared_BehaviorTree_BTS_CheckPOIWhileAttached::BTS_CheckPOIWhileAttached_C::get_detachRadius() {
    return *(float*)((uintptr_t)this + 0xc8);
}
_Script_SwGame::SwAIBuddyDroid*& _Game_Characters__Shared_BehaviorTree_BTS_CheckPOIWhileAttached::BTS_CheckPOIWhileAttached_C::get_BuddyDroid_REF() {
    return *(_Script_SwGame::SwAIBuddyDroid**)((uintptr_t)this + 0xd0);
}
float& _Game_Characters__Shared_BehaviorTree_BTS_CheckPOIWhileAttached::BTS_CheckPOIWhileAttached_C::get_senseRadius() {
    return *(float*)((uintptr_t)this + 0xd8);
}
_Script_CoreUObject::Class* _Game_Characters__Shared_BehaviorTree_BTS_CheckPOIWhileAttached::BTS_CheckPOIWhileAttached_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/_Shared/BehaviorTree/BTS_CheckPOIWhileAttached.BTS_CheckPOIWhileAttached_C");
    return result;
}
void _Game_Characters__Shared_BehaviorTree_BTS_CheckPOIWhileAttached::BTS_CheckPOIWhileAttached_C::ReceiveTickAI0(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn, float DeltaSeconds) {
    return;
}
void _Game_Characters__Shared_BehaviorTree_BTS_CheckPOIWhileAttached::BTS_CheckPOIWhileAttached_C::ExecuteUbergraph_BTS_CheckPOIWhileAttached(int32_t EntryPoint) {
    return;
}
