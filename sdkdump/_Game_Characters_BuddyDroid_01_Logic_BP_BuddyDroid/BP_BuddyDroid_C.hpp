#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_BackPanelSettings\ST_BD1_BackPanelSettings.hpp"
#include "..\_Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_FlashlightSettings\ST_BD1_FlashlightSettings.hpp"
#include "..\_Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_HeroInteract\ST_BD1_HeroInteract.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_RsGameTechRT\RsBitfield_HeroLoadoutFlags.hpp"
#include "..\_Script_SwGame\SwAIBuddyDroid.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_AkAudio {
struct AkComponent;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_RsGameTechRT {
struct RsTargetableComponent;
}
namespace _Script_Engine {
struct PointLightComponent;
}
namespace _Script_Engine {
struct SpotLightComponent;
}
namespace _Script_Engine {
struct BillboardComponent;
}
namespace _Script_SwGame {
struct RsAbilityEffectVictimComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct CapsuleComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct SphereComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_Engine {
struct DamageType;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_MovieScene {
struct MovieSceneSequence;
}
namespace _Game_Characters_BuddyDroid_01_Logic_AB_BuddyDroid {
struct AB_BuddyDroid_C;
}
namespace _Game_Characters_Hero_Logic_BP_Control {
struct BP_Control_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_RsGameTechRT {
struct RsAIGameStateManager;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid {
#pragma pack(push, 1)
struct BP_BuddyDroid_C : public _Script_SwGame::SwAIBuddyDroid {
    private: char pad_2ae0[0x688]; public:
    void* get_UberGraphFrame();
    _Script_AkAudio::AkComponent*& get_Ak();
    _Script_Engine::ParticleSystemComponent*& get_P_Droid_BlueLight();
    _Script_Engine::ParticleSystemComponent*& get_P_Droid_Light();
    _Script_Engine::ParticleSystemComponent*& get_P_Health_Effect();
    _Script_Engine::PointLightComponent*& get_Flashlight_Pointlight();
    _Script_Engine::SpotLightComponent*& get_Flashlight_Spotlight();
    _Script_Engine::SkeletalMeshComponent*& get_BD1_Health_Canister_rig();
    _Script_Engine::StaticMeshComponent*& get_BD1_overcharge_upgrade();
    _Script_Engine::StaticMeshComponent*& get_BD1_overcharge_panel();
    _Script_Engine::PointLightComponent*& get_BackLight();
    _Script_Engine::ParticleSystemComponent*& get_Scan_Effect();
    _Script_SwGame::RsAbilityEffectVictimComponent*& get_RsAbilityEffectVictim();
    _Script_RsGameTechRT::RsTargetableComponent*& get_RsTargetable();
    _Script_Engine::SpotLightComponent*& get_ScanLight();
    _Script_Engine::CapsuleComponent*& get_attackCollision();
    _Script_Engine::SphereComponent*& get_HeroOverlap();
    float& get_Timeline_9_NewTrack_4_F3865E7743E0937E08BFECB3EE51C90F();
    void* get_Timeline_9__Direction_F3865E7743E0937E08BFECB3EE51C90F();
    _Script_Engine::TimelineComponent*& get_Timeline_9();
    float& get_UpdateFlashlightDirection_NewTrack_4_5C8692FB4473E98FD2D4C0BD3D383D4B();
    void* get_UpdateFlashlightDirection__Direction_5C8692FB4473E98FD2D4C0BD3D383D4B();
    _Script_Engine::TimelineComponent*& get_UpdateFlashlightDirection();
    float& get_RangedHealTimeline_Vertical_0B0465E64116796392CC2BADBA660C81();
    float& get_RangedHealTimeline_Horizontal_0B0465E64116796392CC2BADBA660C81();
    void* get_RangedHealTimeline__Direction_0B0465E64116796392CC2BADBA660C81();
    _Script_Engine::TimelineComponent*& get_RangedHealTimeline();
    float& get_BackPanelBlend_Timeline_Blend_7021C74643B8C2A9BAC92587C5E84890();
    void* get_BackPanelBlend_Timeline__Direction_7021C74643B8C2A9BAC92587C5E84890();
    _Script_Engine::TimelineComponent*& get_BackPanelBlend_Timeline();
    float& get_BackPanelOverride_Timeline_Blend_F8BDDB4143E15E907DA385B3EB3DD665();
    void* get_BackPanelOverride_Timeline__Direction_F8BDDB4143E15E907DA385B3EB3DD665();
    _Script_Engine::TimelineComponent*& get_BackPanelOverride_Timeline();
    float& get_Timeline_8_Blend_244CC5F34DBFABA2802B1CA53C6A51ED();
    void* get_Timeline_8__Direction_244CC5F34DBFABA2802B1CA53C6A51ED();
    _Script_Engine::TimelineComponent*& get_Timeline_8();
    float& get_TookDamage_Blend_2DAA72BB42222567DFA54FB5B9CDAB83();
    void* get_TookDamage__Direction_2DAA72BB42222567DFA54FB5B9CDAB83();
    _Script_Engine::TimelineComponent*& get_TookDamage();
    float& get_Timeline_7_Blend_53718C6E4DAB37AB0A4FE2A9F506F277();
    void* get_Timeline_7__Direction_53718C6E4DAB37AB0A4FE2A9F506F277();
    _Script_Engine::TimelineComponent*& get_Timeline_7();
    float& get_Timeline_4_Blend_036D843243D8B6E58797CCA9A21AC6A7();
    void* get_Timeline_4__Direction_036D843243D8B6E58797CCA9A21AC6A7();
    _Script_Engine::TimelineComponent*& get_Timeline_4();
    float& get_Timeline_6_Blend_BEC7863748F8E6E14AD55BA7A69004A6();
    void* get_Timeline_6__Direction_BEC7863748F8E6E14AD55BA7A69004A6();
    _Script_Engine::TimelineComponent*& get_Timeline_6();
    float& get_Timeline_5_Blend_E8D384424C1D530339740C8343D92AA3();
    void* get_Timeline_5__Direction_E8D384424C1D530339740C8343D92AA3();
    _Script_Engine::TimelineComponent*& get_Timeline_5();
    float& get_Timeline_3_Blend_79B0817B46954553ADA553A583EC1774();
    void* get_Timeline_3__Direction_79B0817B46954553ADA553A583EC1774();
    _Script_Engine::TimelineComponent*& get_Timeline_3();
    float& get_Timeline_2_Blend_5B452166457C73B95DA39AB80D94BA8C();
    void* get_Timeline_2__Direction_5B452166457C73B95DA39AB80D94BA8C();
    _Script_Engine::TimelineComponent*& get_Timeline_2();
    float& get_Timeline_1_Blend_F147ADFD4E54441418CB8BB281581BB6();
    void* get_Timeline_1__Direction_F147ADFD4E54441418CB8BB281581BB6();
    _Script_Engine::TimelineComponent*& get_Timeline_1();
    float& get_Timeline_0_Blend_043DABE749B5CF6C4D1CC584BD442734();
    void* get_Timeline_0__Direction_043DABE749B5CF6C4D1CC584BD442734();
    _Script_Engine::TimelineComponent*& get_Timeline_0();
    void* get_Update_Scan_Light_Rotation__Direction_5B6385D54DF9F3ECD291829D736CA5DC();
    _Script_Engine::TimelineComponent*& get_Update_Scan_Light_Rotation();
    float& get_SonarBlinkerTimeline_LightIntensity_229890BA47302898E5B89CA487F4348B();
    void* get_SonarBlinkerTimeline__Direction_229890BA47302898E5B89CA487F4348B();
    _Script_Engine::TimelineComponent*& get_SonarBlinkerTimeline();
    float& get_batteryLength();
    void* get_batteryTimer();
    bool get_canForceSlowdown();
    void set_canForceSlowdown(bool value);
    int32_t& get_AttachCount();
    void* get_LVL_DetectBuddyAttached();
    void* get_LVL_DetectBuddyDetached();
    _Script_Engine::Actor*& get_SonarTarget();
    void* get_ScanColorNeutral();
    void* get_ScanColorAlarm();
    void* get_ScanColorConfirm();
    void* get_ScanColorCurrent();
    _Script_Engine::BillboardComponent*& get_TargetObject();
    _Script_Engine::AnimMontage*& get_CurrentHealMontage();
    _Script_Engine::MaterialInstanceDynamic*& get_BackPanelMaterial();
    int32_t& get_NewVar_0();
    int32_t& get_NewVar_1();
    int32_t& get_NewVar_2();
    void* get_BackPanel_Color_Current();
    void* get_BackPanel_Color_Detached();
    void* get_BackPanel_Color_AttachedHurt();
    void* get_BackPanel_Color_AttachedHealthy();
    _Script_Engine::MaterialInstanceDynamic*& get_EyeMaterial();
    void* get_EyeColor();
    float& get_EyeLightRadius();
    float& get_EyeLightIntensity();
    _Script_Engine::AnimMontage*& get_JumpStartMontage();
    _Script_Engine::AnimMontage*& get_CurrentJumpMontage();
    void* get_BackLight_Color_AttachedHealthy();
    void* get_BackLight_Color_AttachedHurt();
    void* get_BackLight_Color_Detached();
    _Script_Engine::SpotLightComponent*& get_Current_SwimLight();
    bool get_SwimModeActive();
    void set_SwimModeActive(bool value);
    bool get_ProbeHackEnabled();
    void set_ProbeHackEnabled(bool value);
    _Script_Engine::PointLightComponent*& get_CurrentPointLight();
    _Game_Characters_BuddyDroid_01_Logic_AB_BuddyDroid::AB_BuddyDroid_C*& get_REF_AB_BuddyDroid();
    bool get_DroidLightOn();
    void set_DroidLightOn(bool value);
    void* get_BackPanel_Color_Override();
    float& get_BackPanel_Brightness_Override();
    float& get_BackPanel_AnimSpeed_Override();
    void* get_BackLight_Color_Override();
    float& get_BackLight_Intensity_Override();
    bool get_BackPanelOverrideActive();
    void set_BackPanelOverrideActive(bool value);
    void* get_BackLight_Color_Current();
    float& get_BackPanel_Brightness_Current();
    float& get_BackLight_Intensity_Current();
    float& get_BackPanel_AnimSpeed_Current();
    float& get_BackPanelOverride_BlendInTime();
    float& get_BackPanel_Brightness_Default();
    float& get_BackLight_Intensity_Default();
    float& get_BackPanel_AnimSpeed_Default();
    void* get_BackPanelSettings_AttachedHealthy();
    void* get_BackPanelSettings_AttachedHurt();
    void* get_BackPanelSettings_Detached();
    void* get_BackPanelSettings_Old();
    void* get_BackPanelSettings_Current();
    void* get_BackPanelSettings_Override();
    float& get_DistanceMultiplier();
    float& get_DistanceMultiplierMin();
    float& get_DistanceMultiplierMax();
    float& get_RangedHealTossDuration();
    bool get_HealTossInProgress();
    void set_HealTossInProgress(bool value);
    bool get_HealTossQueued();
    void set_HealTossQueued(bool value);
    void* get_FlashlightSettings();
    _Game_Characters_Hero_Logic_BP_Control::BP_Control_C*& get_REF_BP_Control();
    _Script_Engine::SceneComponent*& get_TargetComponent();
    void* get_CurrentRelationship();
    void* get_RelationshipTagMap();
    void* get_ValidAnimNames();
    int32_t& get_TotalWeightValue();
    int32_t& get_CurrentWeight();
    void* get_NameWeightMap();
    void* get_CurrentAnimName();
    void* get_PreviousAnimName();
    void* get_ValidAnimNamesNoHero();
    void* get_ValidAnimNamesWithHero();
    void* get_BuddyInteractCooldown();
    static _Script_CoreUObject::Class* static_class();
    void GetBD1SkeletalMesh(_Script_Engine::SkeletalMeshComponent*& SkelMeshComponent);
    void CIN_HologramFX(bool Enabled);
    void CIN_DroidScanFX(bool Enabled);
    void GetMonkeyBeamClimbType(void*& ClimbType);
    void AssignFlashlightSettings(_Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_FlashlightSettings::ST_BD1_FlashlightSettings New_Settings);
    void CalculateDistanceMultiplier();
    void UpdateBackPanelSettings(float BlendPercentage, _Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_BackPanelSettings::ST_BD1_BackPanelSettings BackPanelSettings_A, _Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_BackPanelSettings::ST_BD1_BackPanelSettings BackPanelSettings_B);
    void SetSwimState(bool IsSwimning);
    void OverrideBackPanelLight_Stop();
    void OverrideBackPanelLight_Start(_Script_CoreUObject::LinearColor MaterialColor, float MaterialBrightness, float MaterialAnimSpeed, _Script_CoreUObject::LinearColor LightColor, float LightIntensity, float BlendInTime);
    void SelectFlashlightSettings(void* Flashlight_Mode);
    void CheckLoadoutOnChange(void*& Old_Flags, void*& New_Flags);
    void CheckLoadoutOnSetup();
    void UpdateEyeMaterial();
    void IsForceSlowdownObject();
    void Lvl_CanBuddyDetach(bool& can_detach);
    void IsTelekinesisObject();
    void UserConstructionScript();
    void Update_Scan_Light_Rotation__FinishedFunc();
    void Update_Scan_Light_Rotation__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void Timeline_3__FinishedFunc();
    void Timeline_3__UpdateFunc();
    void SonarBlinkerTimeline__FinishedFunc();
    void SonarBlinkerTimeline__UpdateFunc();
    void Timeline_5__FinishedFunc();
    void Timeline_5__UpdateFunc();
    void Timeline_6__FinishedFunc();
    void Timeline_6__UpdateFunc();
    void Timeline_4__FinishedFunc();
    void Timeline_4__UpdateFunc();
    void Timeline_7__FinishedFunc();
    void Timeline_7__UpdateFunc();
    void TookDamage__FinishedFunc();
    void TookDamage__UpdateFunc();
    void Timeline_8__FinishedFunc();
    void Timeline_8__UpdateFunc();
    void BackPanelOverride_Timeline__FinishedFunc();
    void BackPanelOverride_Timeline__UpdateFunc();
    void BackPanelBlend_Timeline__FinishedFunc();
    void BackPanelBlend_Timeline__UpdateFunc();
    void RangedHealTimeline__FinishedFunc();
    void RangedHealTimeline__UpdateFunc();
    void UpdateFlashlightDirection__FinishedFunc();
    void UpdateFlashlightDirection__UpdateFunc();
    void Timeline_9__FinishedFunc();
    void Timeline_9__UpdateFunc();
    void OnLoaded_959DA30240826B8CF0C68986590CB302(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_0E3FB93343DBFC6AFEB50CAC8E5E26FE(_Script_CoreUObject::Object* Loaded);
    void OnAttachedToHero0();
    void OnDetachedFromHero0();
    void OnBeginAttachToHero0();
    void OnLightTurnedOn0();
    void OnLightTurnedOff0();
    void DroidScanXRayStart();
    void ScanEffectAlarm();
    void ScanEffectConfirm();
    void ScanEffectDisco();
    void ScanEffectNuetral();
    void DroidScanXRayEnd();
    void HealthInjector_SetVisible(bool NewVisibility, _Script_CoreUObject::Vector Scale);
    void LaunchHealthAttached();
    void Finish_Hacking_Loop();
    void Action_Droid_Button();
    void LaunchHealthUnattached();
    void ReceiveTick(float DeltaSeconds);
    void DroidScanSonarEnd();
    void HeroHealAnimEnded(_Script_Engine::AnimMontage* Montage, bool bInterrupted);
    void BackPanel_Color();
    void DroidScanSonarStart(_Script_Engine::Actor* SonarTarget);
    void BackPanel_Intensity();
    void BackPanel_Speed();
    void DroidScanEnd();
    void DroidScanStart(_Script_Engine::BillboardComponent* Target_Object);
    void DoubleJump();
    void ForceSlowdown_1(float defaultSlowdownLength);
    void TelekinesisDrop_1(_Script_CoreUObject::Vector Velocity);
    void TelekinesisPush_1(_Script_CoreUObject::Vector Velocity);
    void ForcePullStart_1(float pullTime, _Script_CoreUObject::Vector PullHandLoc, _Script_CoreUObject::Vector pullHandFwdVector);
    void PrepareForRespawn();
    void ListenForHeroDeath();
    void AcquireAnimation();
    void SetUpBuddyDroid(bool acquireAnim, bool spawnDetached);
    void MaterialSwap();
    void DroidAcquireComplete(_Script_Engine::AnimMontage* Montage, bool bInterrupted);
    void EndGlide();
    void HackPanel();
    void GameStateChanged(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager, void* PreviousGameState, void* NewGameState);
    void LVL_DroidLightOff();
    void LVL_DroidLightOn();
    void StartBatteryTimer();
    void BatteryEmpty();
    void Lvl_SetAllowedToDetach(bool canDetach);
    void EvaluateAttackTarget();
    void Glide();
    void SeekHeroToMount();
    void BackPanel_Heal();
    void BndEvt__HeroOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void ReceiveBeginPlay();
    void SetHealingState(bool bIsHealing);
    void HeroNavStateChanged(void* NewState, void* PrevState);
    void BackPanel_SwimModeOn();
    void BackPanel_SwimModeOff();
    void BackPanel_OutOfCombat();
    void BackPanel_Combat();
    void HeroJumpStarted();
    void JumpMontageEnded(_Script_Engine::AnimMontage* Montage, bool bInterrupted);
    void HeroForceFlipped();
    void UpdateDroidScanSonar();
    void HeroTookDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser);
    void StartLowHealthMode();
    void EnableDamageFlash();
    void DisableDamageFlash();
    void StopLowHealthMode();
    void EvaluateHeroHealth();
    void HeroLoadoutChanged(_Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags OldFlags, _Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags NewFlags);
    void HealthInjector_Extend(bool Extend);
    void Enable_Heal_Flash();
    void Disable_Heal_Flash();
    void SwimStateChanged(void* previousSwimState, void* newSwimState);
    void StartDiveMode();
    void BindSwimStateEvent();
    void TransitionToBackPanelOverride();
    void BlendToNewBackPanelSettings(_Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_BackPanelSettings::ST_BD1_BackPanelSettings BackPanelSettings, float BlendInTime);
    void LVL_RewardChestCelebration(bool HighTier);
    void HeroStartedWallRun();
    void HeroStoppedWallRun();
    void HeroSlideStarted();
    void HeroSlideStopped();
    void TriggerRadarFromMission(void* Mission_Key);
    void TriggerRadarFromLoadout();
    void TriggerRadarFromScan();
    void CombatMapNotification();
    void MonkeyBeamStarted();
    void MonkeyBeamStopped();
    void SetFlashlightAiming(bool Enabled);
    void OnMasterSequenceStart_BP(_Script_MovieScene::MovieSceneSequence* MasterSequence, void* Reason);
    void OnMasterSequenceEnd_BP(_Script_MovieScene::MovieSceneSequence* MasterSequence, void* Reason);
    void ManualMonkeyBeamAttach();
    void ManualMonkeyBeamDetach();
    void BuddyCooldownStarted();
    void BuddyCooldownFinished();
    void MapOpened();
    void MapClosed();
    void BindMapEvents();
    void MapProjection(bool Enabled);
    void UpdateCurrentRelationship();
    void GenerateValidAnimsList();
    void SelectNewAnim();
    void PlayAnims(_Game_Characters_BuddyDroid_01_Logic_Structs_ST_BD1_HeroInteract::ST_BD1_HeroInteract AnimData);
    void TryBuddyAnimSelect();
    void SetUpCosmetics();
    void BuddyInteractCooldownFinished();
    void SetupBuddyDroidAndAttachPoint(void* AttachPoint, bool LockAttachPoint);
    void ExecuteUbergraph_BP_BuddyDroid(int32_t EntryPoint);
    void LVL_DetectBuddyDetached__DelegateSignature();
    void LVL_DetectBuddyAttached__DelegateSignature();
}; // Size: 0x3168
#pragma pack(pop)
}
