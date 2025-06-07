#include "..\FUObjectArray.hpp"
#include "..\_Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench\BP_CustomizationWorkbench_C.hpp"
#include "BP_RewardsChest_StaffAcquire_C.hpp"
#include "..\_Game_WorldInteracts_Rewards_BP_RewardsHolder\BP_RewardsHolder_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ArrowComponent.hpp"
#include "..\_Script_Engine\ChildActorComponent.hpp"
#include "..\_Script_Engine\RsStreamingAreaPlayerStart.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapStateTransitionGatewayComponent.hpp"
void _Game_WorldInteracts_Rewards_BP_RewardsChest_StaffAcquire::BP_RewardsChest_StaffAcquire_C::set_HideTempMesh(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x530 + 0);
    *(uint8_t*)((uintptr_t)this + 0x530 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_WorldInteracts_Rewards_BP_RewardsChest_StaffAcquire::BP_RewardsChest_StaffAcquire_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x500);
}
_Script_RsGameTechRT::RsWorldMapStateTransitionGatewayComponent*& _Game_WorldInteracts_Rewards_BP_RewardsChest_StaffAcquire::BP_RewardsChest_StaffAcquire_C::get_RsWorldMapStateTransitionGateway() {
    return *(_Script_RsGameTechRT::RsWorldMapStateTransitionGatewayComponent**)((uintptr_t)this + 0x508);
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest_StaffAcquire::BP_RewardsChest_StaffAcquire_C::ReceiveBeginPlay() {
    return;
}
_Script_Engine::ArrowComponent*& _Game_WorldInteracts_Rewards_BP_RewardsChest_StaffAcquire::BP_RewardsChest_StaffAcquire_C::get_NewSyncSpot() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x510);
}
_Script_Engine::ChildActorComponent*& _Game_WorldInteracts_Rewards_BP_RewardsChest_StaffAcquire::BP_RewardsChest_StaffAcquire_C::get_BP_CustomizationWorkbench() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x518);
}
_Script_Engine::RsStreamingAreaPlayerStart*& _Game_WorldInteracts_Rewards_BP_RewardsChest_StaffAcquire::BP_RewardsChest_StaffAcquire_C::get_PlayerStart() {
    return *(_Script_Engine::RsStreamingAreaPlayerStart**)((uintptr_t)this + 0x520);
}
bool _Game_WorldInteracts_Rewards_BP_RewardsChest_StaffAcquire::BP_RewardsChest_StaffAcquire_C::get_HideTempMesh() {
    return (*(uint8_t*)((uintptr_t)this + 0x530 + 0)) & 1 != 0;
}
_Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C*& _Game_WorldInteracts_Rewards_BP_RewardsChest_StaffAcquire::BP_RewardsChest_StaffAcquire_C::get_CustomizationWorkbench() {
    return *(_Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C**)((uintptr_t)this + 0x528);
}
bool _Game_WorldInteracts_Rewards_BP_RewardsChest_StaffAcquire::BP_RewardsChest_StaffAcquire_C::get_AllRewardsAcquired() {
    return (*(uint8_t*)((uintptr_t)this + 0x531 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest_StaffAcquire::BP_RewardsChest_StaffAcquire_C::set_AllRewardsAcquired(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x531 + 0);
    *(uint8_t*)((uintptr_t)this + 0x531 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_WorldInteracts_Rewards_BP_RewardsChest_StaffAcquire::BP_RewardsChest_StaffAcquire_C::get_LVL_PlayCinematic() {
    return (void*)((uintptr_t)this + 0x538);
}
void* _Game_WorldInteracts_Rewards_BP_RewardsChest_StaffAcquire::BP_RewardsChest_StaffAcquire_C::get_LVL_SkinUnlocked() {
    return (void*)((uintptr_t)this + 0x548);
}
_Script_CoreUObject::Class* _Game_WorldInteracts_Rewards_BP_RewardsChest_StaffAcquire::BP_RewardsChest_StaffAcquire_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/Rewards/BP_RewardsChest_StaffAcquire.BP_RewardsChest_StaffAcquire_C");
    return result;
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest_StaffAcquire::BP_RewardsChest_StaffAcquire_C::UserConstructionScript() {
    return;
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest_StaffAcquire::BP_RewardsChest_StaffAcquire_C::GiveReward0() {
    return;
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest_StaffAcquire::BP_RewardsChest_StaffAcquire_C::AbilityAcquire_Done_Event_0() {
    return;
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest_StaffAcquire::BP_RewardsChest_StaffAcquire_C::LVL_AcquireFanfare() {
    return;
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest_StaffAcquire::BP_RewardsChest_StaffAcquire_C::ContinueInteractSyncAnim() {
    return;
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest_StaffAcquire::BP_RewardsChest_StaffAcquire_C::DismissStaffTutorial() {
    return;
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest_StaffAcquire::BP_RewardsChest_StaffAcquire_C::ExecuteUbergraph_BP_RewardsChest_StaffAcquire(int32_t EntryPoint) {
    return;
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest_StaffAcquire::BP_RewardsChest_StaffAcquire_C::LVL_SkinUnlocked__DelegateSignature() {
    return;
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest_StaffAcquire::BP_RewardsChest_StaffAcquire_C::LVL_PlayCinematic__DelegateSignature() {
    return;
}
