#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_BuddyDroid_01_Logic_AB_BuddyDroid\AB_BuddyDroid_C.hpp"
#include "BP_BuddyDroid_C.hpp"
#include "..\_Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_BackPanelSettings\ST_BD1_BackPanelSettings.hpp"
#include "..\_Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_FlashlightSettings\ST_BD1_FlashlightSettings.hpp"
#include "..\_Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_HeroInteract\ST_BD1_HeroInteract.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Control\BP_Control_C.hpp"
#include "..\_Script_AkAudio\AkComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\BillboardComponent.hpp"
#include "..\_Script_Engine\CapsuleComponent.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\DamageType.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\PointLightComponent.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\SphereComponent.hpp"
#include "..\_Script_Engine\SpotLightComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_MovieScene\MovieSceneSequence.hpp"
#include "..\_Script_RsGameTechRT\RsAIGameStateManager.hpp"
#include "..\_Script_RsGameTechRT\RsBitfield_HeroLoadoutFlags.hpp"
#include "..\_Script_RsGameTechRT\RsTargetableComponent.hpp"
#include "..\_Script_SwGame\RsAbilityEffectVictimComponent.hpp"
#include "..\_Script_SwGame\SwAIBuddyDroid.hpp"
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Timeline_8_Blend_244CC5F34DBFABA2802B1CA53C6A51ED() {
    return *(float*)((uintptr_t)this + 0x2bc0);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x2ae0);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::HealthInjector_SetVisible(bool NewVisibility, _Script_CoreUObject::Vector Scale) {
    return;
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_DistanceMultiplier() {
    return *(float*)((uintptr_t)this + 0x2f50);
}
_Script_Engine::ParticleSystemComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_P_Health_Effect() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x2b00);
}
_Script_AkAudio::AkComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Ak() {
    return *(_Script_AkAudio::AkComponent**)((uintptr_t)this + 0x2ae8);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Timeline_6__Direction_BEC7863748F8E6E14AD55BA7A69004A6() {
    return (void*)((uintptr_t)this + 0x2c04);
}
_Script_Engine::BillboardComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_TargetObject() {
    return *(_Script_Engine::BillboardComponent**)((uintptr_t)this + 0x2d00);
}
_Script_Engine::ParticleSystemComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_P_Droid_BlueLight() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x2af0);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::StartDiveMode() {
    return;
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BackPanel_Color_Detached() {
    return (void*)((uintptr_t)this + 0x2d34);
}
_Script_Engine::SpotLightComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Flashlight_Spotlight() {
    return *(_Script_Engine::SpotLightComponent**)((uintptr_t)this + 0x2b10);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::DroidScanSonarStart(_Script_Engine::Actor* SonarTarget) {
    return;
}
_Script_CoreUObject::Class* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/BuddyDroid_01/Logic/BP_BuddyDroid.BP_BuddyDroid_C");
    return result;
}
_Script_Engine::TimelineComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Timeline_1() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x2c48);
}
_Script_Engine::ParticleSystemComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_P_Droid_Light() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x2af8);
}
_Script_Engine::PointLightComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Flashlight_Pointlight() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x2b08);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::OnMasterSequenceStart_BP(_Script_MovieScene::MovieSceneSequence* MasterSequence, void* Reason) {
    return;
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Timeline_3_Blend_79B0817B46954553ADA553A583EC1774() {
    return *(float*)((uintptr_t)this + 0x2c20);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::Timeline_0__FinishedFunc() {
    return;
}
_Script_Engine::SkeletalMeshComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BD1_Health_Canister_rig() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x2b18);
}
_Script_Engine::StaticMeshComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BD1_overcharge_upgrade() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x2b20);
}
int32_t& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_TotalWeightValue() {
    return *(int32_t*)((uintptr_t)this + 0x3058);
}
_Script_Engine::StaticMeshComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BD1_overcharge_panel() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x2b28);
}
_Script_Engine::PointLightComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BackLight() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x2b30);
}
_Script_Engine::ParticleSystemComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Scan_Effect() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x2b38);
}
_Script_Engine::TimelineComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Timeline_4() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x2bf8);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_batteryTimer() {
    return (void*)((uintptr_t)this + 0x2c88);
}
_Script_SwGame::RsAbilityEffectVictimComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_RsAbilityEffectVictim() {
    return *(_Script_SwGame::RsAbilityEffectVictimComponent**)((uintptr_t)this + 0x2b40);
}
_Script_RsGameTechRT::RsTargetableComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_RsTargetable() {
    return *(_Script_RsGameTechRT::RsTargetableComponent**)((uintptr_t)this + 0x2b48);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::MonkeyBeamStarted() {
    return;
}
_Script_Engine::SpotLightComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_ScanLight() {
    return *(_Script_Engine::SpotLightComponent**)((uintptr_t)this + 0x2b50);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BackPanelSettings_AttachedHealthy() {
    return (void*)((uintptr_t)this + 0x2e48);
}
_Script_Engine::CapsuleComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_attackCollision() {
    return *(_Script_Engine::CapsuleComponent**)((uintptr_t)this + 0x2b58);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Timeline_3__Direction_79B0817B46954553ADA553A583EC1774() {
    return (void*)((uintptr_t)this + 0x2c24);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::OnDetachedFromHero0() {
    return;
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Timeline_9__Direction_F3865E7743E0937E08BFECB3EE51C90F() {
    return (void*)((uintptr_t)this + 0x2b6c);
}
_Script_Engine::SphereComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_HeroOverlap() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x2b60);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::SetupBuddyDroidAndAttachPoint(void* AttachPoint, bool LockAttachPoint) {
    return;
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Timeline_9_NewTrack_4_F3865E7743E0937E08BFECB3EE51C90F() {
    return *(float*)((uintptr_t)this + 0x2b68);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Timeline_1__Direction_F147ADFD4E54441418CB8BB281581BB6() {
    return (void*)((uintptr_t)this + 0x2c44);
}
_Script_Engine::TimelineComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Timeline_0() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x2c58);
}
_Script_Engine::TimelineComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Timeline_9() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x2b70);
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_UpdateFlashlightDirection_NewTrack_4_5C8692FB4473E98FD2D4C0BD3D383D4B() {
    return *(float*)((uintptr_t)this + 0x2b78);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BackPanelSettings_Old() {
    return (void*)((uintptr_t)this + 0x2ecc);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_UpdateFlashlightDirection__Direction_5C8692FB4473E98FD2D4C0BD3D383D4B() {
    return (void*)((uintptr_t)this + 0x2b7c);
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Timeline_1_Blend_F147ADFD4E54441418CB8BB281581BB6() {
    return *(float*)((uintptr_t)this + 0x2c40);
}
_Script_Engine::TimelineComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_UpdateFlashlightDirection() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x2b80);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::TriggerRadarFromMission(void* Mission_Key) {
    return;
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_RangedHealTimeline_Vertical_0B0465E64116796392CC2BADBA660C81() {
    return *(float*)((uintptr_t)this + 0x2b88);
}
_Script_Engine::TimelineComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BackPanelOverride_Timeline() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x2bb8);
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BackPanelOverride_BlendInTime() {
    return *(float*)((uintptr_t)this + 0x2e38);
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_RangedHealTimeline_Horizontal_0B0465E64116796392CC2BADBA660C81() {
    return *(float*)((uintptr_t)this + 0x2b8c);
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BackPanel_AnimSpeed_Current() {
    return *(float*)((uintptr_t)this + 0x2e34);
}
_Script_Engine::TimelineComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Timeline_5() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x2c18);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_RangedHealTimeline__Direction_0B0465E64116796392CC2BADBA660C81() {
    return (void*)((uintptr_t)this + 0x2b90);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BackPanelBlend_Timeline__Direction_7021C74643B8C2A9BAC92587C5E84890() {
    return (void*)((uintptr_t)this + 0x2ba4);
}
_Script_Engine::TimelineComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_RangedHealTimeline() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x2b98);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_CurrentRelationship() {
    return (void*)((uintptr_t)this + 0x2fb0);
}
_Game_Characters_BuddyDroid_01_Logic_AB_BuddyDroid::AB_BuddyDroid_C*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_REF_AB_BuddyDroid() {
    return *(_Game_Characters_BuddyDroid_01_Logic_AB_BuddyDroid::AB_BuddyDroid_C**)((uintptr_t)this + 0x2de0);
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Timeline_4_Blend_036D843243D8B6E58797CCA9A21AC6A7() {
    return *(float*)((uintptr_t)this + 0x2bf0);
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BackPanelBlend_Timeline_Blend_7021C74643B8C2A9BAC92587C5E84890() {
    return *(float*)((uintptr_t)this + 0x2ba0);
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Timeline_5_Blend_E8D384424C1D530339740C8343D92AA3() {
    return *(float*)((uintptr_t)this + 0x2c10);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::TransitionToBackPanelOverride() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::TelekinesisDrop_1(_Script_CoreUObject::Vector Velocity) {
    return;
}
_Script_Engine::TimelineComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BackPanelBlend_Timeline() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x2ba8);
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BackPanelOverride_Timeline_Blend_F8BDDB4143E15E907DA385B3EB3DD665() {
    return *(float*)((uintptr_t)this + 0x2bb0);
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Timeline_0_Blend_043DABE749B5CF6C4D1CC584BD442734() {
    return *(float*)((uintptr_t)this + 0x2c50);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BackPanelOverride_Timeline__Direction_F8BDDB4143E15E907DA385B3EB3DD665() {
    return (void*)((uintptr_t)this + 0x2bb4);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::Timeline_8__UpdateFunc() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::UserConstructionScript() {
    return;
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Timeline_8__Direction_244CC5F34DBFABA2802B1CA53C6A51ED() {
    return (void*)((uintptr_t)this + 0x2bc4);
}
_Script_Engine::TimelineComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Timeline_8() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x2bc8);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_TookDamage__Direction_2DAA72BB42222567DFA54FB5B9CDAB83() {
    return (void*)((uintptr_t)this + 0x2bd4);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::OnLoaded_0E3FB93343DBFC6AFEB50CAC8E5E26FE(_Script_CoreUObject::Object* Loaded) {
    return;
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_TookDamage_Blend_2DAA72BB42222567DFA54FB5B9CDAB83() {
    return *(float*)((uintptr_t)this + 0x2bd0);
}
_Script_Engine::TimelineComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_TookDamage() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x2bd8);
}
int32_t& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_NewVar_0() {
    return *(int32_t*)((uintptr_t)this + 0x2d18);
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Timeline_7_Blend_53718C6E4DAB37AB0A4FE2A9F506F277() {
    return *(float*)((uintptr_t)this + 0x2be0);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Timeline_7__Direction_53718C6E4DAB37AB0A4FE2A9F506F277() {
    return (void*)((uintptr_t)this + 0x2be4);
}
_Script_Engine::TimelineComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Timeline_7() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x2be8);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Timeline_4__Direction_036D843243D8B6E58797CCA9A21AC6A7() {
    return (void*)((uintptr_t)this + 0x2bf4);
}
bool _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_HealTossInProgress() {
    return (*(uint8_t*)((uintptr_t)this + 0x2f60 + 0)) & 1 != 0;
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Timeline_6_Blend_BEC7863748F8E6E14AD55BA7A69004A6() {
    return *(float*)((uintptr_t)this + 0x2c00);
}
_Script_Engine::TimelineComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Timeline_6() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x2c08);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::Timeline_3__UpdateFunc() {
    return;
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Timeline_5__Direction_E8D384424C1D530339740C8343D92AA3() {
    return (void*)((uintptr_t)this + 0x2c14);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::HeroStoppedWallRun() {
    return;
}
_Script_Engine::TimelineComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Timeline_3() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x2c28);
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Timeline_2_Blend_5B452166457C73B95DA39AB80D94BA8C() {
    return *(float*)((uintptr_t)this + 0x2c30);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Timeline_2__Direction_5B452166457C73B95DA39AB80D94BA8C() {
    return (void*)((uintptr_t)this + 0x2c34);
}
_Script_Engine::TimelineComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Timeline_2() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x2c38);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::LaunchHealthAttached() {
    return;
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Timeline_0__Direction_043DABE749B5CF6C4D1CC584BD442734() {
    return (void*)((uintptr_t)this + 0x2c54);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Update_Scan_Light_Rotation__Direction_5B6385D54DF9F3ECD291829D736CA5DC() {
    return (void*)((uintptr_t)this + 0x2c60);
}
_Script_Engine::TimelineComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Update_Scan_Light_Rotation() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x2c68);
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_SonarBlinkerTimeline_LightIntensity_229890BA47302898E5B89CA487F4348B() {
    return *(float*)((uintptr_t)this + 0x2c70);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_SonarBlinkerTimeline__Direction_229890BA47302898E5B89CA487F4348B() {
    return (void*)((uintptr_t)this + 0x2c74);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::DroidScanEnd() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::set_ProbeHackEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2dd1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2dd1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::TimelineComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_SonarBlinkerTimeline() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x2c78);
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_batteryLength() {
    return *(float*)((uintptr_t)this + 0x2c80);
}
bool _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_canForceSlowdown() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c90 + 0)) & 1 != 0;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::BatteryEmpty() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::OverrideBackPanelLight_Stop() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::set_canForceSlowdown(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c90 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c90 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_AttachCount() {
    return *(int32_t*)((uintptr_t)this + 0x2c94);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_LVL_DetectBuddyAttached() {
    return (void*)((uintptr_t)this + 0x2c98);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_LVL_DetectBuddyDetached() {
    return (void*)((uintptr_t)this + 0x2ca8);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::BackPanelOverride_Timeline__UpdateFunc() {
    return;
}
_Script_Engine::Actor*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_SonarTarget() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x2cb8);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_ScanColorNeutral() {
    return (void*)((uintptr_t)this + 0x2cc0);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_ScanColorAlarm() {
    return (void*)((uintptr_t)this + 0x2cd0);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_ScanColorConfirm() {
    return (void*)((uintptr_t)this + 0x2ce0);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BackPanelSettings_Override() {
    return (void*)((uintptr_t)this + 0x2f24);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_ScanColorCurrent() {
    return (void*)((uintptr_t)this + 0x2cf0);
}
_Script_Engine::AnimMontage*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_CurrentHealMontage() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x2d08);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BackPanelMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x2d10);
}
int32_t& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_NewVar_1() {
    return *(int32_t*)((uintptr_t)this + 0x2d1c);
}
int32_t& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_NewVar_2() {
    return *(int32_t*)((uintptr_t)this + 0x2d20);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::Timeline_7__FinishedFunc() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::UpdateBackPanelSettings(float BlendPercentage, _Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_BackPanelSettings::ST_BD1_BackPanelSettings BackPanelSettings_A, _Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_BackPanelSettings::ST_BD1_BackPanelSettings BackPanelSettings_B) {
    return;
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BackPanel_Color_Current() {
    return (void*)((uintptr_t)this + 0x2d24);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::OnLoaded_959DA30240826B8CF0C68986590CB302(_Script_CoreUObject::Object* Loaded) {
    return;
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BackPanel_Color_AttachedHurt() {
    return (void*)((uintptr_t)this + 0x2d44);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BackPanel_Color_AttachedHealthy() {
    return (void*)((uintptr_t)this + 0x2d54);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_EyeMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x2d68);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_EyeColor() {
    return (void*)((uintptr_t)this + 0x2d70);
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_EyeLightRadius() {
    return *(float*)((uintptr_t)this + 0x2d80);
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_EyeLightIntensity() {
    return *(float*)((uintptr_t)this + 0x2d84);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::HeroHealAnimEnded(_Script_Engine::AnimMontage* Montage, bool bInterrupted) {
    return;
}
_Script_Engine::AnimMontage*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_JumpStartMontage() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x2d88);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::SeekHeroToMount() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::Timeline_1__UpdateFunc() {
    return;
}
_Script_Engine::AnimMontage*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_CurrentJumpMontage() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x2d90);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::Timeline_0__UpdateFunc() {
    return;
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BackLight_Color_AttachedHealthy() {
    return (void*)((uintptr_t)this + 0x2d98);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BackLight_Color_AttachedHurt() {
    return (void*)((uintptr_t)this + 0x2da8);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::MapClosed() {
    return;
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BackLight_Color_Detached() {
    return (void*)((uintptr_t)this + 0x2db8);
}
_Script_Engine::SpotLightComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_Current_SwimLight() {
    return *(_Script_Engine::SpotLightComponent**)((uintptr_t)this + 0x2dc8);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::Timeline_6__UpdateFunc() {
    return;
}
bool _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_SwimModeActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x2dd0 + 0)) & 1 != 0;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::set_SwimModeActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2dd0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2dd0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::BackPanelBlend_Timeline__UpdateFunc() {
    return;
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BackPanel_AnimSpeed_Default() {
    return *(float*)((uintptr_t)this + 0x2e44);
}
bool _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_ProbeHackEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x2dd1 + 0)) & 1 != 0;
}
bool _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BackPanelOverrideActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e18 + 0)) & 1 != 0;
}
_Script_Engine::PointLightComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_CurrentPointLight() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x2dd8);
}
bool _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_DroidLightOn() {
    return (*(uint8_t*)((uintptr_t)this + 0x2de8 + 0)) & 1 != 0;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::SetUpBuddyDroid(bool acquireAnim, bool spawnDetached) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::set_DroidLightOn(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2de8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2de8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BackPanel_Color_Override() {
    return (void*)((uintptr_t)this + 0x2dec);
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BackPanel_Brightness_Override() {
    return *(float*)((uintptr_t)this + 0x2dfc);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::LVL_DroidLightOff() {
    return;
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BackPanel_AnimSpeed_Override() {
    return *(float*)((uintptr_t)this + 0x2e00);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BackLight_Color_Override() {
    return (void*)((uintptr_t)this + 0x2e04);
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BackLight_Intensity_Override() {
    return *(float*)((uintptr_t)this + 0x2e14);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::set_BackPanelOverrideActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e18 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BackLight_Color_Current() {
    return (void*)((uintptr_t)this + 0x2e1c);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::GenerateValidAnimsList() {
    return;
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BackPanel_Brightness_Current() {
    return *(float*)((uintptr_t)this + 0x2e2c);
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BackLight_Intensity_Current() {
    return *(float*)((uintptr_t)this + 0x2e30);
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BackPanel_Brightness_Default() {
    return *(float*)((uintptr_t)this + 0x2e3c);
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BackLight_Intensity_Default() {
    return *(float*)((uintptr_t)this + 0x2e40);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::DisableDamageFlash() {
    return;
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BackPanelSettings_AttachedHurt() {
    return (void*)((uintptr_t)this + 0x2e74);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BackPanelSettings_Detached() {
    return (void*)((uintptr_t)this + 0x2ea0);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BackPanelSettings_Current() {
    return (void*)((uintptr_t)this + 0x2ef8);
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_DistanceMultiplierMin() {
    return *(float*)((uintptr_t)this + 0x2f54);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::HeroJumpStarted() {
    return;
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_DistanceMultiplierMax() {
    return *(float*)((uintptr_t)this + 0x2f58);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::SetHealingState(bool bIsHealing) {
    return;
}
float& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_RangedHealTossDuration() {
    return *(float*)((uintptr_t)this + 0x2f5c);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::set_HealTossInProgress(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2f60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2f60 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_HealTossQueued() {
    return (*(uint8_t*)((uintptr_t)this + 0x2f61 + 0)) & 1 != 0;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::set_HealTossQueued(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2f61 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2f61 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_FlashlightSettings() {
    return (void*)((uintptr_t)this + 0x2f64);
}
_Game_Characters_Hero_Logic_BP_Control::BP_Control_C*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_REF_BP_Control() {
    return *(_Game_Characters_Hero_Logic_BP_Control::BP_Control_C**)((uintptr_t)this + 0x2fa0);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::HackPanel() {
    return;
}
_Script_Engine::SceneComponent*& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_TargetComponent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x2fa8);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_RelationshipTagMap() {
    return (void*)((uintptr_t)this + 0x2fb8);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::ReceiveTick(float DeltaSeconds) {
    return;
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_ValidAnimNames() {
    return (void*)((uintptr_t)this + 0x3008);
}
int32_t& _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_CurrentWeight() {
    return *(int32_t*)((uintptr_t)this + 0x305c);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_NameWeightMap() {
    return (void*)((uintptr_t)this + 0x3060);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_CurrentAnimName() {
    return (void*)((uintptr_t)this + 0x30b0);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_PreviousAnimName() {
    return (void*)((uintptr_t)this + 0x30b8);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_ValidAnimNamesNoHero() {
    return (void*)((uintptr_t)this + 0x30c0);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::BackPanel_Color() {
    return;
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_ValidAnimNamesWithHero() {
    return (void*)((uintptr_t)this + 0x3110);
}
void* _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::get_BuddyInteractCooldown() {
    return (void*)((uintptr_t)this + 0x3160);
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::GetBD1SkeletalMesh(_Script_Engine::SkeletalMeshComponent*& SkelMeshComponent) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::CIN_HologramFX(bool Enabled) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::CIN_DroidScanFX(bool Enabled) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::GetMonkeyBeamClimbType(void*& ClimbType) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::AssignFlashlightSettings(_Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_FlashlightSettings::ST_BD1_FlashlightSettings New_Settings) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::CalculateDistanceMultiplier() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::SetSwimState(bool IsSwimning) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::OverrideBackPanelLight_Start(_Script_CoreUObject::LinearColor MaterialColor, float MaterialBrightness, float MaterialAnimSpeed, _Script_CoreUObject::LinearColor LightColor, float LightIntensity, float BlendInTime) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::SelectFlashlightSettings(void* Flashlight_Mode) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::MaterialSwap() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::CheckLoadoutOnChange(void*& Old_Flags, void*& New_Flags) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::CheckLoadoutOnSetup() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::UpdateEyeMaterial() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::IsForceSlowdownObject() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::GameStateChanged(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager, void* PreviousGameState, void* NewGameState) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::Lvl_CanBuddyDetach(bool& can_detach) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::IsTelekinesisObject() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::StopLowHealthMode() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::Update_Scan_Light_Rotation__FinishedFunc() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::Update_Scan_Light_Rotation__UpdateFunc() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::Timeline_1__FinishedFunc() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::Timeline_2__FinishedFunc() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::Timeline_2__UpdateFunc() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::HeroNavStateChanged(void* NewState, void* PrevState) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::Timeline_3__FinishedFunc() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::SonarBlinkerTimeline__FinishedFunc() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::SonarBlinkerTimeline__UpdateFunc() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::ReceiveBeginPlay() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::Timeline_5__FinishedFunc() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::Timeline_5__UpdateFunc() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::Timeline_6__FinishedFunc() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::Timeline_4__FinishedFunc() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::Timeline_4__UpdateFunc() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::Timeline_7__UpdateFunc() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::TookDamage__FinishedFunc() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::TookDamage__UpdateFunc() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::Timeline_8__FinishedFunc() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::BackPanelOverride_Timeline__FinishedFunc() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::BackPanelBlend_Timeline__FinishedFunc() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::RangedHealTimeline__FinishedFunc() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::RangedHealTimeline__UpdateFunc() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::UpdateFlashlightDirection__FinishedFunc() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::UpdateFlashlightDirection__UpdateFunc() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::HeroTookDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::Timeline_9__FinishedFunc() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::Timeline_9__UpdateFunc() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::OnAttachedToHero0() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::OnBeginAttachToHero0() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::OnLightTurnedOn0() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::OnLightTurnedOff0() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::DroidScanXRayStart() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::ScanEffectAlarm() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::ScanEffectConfirm() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::ScanEffectDisco() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::ScanEffectNuetral() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::DroidScanXRayEnd() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::Finish_Hacking_Loop() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::Action_Droid_Button() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::BackPanel_Combat() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::LaunchHealthUnattached() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::DroidScanSonarEnd() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::BackPanel_Intensity() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::BackPanel_Speed() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::DroidScanStart(_Script_Engine::BillboardComponent* Target_Object) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::DoubleJump() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::ForceSlowdown_1(float defaultSlowdownLength) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::TelekinesisPush_1(_Script_CoreUObject::Vector Velocity) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::ForcePullStart_1(float pullTime, _Script_CoreUObject::Vector PullHandLoc, _Script_CoreUObject::Vector pullHandFwdVector) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::PrepareForRespawn() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::ListenForHeroDeath() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::AcquireAnimation() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::DroidAcquireComplete(_Script_Engine::AnimMontage* Montage, bool bInterrupted) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::EndGlide() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::LVL_DroidLightOn() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::StartBatteryTimer() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::Lvl_SetAllowedToDetach(bool canDetach) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::EvaluateAttackTarget() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::Glide() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::BackPanel_Heal() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::BndEvt__HeroOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::BackPanel_SwimModeOn() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::BackPanel_SwimModeOff() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::BackPanel_OutOfCombat() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::JumpMontageEnded(_Script_Engine::AnimMontage* Montage, bool bInterrupted) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::HeroForceFlipped() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::UpdateDroidScanSonar() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::StartLowHealthMode() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::EnableDamageFlash() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::EvaluateHeroHealth() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::HeroLoadoutChanged(_Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags OldFlags, _Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags NewFlags) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::HealthInjector_Extend(bool Extend) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::Enable_Heal_Flash() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::Disable_Heal_Flash() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::SwimStateChanged(void* previousSwimState, void* newSwimState) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::BindSwimStateEvent() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::BlendToNewBackPanelSettings(_Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_BackPanelSettings::ST_BD1_BackPanelSettings BackPanelSettings, float BlendInTime) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::LVL_RewardChestCelebration(bool HighTier) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::HeroStartedWallRun() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::HeroSlideStarted() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::HeroSlideStopped() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::TriggerRadarFromLoadout() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::TriggerRadarFromScan() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::CombatMapNotification() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::MonkeyBeamStopped() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::SetFlashlightAiming(bool Enabled) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::OnMasterSequenceEnd_BP(_Script_MovieScene::MovieSceneSequence* MasterSequence, void* Reason) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::ManualMonkeyBeamAttach() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::ManualMonkeyBeamDetach() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::BuddyCooldownStarted() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::BuddyCooldownFinished() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::MapOpened() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::BindMapEvents() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::MapProjection(bool Enabled) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::UpdateCurrentRelationship() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::SelectNewAnim() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::PlayAnims(_Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_HeroInteract::ST_BD1_HeroInteract AnimData) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::TryBuddyAnimSelect() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::SetUpCosmetics() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::BuddyInteractCooldownFinished() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::ExecuteUbergraph_BP_BuddyDroid(int32_t EntryPoint) {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::LVL_DetectBuddyDetached__DelegateSignature() {
    return;
}
void _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C::LVL_DetectBuddyAttached__DelegateSignature() {
    return;
}
