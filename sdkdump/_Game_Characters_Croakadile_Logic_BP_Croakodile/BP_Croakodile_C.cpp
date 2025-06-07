#include "..\FUObjectArray.hpp"
#include "BP_Croakodile_C.hpp"
#include "..\_Game_Characters__Shared_Logic_BP_BaseAI\BP_BaseAI_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\CapsuleComponent.hpp"
#include "..\_Script_Engine\ChildActorComponent.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\DamageType.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\SphereComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_RsGameTechRT\RsAIController.hpp"
#include "..\_Script_RsGameTechRT\RsAISpawner.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_RsGameTechRT\RsCharacterDamageModifiers.hpp"
#include "..\_Script_RsGameTechRT\RsDamageParams.hpp"
#include "..\_Script_RsGameTechRT\RsHitEvent.hpp"
#include "..\_Script_RsGameTechRT\RsNavVolume.hpp"
void _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::OnForcePullEnd0() {
    return;
}
_Script_Engine::ChildActorComponent*& _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::get_DynamicDeformer() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x2d38);
}
_Script_Engine::CapsuleComponent*& _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::get_TongueCollider_Tip() {
    return *(_Script_Engine::CapsuleComponent**)((uintptr_t)this + 0x2d30);
}
void* _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x2d18);
}
_Script_Engine::SphereComponent*& _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::get_tongueDismemberCollision() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x2d20);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::get_tongueDismem() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x2d28);
}
_Script_Engine::SphereComponent*& _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::get_PawnHeadCollision() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x2d40);
}
_Script_Engine::CapsuleComponent*& _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::get_TongueCollider_base() {
    return *(_Script_Engine::CapsuleComponent**)((uintptr_t)this + 0x2d48);
}
_Script_Engine::CapsuleComponent*& _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::get_HeadHitCollider() {
    return *(_Script_Engine::CapsuleComponent**)((uintptr_t)this + 0x2d50);
}
_Script_Engine::CapsuleComponent*& _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::get_JawHitCollider() {
    return *(_Script_Engine::CapsuleComponent**)((uintptr_t)this + 0x2d58);
}
float& _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::get_Timeline_0_Burn_6E679E2946E3EB233C2752889B22BBD8() {
    return *(float*)((uintptr_t)this + 0x2d60);
}
float& _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::get_Timeline_0_Overbright_6E679E2946E3EB233C2752889B22BBD8() {
    return *(float*)((uintptr_t)this + 0x2d64);
}
void* _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::get_Timeline_0__Direction_6E679E2946E3EB233C2752889B22BBD8() {
    return (void*)((uintptr_t)this + 0x2d68);
}
_Script_Engine::TimelineComponent*& _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::get_Timeline_0() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x2d70);
}
bool _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::get_CroakParried() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d78 + 0)) & 1 != 0;
}
void _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::set_CroakParried(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::get_CroakOnGround() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d79 + 0)) & 1 != 0;
}
void _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::set_CroakOnGround(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d79 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d79 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::get_InAirPushInterrupt() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d7a + 0)) & 1 != 0;
}
void _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::set_InAirPushInterrupt(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d7a + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d7a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::CancelTongueWhiff() {
    return;
}
float& _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::get_ForcePushImpulseMultiplier() {
    return *(float*)((uintptr_t)this + 0x2d7c);
}
bool _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::get_HasTongue() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d80 + 0)) & 1 != 0;
}
void _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::set_HasTongue(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::get_InAirPullInterrupt() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d81 + 0)) & 1 != 0;
}
void _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::set_InAirPullInterrupt(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d81 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d81 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::get_PlayerAbilityLevel() {
    return (void*)((uintptr_t)this + 0x2d82);
}
_Script_CoreUObject::Class* _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Croakadile/Logic/BP_Croakodile.BP_Croakodile_C");
    return result;
}
_Script_RsGameTechRT::RsCharacterDamageModifiers _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::RsGetDamageModifiers(float Damage, _Script_RsGameTechRT::RsDamageParams& DamageParams, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* EventInstigator, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::UserConstructionScript0() {
    return;
}
void _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::Timeline_0__FinishedFunc() {
    return;
}
void _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::Timeline_0__UpdateFunc() {
    return;
}
void _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::OnForcePushOverriden0(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::OnForcePullOverriden0(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::IsInWaterStateChanged(_Script_RsGameTechRT::RsCharacter* Character, _Script_RsGameTechRT::RsNavVolume* Volume, bool bIsInWater, bool bWasInWater) {
    return;
}
void _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::OnTopologyChanged(void* previousMode, void* newMode, float Proximity) {
    return;
}
void _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::OnAttackCounteredByOtherActor0(_Script_RsGameTechRT::RsHitEvent& DefendedAttack, _Script_Engine::HitResult& HitSweep, _Script_RsGameTechRT::RsCharacter* OtherActor) {
    return;
}
void _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::ReceiveAnyDamage0(float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::OnForcePullStart0(_Script_Engine::Actor* Instigator, float PullDuration, _Script_CoreUObject::Vector& OriginalPullDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::Died0(_Script_Engine::Actor* DeadActor) {
    return;
}
void _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::OnNotifyAISpawned0(_Script_RsGameTechRT::RsAISpawner* Spawner) {
    return;
}
void _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::DismemberFX() {
    return;
}
void _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::OnAIAwarenessChanged0(_Script_RsGameTechRT::RsAIController* AIController, void* PreviousAwarenessState, void* NewAwarenessState) {
    return;
}
void _Game_Characters_Croakadile_Logic_BP_Croakodile::BP_Croakodile_C::ExecuteUbergraph_BP_Croakodile(int32_t EntryPoint) {
    return;
}
