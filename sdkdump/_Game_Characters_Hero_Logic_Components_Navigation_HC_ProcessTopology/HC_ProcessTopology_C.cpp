#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Hero\BP_Hero_C.hpp"
#include "HC_ProcessTopology_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsHeroTopologyComponent.hpp"
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology::HC_ProcessTopology_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x180);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology::HC_ProcessTopology_C::get_WallState() {
    return (void*)((uintptr_t)this + 0x19c);
}
_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& _Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology::HC_ProcessTopology_C::get_BPHero_REF() {
    return *(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C**)((uintptr_t)this + 0x188);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology::HC_ProcessTopology_C::get_timeLeftGround() {
    return *(float*)((uintptr_t)this + 0x198);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology::HC_ProcessTopology_C::get_TimeSinceGround() {
    return *(float*)((uintptr_t)this + 0x190);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology::HC_ProcessTopology_C::get_timeSinceGroundTolerance() {
    return *(float*)((uintptr_t)this + 0x194);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology::HC_ProcessTopology_C::get_facingWallStickTolerance() {
    return *(float*)((uintptr_t)this + 0x1a0);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology::HC_ProcessTopology_C::get_WallDirection() {
    return (void*)((uintptr_t)this + 0x19d);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology::HC_ProcessTopology_C::get_WallNormal() {
    return (void*)((uintptr_t)this + 0x1a4);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology::HC_ProcessTopology_C::get_WallPerchMinUpwardVelocity() {
    return *(float*)((uintptr_t)this + 0x1b0);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology::HC_ProcessTopology_C::get_WallPerchMaxUpwardVelocity() {
    return *(float*)((uintptr_t)this + 0x1b4);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology::HC_ProcessTopology_C::get_FacingWallCameraTolerance() {
    return *(float*)((uintptr_t)this + 0x1b8);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology::HC_ProcessTopology_C::get_WallPerchMinAngle() {
    return *(float*)((uintptr_t)this + 0x1bc);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology::HC_ProcessTopology_C::get_WallPerchMaxAngle() {
    return *(float*)((uintptr_t)this + 0x1c0);
}
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology::HC_ProcessTopology_C::get_MustHaveVelocityToEnterWall() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c4 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology::HC_ProcessTopology_C::set_MustHaveVelocityToEnterWall(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology::HC_ProcessTopology_C::get_Wall_Camera() {
    return (void*)((uintptr_t)this + 0x1c8);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology::HC_ProcessTopology_C::get_OnContact() {
    return (void*)((uintptr_t)this + 0x1d8);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology::HC_ProcessTopology_C::get_OnProximity() {
    return (void*)((uintptr_t)this + 0x1e8);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology::HC_ProcessTopology_C::get_Player_Location_Log_Elapsed_Time() {
    return *(float*)((uintptr_t)this + 0x1f8);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology::HC_ProcessTopology_C::get_Player_Location_Log_Interval() {
    return *(float*)((uintptr_t)this + 0x1fc);
}
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology::HC_ProcessTopology_C::get_PreventGround() {
    return (*(uint8_t*)((uintptr_t)this + 0x200 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology::HC_ProcessTopology_C::set_PreventGround(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x200 + 0);
    *(uint8_t*)((uintptr_t)this + 0x200 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology::HC_ProcessTopology_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Components/Navigation/HC_ProcessTopology.HC_ProcessTopology_C");
    return result;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology::HC_ProcessTopology_C::ReceiveTick(float DeltaSeconds) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology::HC_ProcessTopology_C::ReceiveBeginPlay() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology::HC_ProcessTopology_C::ForceAirState() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology::HC_ProcessTopology_C::PreventGroundForDuration(float Duration) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology::HC_ProcessTopology_C::ExecuteUbergraph_HC_ProcessTopology(int32_t EntryPoint) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology::HC_ProcessTopology_C::OnProximity__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology::HC_ProcessTopology_C::OnContact__DelegateSignature() {
    return;
}
