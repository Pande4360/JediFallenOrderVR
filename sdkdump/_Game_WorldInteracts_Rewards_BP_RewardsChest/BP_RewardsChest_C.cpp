#include "..\FUObjectArray.hpp"
#include "..\_Game_GlobalData_Economy_ST_ChestRewards\ST_ChestRewards.hpp"
#include "..\_Game_Items_Reward_Chest_Animations_AB_RewardChest\AB_RewardChest_C.hpp"
#include "..\_Game_WorldInteracts_LevelObjects_BP_HackPanel\BP_HackPanel_C.hpp"
#include "BP_RewardsChest_C.hpp"
#include "..\_Game_WorldInteracts_Rewards_BP_RewardsHolder\BP_RewardsHolder_C.hpp"
#include "..\_Script_AkAudio\AkBankLoadComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\ChildActorComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_RsGameTechRT\RsAIController.hpp"
#include "..\_Script_RsGameTechRT\RsAIPOI.hpp"
_Script_Engine::ChildActorComponent*& _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::get_BP_HackPanel() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x508);
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::OnRefresh_UpdateInteractState() {
    return;
}
void* _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x500);
}
_Script_AkAudio::AkBankLoadComponent*& _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::get_AkBankLoad() {
    return *(_Script_AkAudio::AkBankLoadComponent**)((uintptr_t)this + 0x510);
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::Timeline_0__UpdateFunc() {
    return;
}
void* _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::get_HighTierChestSkelMesh() {
    return (void*)((uintptr_t)this + 0x560);
}
void* _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::get_Timeline_0__Direction_6F7113BC419A0F878EBAF7B131D547C3() {
    return (void*)((uintptr_t)this + 0x534);
}
_Script_Engine::SceneComponent*& _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::get_HackPanelLocation() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x518);
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::DestroyHackPanel() {
    return;
}
_Game_Items_Reward_Chest_Animations_AB_RewardChest::AB_RewardChest_C*& _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::get_AnimBP() {
    return *(_Game_Items_Reward_Chest_Animations_AB_RewardChest::AB_RewardChest_C**)((uintptr_t)this + 0x5c0);
}
_Script_Engine::BoxComponent*& _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::get_BoxCollision() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x520);
}
float& _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::get_Timeline_0_LightIntensity_6F7113BC419A0F878EBAF7B131D547C3() {
    return *(float*)((uintptr_t)this + 0x530);
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::SetIsHighTier(_Game_GlobalData_Economy_ST_ChestRewards::ST_ChestRewards& ST_ChestRewards) {
    return;
}
_Script_Engine::SkeletalMeshComponent*& _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::get_RewardChest_rig() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x528);
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::SyncEnded(_Script_Engine::AnimMontage* Montage, bool bInterrupted) {
    return;
}
_Script_Engine::TimelineComponent*& _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::get_Timeline_0() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x538);
}
_Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C*& _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::get_HackPanel() {
    return *(_Game_WorldInteracts_LevelObjects_BP_HackPanel::BP_HackPanel_C**)((uintptr_t)this + 0x5b8);
}
bool _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::get_IsHighTier() {
    return (*(uint8_t*)((uintptr_t)this + 0x540 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::set_IsHighTier(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x540 + 0);
    *(uint8_t*)((uintptr_t)this + 0x540 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::get_DEPRECATED_ID() {
    return (void*)((uintptr_t)this + 0x548);
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::RemoveTag(_Script_RsGameTechRT::RsAIPOI* POI, _Script_RsGameTechRT::RsAIController* AIController) {
    return;
}
void* _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::get_OnInteracted() {
    return (void*)((uintptr_t)this + 0x550);
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::UserConstructionScript() {
    return;
}
void* _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::get_HackChestSkelMesh() {
    return (void*)((uintptr_t)this + 0x588);
}
bool _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::get_HasInteracted() {
    return (*(uint8_t*)((uintptr_t)this + 0x5b0 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::set_HasInteracted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5b0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::get_M_Emissives() {
    return (void*)((uintptr_t)this + 0x5c8);
}
_Script_CoreUObject::Class* _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/Rewards/BP_RewardsChest.BP_RewardsChest_C");
    return result;
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::HasInteractedOrGotInNewGamePlus(bool& Result) {
    return;
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::PopulateChestStruct() {
    return;
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::Timeline_0__FinishedFunc() {
    return;
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::OnLoaded_B7D529BB46FAF3590FA5ECA2E2AE949F(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::OnLoaded_6EA8D8704BFF135D4E28D78F2226344E(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::ReceiveBeginPlay() {
    return;
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::ContinueInteractSyncAnim() {
    return;
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::InitializeNormalChest() {
    return;
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::Interacted() {
    return;
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::OnHacked() {
    return;
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::AddTag(_Script_RsGameTechRT::RsAIPOI* POI, _Script_RsGameTechRT::RsAIController* AIController) {
    return;
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::InitializeHackChest() {
    return;
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::InitializeGoldChest() {
    return;
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::UpdateChestsOnCosmeticsRefreshed() {
    return;
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::OnRefresh_UpdateHackChest() {
    return;
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::ExecuteUbergraph_BP_RewardsChest(int32_t EntryPoint) {
    return;
}
void _Game_WorldInteracts_Rewards_BP_RewardsChest::BP_RewardsChest_C::OnInteracted__DelegateSignature() {
    return;
}
