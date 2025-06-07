#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_SwPlayerState\BP_SwPlayerState_C.hpp"
#include "HC_ForceUsage_C.hpp"
#include "..\_Game_UI_UI_HUD_ForceMeter\UI_HUD_ForceMeter_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsAIGameStateManager.hpp"
#include "..\_Script_SwGame\SwForceMeterComponent.hpp"
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C::ReceiveTick(float DeltaSeconds) {
    return;
}
void* _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x210);
}
int32_t& _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C::get_ForceMeterLevel() {
    return *(int32_t*)((uintptr_t)this + 0x218);
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C::UpdateDifficultySettings() {
    return;
}
float& _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C::get_OutOfCombatRegenSpeed() {
    return *(float*)((uintptr_t)this + 0x228);
}
_Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C*& _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C::get_PlayerState() {
    return *(_Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C**)((uintptr_t)this + 0x220);
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C::ReceiveBeginPlay() {
    return;
}
float& _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C::get_CombatRegenSpeed() {
    return *(float*)((uintptr_t)this + 0x22c);
}
void* _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C::get_CombatRegenTickHandle() {
    return (void*)((uintptr_t)this + 0x230);
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C::RefreshMaxForceMeter() {
    return;
}
float& _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C::get_CombatRegenMax() {
    return *(float*)((uintptr_t)this + 0x238);
}
void* _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C::get_OnForceConsumed() {
    return (void*)((uintptr_t)this + 0x240);
}
bool _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C::get_DEBUGInfiniteForce() {
    return (*(uint8_t*)((uintptr_t)this + 0x250 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C::ExecuteUbergraph_HC_ForceUsage(int32_t EntryPoint) {
    return;
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C::UpgradeForceMeter() {
    return;
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C::set_DEBUGInfiniteForce(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x250 + 0);
    *(uint8_t*)((uintptr_t)this + 0x250 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C*& _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C::get_UI_ForceMeter() {
    return *(_Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C**)((uintptr_t)this + 0x258);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Components/ForceAbilities/HC_ForceUsage.HC_ForceUsage_C");
    return result;
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C::CheckAndSetPlayerState() {
    return;
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C::RegainForce(void* RowName, float Override_Value) {
    return;
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C::SetForceMeterLevel(int32_t New_Level, bool DebugOnly) {
    return;
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C::OnConsumeForceImmediately0(void* ForceMeterRow, float ConsumedForce, float ShadowTime) {
    return;
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C::Set_Unlimited_Force_Mode(bool Unlimited) {
    return;
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C::RefillForceMeter() {
    return;
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C::DecreaseForceMeter() {
    return;
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C::Failed_Force_Usage() {
    return;
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C::RestoreForceMeterLevel() {
    return;
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C::Game_State_Changed(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager, void* PreviousGameState, void* NewGameState) {
    return;
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C::Gain_Force_Amount(void* Row_Name) {
    return;
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C::ForceMeterEmptiedTutorial(void* ResponsibleForceName, float TimeUntilForceRegen) {
    return;
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C::CombatRegenTick() {
    return;
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C::DebugToggleInfiniteForce() {
    return;
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C::UnlockAboveThreshold() {
    return;
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C::UnlockBelowThreshold() {
    return;
}
void _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C::OnForceConsumed__DelegateSignature() {
    return;
}
