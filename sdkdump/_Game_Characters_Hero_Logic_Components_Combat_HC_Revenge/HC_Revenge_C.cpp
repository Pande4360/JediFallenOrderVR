#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_SwPlayerState\BP_SwPlayerState_C.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_Combat_HC_Health\HC_Health_C.hpp"
#include "HC_Revenge_C.hpp"
#include "..\_Game_Characters__Shared_Logic_BP_BaseAI\BP_BaseAI_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsAISpawner.hpp"
#include "..\_Script_RsGameTechRT\RsHeroComponent.hpp"
_Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C*& _Game_Characters_Hero_Logic_Components_Combat_HC_Revenge::HC_Revenge_C::get_HC_Health() {
    return *(_Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C**)((uintptr_t)this + 0x1b8);
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_Revenge::HC_Revenge_C::get_TargetTimeDilation() {
    return *(float*)((uintptr_t)this + 0x1d8);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Revenge::HC_Revenge_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x180);
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Revenge::HC_Revenge_C::ExecuteUbergraph_HC_Revenge(int32_t EntryPoint) {
    return;
}
_Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C*& _Game_Characters_Hero_Logic_Components_Combat_HC_Revenge::HC_Revenge_C::get_SwPlayerState() {
    return *(_Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C**)((uintptr_t)this + 0x188);
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Revenge::HC_Revenge_C::RunRevengeTutorial() {
    return;
}
_Script_RsGameTechRT::RsAISpawner*& _Game_Characters_Hero_Logic_Components_Combat_HC_Revenge::HC_Revenge_C::get_AISpawner() {
    return *(_Script_RsGameTechRT::RsAISpawner**)((uintptr_t)this + 0x190);
}
_Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C*& _Game_Characters_Hero_Logic_Components_Combat_HC_Revenge::HC_Revenge_C::get_AIStore() {
    return *(_Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C**)((uintptr_t)this + 0x198);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Components_Combat_HC_Revenge::HC_Revenge_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Components/Combat/HC_Revenge.HC_Revenge_C");
    return result;
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_Revenge::HC_Revenge_C::get_ClosestDistance() {
    return *(float*)((uintptr_t)this + 0x1a0);
}
_Script_RsGameTechRT::RsAISpawner*& _Game_Characters_Hero_Logic_Components_Combat_HC_Revenge::HC_Revenge_C::get_ClosestAIsSpawner() {
    return *(_Script_RsGameTechRT::RsAISpawner**)((uintptr_t)this + 0x1a8);
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_Revenge::HC_Revenge_C::get_MaximumSearchDistanceForAI() {
    return *(float*)((uintptr_t)this + 0x1b0);
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_Revenge::HC_Revenge_C::get_CurrentDistance() {
    return *(float*)((uintptr_t)this + 0x1c0);
}
bool _Game_Characters_Hero_Logic_Components_Combat_HC_Revenge::HC_Revenge_C::get_IsRevengeXP() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c4 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Revenge::HC_Revenge_C::set_IsRevengeXP(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_Revenge::HC_Revenge_C::get_HeightCap() {
    return *(float*)((uintptr_t)this + 0x1c8);
}
_Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C*& _Game_Characters_Hero_Logic_Components_Combat_HC_Revenge::HC_Revenge_C::get_TutorialAI() {
    return *(_Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C**)((uintptr_t)this + 0x1d0);
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Revenge::HC_Revenge_C::ReceiveBeginPlay() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Revenge::HC_Revenge_C::OnRevenge() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Revenge::HC_Revenge_C::OnTrueDeath() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Revenge::HC_Revenge_C::ReceiveTick(float DeltaSeconds) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Revenge::HC_Revenge_C::SetTimeDilation(float TargetTimeDilation) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Revenge::HC_Revenge_C::FireTutorialMessage() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Revenge::HC_Revenge_C::FadeOutComplete() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Revenge::HC_Revenge_C::DismissRevengeTutorial() {
    return;
}
