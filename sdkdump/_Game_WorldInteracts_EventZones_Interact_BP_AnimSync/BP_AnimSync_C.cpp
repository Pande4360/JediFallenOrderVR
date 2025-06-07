#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe\HC_Sheathe_C.hpp"
#include "BP_AnimSync_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\AnimSequence.hpp"
#include "..\_Script_Engine\ArrowComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_RsGameTechRT\RsHero.hpp"
#include "..\_Script_RsGameTechRT\RsSlaveSyncInstance.hpp"
#include "..\_Script_RsGameTechRT\RsSyncDefinition.hpp"
_Script_Engine::AnimSequence*& _Game_WorldInteracts_EventZones_Interact_BP_AnimSync::BP_AnimSync_C::get_OverrideAnimation() {
    return *(_Script_Engine::AnimSequence**)((uintptr_t)this + 0x390);
}
_Script_RsGameTechRT::RsHero*& _Game_WorldInteracts_EventZones_Interact_BP_AnimSync::BP_AnimSync_C::get_Hero() {
    return *(_Script_RsGameTechRT::RsHero**)((uintptr_t)this + 0x388);
}
void* _Game_WorldInteracts_EventZones_Interact_BP_AnimSync::BP_AnimSync_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
bool _Game_WorldInteracts_EventZones_Interact_BP_AnimSync::BP_AnimSync_C::get_WaitForGroundState() {
    return (*(uint8_t*)((uintptr_t)this + 0x398 + 0)) & 1 != 0;
}
_Script_Engine::ArrowComponent*& _Game_WorldInteracts_EventZones_Interact_BP_AnimSync::BP_AnimSync_C::get_SyncLocation() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x368);
}
_Script_Engine::SceneComponent*& _Game_WorldInteracts_EventZones_Interact_BP_AnimSync::BP_AnimSync_C::get_Scene() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x370);
}
_Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C*& _Game_WorldInteracts_EventZones_Interact_BP_AnimSync::BP_AnimSync_C::get_HC_Sheathe() {
    return *(_Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C**)((uintptr_t)this + 0x380);
}
_Script_RsGameTechRT::RsSyncDefinition*& _Game_WorldInteracts_EventZones_Interact_BP_AnimSync::BP_AnimSync_C::get_SyncDefinition() {
    return *(_Script_RsGameTechRT::RsSyncDefinition**)((uintptr_t)this + 0x378);
}
void _Game_WorldInteracts_EventZones_Interact_BP_AnimSync::BP_AnimSync_C::set_WaitForGroundState(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x398 + 0);
    *(uint8_t*)((uintptr_t)this + 0x398 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_WorldInteracts_EventZones_Interact_BP_AnimSync::BP_AnimSync_C::LVL_StopSync() {
    return;
}
bool _Game_WorldInteracts_EventZones_Interact_BP_AnimSync::BP_AnimSync_C::get_NavOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x399 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_EventZones_Interact_BP_AnimSync::BP_AnimSync_C::set_NavOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x399 + 0);
    *(uint8_t*)((uintptr_t)this + 0x399 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_RsGameTechRT::RsSlaveSyncInstance*& _Game_WorldInteracts_EventZones_Interact_BP_AnimSync::BP_AnimSync_C::get_SyncInstance() {
    return *(_Script_RsGameTechRT::RsSlaveSyncInstance**)((uintptr_t)this + 0x3a0);
}
void* _Game_WorldInteracts_EventZones_Interact_BP_AnimSync::BP_AnimSync_C::get_LVL_OnSyncAnimStarted() {
    return (void*)((uintptr_t)this + 0x3a8);
}
void* _Game_WorldInteracts_EventZones_Interact_BP_AnimSync::BP_AnimSync_C::get_LVL_OnSyncEnding() {
    return (void*)((uintptr_t)this + 0x3b8);
}
void* _Game_WorldInteracts_EventZones_Interact_BP_AnimSync::BP_AnimSync_C::get_LVL_OnNavOnlyCompleted() {
    return (void*)((uintptr_t)this + 0x3c8);
}
bool _Game_WorldInteracts_EventZones_Interact_BP_AnimSync::BP_AnimSync_C::get_WaitForSaberSheathe() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d8 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_EventZones_Interact_BP_AnimSync::BP_AnimSync_C::set_WaitForSaberSheathe(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_WorldInteracts_EventZones_Interact_BP_AnimSync::BP_AnimSync_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/EventZones/Interact/BP_AnimSync.BP_AnimSync_C");
    return result;
}
void _Game_WorldInteracts_EventZones_Interact_BP_AnimSync::BP_AnimSync_C::UserConstructionScript0() {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_BP_AnimSync::BP_AnimSync_C::LVL_StartSync() {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_BP_AnimSync::BP_AnimSync_C::CheckDoneSheathing() {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_BP_AnimSync::BP_AnimSync_C::ContinueSync() {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_BP_AnimSync::BP_AnimSync_C::SyncEnding(_Script_Engine::AnimMontage* Montage, bool bInterrupted) {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_BP_AnimSync::BP_AnimSync_C::SheathingDone() {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_BP_AnimSync::BP_AnimSync_C::Grounded(void* NewState, void* PrevState) {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_BP_AnimSync::BP_AnimSync_C::ExecuteUbergraph_BP_AnimSync(int32_t EntryPoint) {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_BP_AnimSync::BP_AnimSync_C::LVL_OnNavOnlyCompleted__DelegateSignature() {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_BP_AnimSync::BP_AnimSync_C::LVL_OnSyncEnding__DelegateSignature(_Script_Engine::AnimMontage* Montage, bool bInterrupted) {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_BP_AnimSync::BP_AnimSync_C::LVL_OnSyncAnimStarted__DelegateSignature() {
    return;
}
