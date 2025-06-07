#include "..\FUObjectArray.hpp"
#include "HC_ForcePoint_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_RsGameTechRT\RsAIGameStateManager.hpp"
void* _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x170);
}
int32_t& _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C::get_TotalForcePointsEarned() {
    return *(int32_t*)((uintptr_t)this + 0x178);
}
int32_t& _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C::get_UnspentForcePoints() {
    return *(int32_t*)((uintptr_t)this + 0x17c);
}
float& _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C::get_PerLevelForcePointCostMultiplier() {
    return *(float*)((uintptr_t)this + 0x190);
}
float& _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C::get_CurrentForcePointProgressPercentage() {
    return *(float*)((uintptr_t)this + 0x184);
}
float& _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C::get_CurrentXPCollected() {
    return *(float*)((uintptr_t)this + 0x180);
}
float& _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C::get_FirstForcePointXPCost() {
    return *(float*)((uintptr_t)this + 0x188);
}
float& _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C::get_BaseForcePointXPCost() {
    return *(float*)((uintptr_t)this + 0x18c);
}
bool _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C::get_freeAtks() {
    return (*(uint8_t*)((uintptr_t)this + 0x194 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C::set_freeAtks(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x194 + 0);
    *(uint8_t*)((uintptr_t)this + 0x194 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C::get_radialPush() {
    return (*(uint8_t*)((uintptr_t)this + 0x195 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C::set_radialPush(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x195 + 0);
    *(uint8_t*)((uintptr_t)this + 0x195 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C::get_ForcePointsUpdated() {
    return (void*)((uintptr_t)this + 0x198);
}
float& _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C::get_CombatXPBank() {
    return *(float*)((uintptr_t)this + 0x1a8);
}
float& _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C::get_XPGainINTERNAL() {
    return *(float*)((uintptr_t)this + 0x1ac);
}
float& _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C::get_NextPointXPCost() {
    return *(float*)((uintptr_t)this + 0x1b0);
}
bool _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C::get_IsRevenge() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b4 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C::set_IsRevenge(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Components/General/HC_ForcePoint.HC_ForcePoint_C");
    return result;
}
void _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C::CalculatePercentageForcePtAwarded(float ForcePt_, float& XP_Awarded) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C::CollectLargeForce() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C::CollectTinyForce() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C::AddForcePoint() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C::AwardXP(float XP) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C::CollectSmallForce() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C::AwardForcePoints(float Points) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C::SpendForcePoints(int32_t Points) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C::OnCombatStateChanged(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager, void* PreviousGameState, void* NewGameState) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C::AwardRevengeXP(float XP) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C::ResetCurrentXPZero() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C::Recalculate_Next_Point_Cost() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C::ExecuteUbergraph_HC_ForcePoint(int32_t EntryPoint) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C::ForcePointsUpdated__DelegateSignature(int32_t TotalForcePoints, float ForcePointProgress) {
    return;
}
