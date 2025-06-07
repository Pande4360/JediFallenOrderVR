#include "..\FUObjectArray.hpp"
#include "BTS_DrawDebugPoint_C.hpp"
#include "..\_Script_AIModule\BTService_BlueprintBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
void* _Game_Characters_BuddyDroid_01_Logic_BehaviorTree_BTS_DrawDebugPoint::BTS_DrawDebugPoint_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Game_Characters_BuddyDroid_01_Logic_BehaviorTree_BTS_DrawDebugPoint::BTS_DrawDebugPoint_C::get_debugLoc() {
    return (void*)((uintptr_t)this + 0xa0);
}
bool _Game_Characters_BuddyDroid_01_Logic_BehaviorTree_BTS_DrawDebugPoint::BTS_DrawDebugPoint_C::get_Enabled() {
    return (*(uint8_t*)((uintptr_t)this + 0xc8 + 0)) & 1 != 0;
}
void _Game_Characters_BuddyDroid_01_Logic_BehaviorTree_BTS_DrawDebugPoint::BTS_DrawDebugPoint_C::set_Enabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Characters_BuddyDroid_01_Logic_BehaviorTree_BTS_DrawDebugPoint::BTS_DrawDebugPoint_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/BuddyDroid_01/Logic/BehaviorTree/BTS_DrawDebugPoint.BTS_DrawDebugPoint_C");
    return result;
}
void _Game_Characters_BuddyDroid_01_Logic_BehaviorTree_BTS_DrawDebugPoint::BTS_DrawDebugPoint_C::ReceiveSearchStart0(_Script_Engine::Actor* OwnerActor) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BehaviorTree_BTS_DrawDebugPoint::BTS_DrawDebugPoint_C::ExecuteUbergraph_BTS_DrawDebugPoint(int32_t EntryPoint) {
    return;
}
