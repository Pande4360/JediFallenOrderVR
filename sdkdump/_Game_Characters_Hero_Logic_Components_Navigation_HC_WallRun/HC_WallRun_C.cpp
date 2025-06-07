#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Hero\BP_Hero_C.hpp"
#include "HC_WallRun_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_RsGameTechRT\RsHeroStateModifierDefinition.hpp"
#include "..\_Script_SwGame\SwWallRunComponent.hpp"
void _Game_Characters_Hero_Logic_Components_Navigation_HC_WallRun::HC_WallRun_C::EndWallRunBP(void* Reason) {
    return;
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_WallRun::HC_WallRun_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x1d0);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_WallRun::HC_WallRun_C::get_CanWallJumpTimer() {
    return (void*)((uintptr_t)this + 0x1e0);
}
_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& _Game_Characters_Hero_Logic_Components_Navigation_HC_WallRun::HC_WallRun_C::get_HeroRef() {
    return *(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C**)((uintptr_t)this + 0x1d8);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_WallRun::HC_WallRun_C::get_WallJumpGracePeriod() {
    return *(float*)((uintptr_t)this + 0x1f4);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_WallRun::HC_WallRun_C::get_WallJumpGracePeriodTimer() {
    return (void*)((uintptr_t)this + 0x1e8);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_WallRun::HC_WallRun_C::get_TimeToCanWallJump() {
    return *(float*)((uintptr_t)this + 0x1f0);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Game_Characters_Hero_Logic_Components_Navigation_HC_WallRun::HC_WallRun_C::get_WallRunFallModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x1f8);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Components_Navigation_HC_WallRun::HC_WallRun_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Components/Navigation/HC_WallRun.HC_WallRun_C");
    return result;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_WallRun::HC_WallRun_C::StartWallJumpGracePeriod() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_WallRun::HC_WallRun_C::RemoveCanWallJump() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_WallRun::HC_WallRun_C::GetCameraFocusDirection(_Script_CoreUObject::Vector& FocusDirection) {
    return;
}
_Script_CoreUObject::Vector _Game_Characters_Hero_Logic_Components_Navigation_HC_WallRun::HC_WallRun_C::GetViewDirection0() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_WallRun::HC_WallRun_C::ReceiveTick(float DeltaSeconds) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_WallRun::HC_WallRun_C::SetupWallRun() {
    return;
}
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_WallRun::HC_WallRun_C::IsWallRunAllowed0() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_WallRun::HC_WallRun_C::OnWallRunFound0(void* wallOrientation) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_WallRun::HC_WallRun_C::ReceiveBeginPlay() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_WallRun::HC_WallRun_C::OnWallRunExpiredEnd0() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_WallRun::HC_WallRun_C::OnWallRunExpiredBegin0() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_WallRun::HC_WallRun_C::OnWallRunLost0(void* Reason) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_WallRun::HC_WallRun_C::Action_WallRunCancel() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_WallRun::HC_WallRun_C::OnCanWallJumpTimer() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_WallRun::HC_WallRun_C::OnWallJumpGracePeriodTimer() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_WallRun::HC_WallRun_C::ExecuteUbergraph_HC_WallRun(int32_t EntryPoint) {
    return;
}
