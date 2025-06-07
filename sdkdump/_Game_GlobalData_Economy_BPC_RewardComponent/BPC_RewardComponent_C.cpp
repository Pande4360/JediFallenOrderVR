#include "..\FUObjectArray.hpp"
#include "BPC_RewardComponent_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
void* _Game_GlobalData_Economy_BPC_RewardComponent::BPC_RewardComponent_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x170);
}
void _Game_GlobalData_Economy_BPC_RewardComponent::BPC_RewardComponent_C::ExecuteUbergraph_BPC_RewardComponent(int32_t EntryPoint) {
    return;
}
void* _Game_GlobalData_Economy_BPC_RewardComponent::BPC_RewardComponent_C::get_Rewards() {
    return (void*)((uintptr_t)this + 0x178);
}
_Script_CoreUObject::Class* _Game_GlobalData_Economy_BPC_RewardComponent::BPC_RewardComponent_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/Economy/BPC_RewardComponent.BPC_RewardComponent_C");
    return result;
}
void* _Game_GlobalData_Economy_BPC_RewardComponent::BPC_RewardComponent_C::get_AITypesToRewards() {
    return (void*)((uintptr_t)this + 0x188);
}
void* _Game_GlobalData_Economy_BPC_RewardComponent::BPC_RewardComponent_C::get_TagUnlockRewards() {
    return (void*)((uintptr_t)this + 0x1d8);
}
void _Game_GlobalData_Economy_BPC_RewardComponent::BPC_RewardComponent_C::GiveRewards() {
    return;
}
void _Game_GlobalData_Economy_BPC_RewardComponent::BPC_RewardComponent_C::PlayerKilledAI() {
    return;
}
