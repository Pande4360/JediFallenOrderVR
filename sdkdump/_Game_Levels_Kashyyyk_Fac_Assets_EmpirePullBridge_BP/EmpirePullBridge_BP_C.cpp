#include "..\FUObjectArray.hpp"
#include "EmpirePullBridge_BP_C.hpp"
#include "..\_Game_WorldInteracts_Navigation_Rope_BP_BaseRope\BP_BaseRope_C.hpp"
#include "..\_Script_AkAudio\AkBankLoadComponent.hpp"
#include "..\_Script_AkAudio\AkComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\SphereComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_RsGameTechRT\RsRopeComponent.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapStateTransitionGatewayComponent.hpp"
#include "..\_Script_SwGame\RsAbilityEffectVictimComponent.hpp"
void* _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
_Script_Engine::SceneComponent*& _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C::get_Root() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x3a0);
}
_Script_AkAudio::AkComponent*& _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C::get_Audio_Sparks() {
    return *(_Script_AkAudio::AkComponent**)((uintptr_t)this + 0x388);
}
_Script_AkAudio::AkBankLoadComponent*& _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C::get_AkBankLoad() {
    return *(_Script_AkAudio::AkBankLoadComponent**)((uintptr_t)this + 0x368);
}
_Script_CoreUObject::Class* _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/Kashyyyk/Fac/Assets/EmpirePullBridge_BP.EmpirePullBridge_BP_C");
    return result;
}
_Script_RsGameTechRT::RsWorldMapStateTransitionGatewayComponent*& _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C::get_RsWorldMapOneWayGateway() {
    return *(_Script_RsGameTechRT::RsWorldMapStateTransitionGatewayComponent**)((uintptr_t)this + 0x370);
}
_Script_Engine::SphereComponent*& _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C::get_Force_Collision() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x378);
}
void _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C::OnForceTelekinesisOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
_Script_Engine::SkeletalMeshComponent*& _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C::get_KAS_Push_Bridge_base_geo() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x398);
}
_Script_Engine::StaticMeshComponent*& _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C::get_Bridge() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x380);
}
void _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C::LVL_Opened__DelegateSignature() {
    return;
}
_Script_SwGame::RsAbilityEffectVictimComponent*& _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C::get_RsAbilityEffectVictim() {
    return *(_Script_SwGame::RsAbilityEffectVictimComponent**)((uintptr_t)this + 0x390);
}
bool _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C::get_isUp_() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a8 + 0)) & 1 != 0;
}
void _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C::set_isUp_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_WorldInteracts_Navigation_Rope_BP_BaseRope::BP_BaseRope_C*& _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C::get_Rope() {
    return *(_Game_WorldInteracts_Navigation_Rope_BP_BaseRope::BP_BaseRope_C**)((uintptr_t)this + 0x3b0);
}
_Script_RsGameTechRT::RsRopeComponent*& _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C::get_RopeComponentVar() {
    return *(_Script_RsGameTechRT::RsRopeComponent**)((uintptr_t)this + 0x3b8);
}
void* _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C::get_LVL_Opened() {
    return (void*)((uintptr_t)this + 0x3c0);
}
float& _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C::get_OpenAmount() {
    return *(float*)((uintptr_t)this + 0x3d0);
}
void _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C::UserConstructionScript0() {
    return;
}
void _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C::OnForcePullEnd() {
    return;
}
void _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C::OnForcePullEnterHold() {
    return;
}
void _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C::OnForcePullOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C::OnForcePushEnd() {
    return;
}
void _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C::OnForcePushOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C::OnForceSlowEnd() {
    return;
}
void _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C::OnForceSlowOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C::OnForceSlowRenewed(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityLevel) {
    return;
}
void _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C::OnForceSlowStart(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C::OnForceTelekinesisEnd() {
    return;
}
void _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C::OnForceTelekinesisStart(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C::setOpenAmount(float OpenAmount) {
    return;
}
void _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C::setIsUp(bool isUp_) {
    return;
}
void _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C::OnForcePushStart(_Script_Engine::Actor* Instigator, _Script_CoreUObject::Vector& PushVector, void* PushHitType, _Script_CoreUObject::Vector& OriginalDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C::OnForcePullStart(_Script_Engine::Actor* Instigator, float PullDuration, _Script_CoreUObject::Vector& OriginalPullDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C::ExecuteUbergraph_EmpirePullBridge_BP(int32_t EntryPoint) {
    return;
}
