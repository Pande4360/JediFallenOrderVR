#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Characters_Hero_Logic_BP_Control\BP_Control_C.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_GameplayTags\GameplayTagContainer.hpp"
#include "..\_Script_InputCore\Key.hpp"
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Game_Audio_Component_Comp_Audio_Debug_Print_IsSimulatingPhysics {
struct Comp_Audio_Debug_Print_IsSimulatingPhysics_C;
}
namespace _Script_SwGame {
struct RsFallingKillRelocator;
}
namespace _Game_Audio_Component_Comp_Audio_Debug_Print_Cinematic_Info {
struct Comp_Audio_Debug_Print_Cinematic_Info_C;
}
namespace _Game_Audio_Component_Comp_Audio_Debug_Print_MusicSystemStatus {
struct Comp_Audio_Debug_Print_MusicSystemStatus_C;
}
namespace _Script_RsGameTechRT {
struct RsHeroStateModifierDefinition;
}
namespace _Script_Engine {
struct SphereComponent;
}
namespace _Game_Audio_Component_Comp_Audio_Debug_Print_ReverbPreset {
struct Comp_Audio_Debug_Print_ReverbPreset_C;
}
namespace _Game_Audio_Component_Comp_Audio_Hero_State_Underwater {
struct Comp_Audio_Hero_State_Underwater_C;
}
namespace _Script_Engine {
struct ChildActorComponent;
}
namespace _Script_Engine {
struct CapsuleComponent;
}
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_SwGame {
struct SwAIFightComponent;
}
namespace _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager {
struct Comp_Audio_Hero_Combat_State_Manager_C;
}
namespace _Script_SwGame {
struct SwBuddyOwnerComponent;
}
namespace _Script_RsGameTechRT {
struct RsHitEvent;
}
namespace _Script_SwGame {
struct RsAbilityEffectVictimComponent;
}
namespace _Script_RsGameTechRT {
struct RsTargetableComponent;
}
namespace _Script_RsGameTechRT {
struct RsAISenseComponent;
}
namespace _Script_UMG {
struct WidgetComponent;
}
namespace _Game_Items_Lightsaber_BP_Lightsaber_Hero {
struct BP_Lightsaber_Hero_C;
}
namespace _Script_RsTechRT {
struct RsActorMotion;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_MovieScene {
struct MovieSceneSequence;
}
namespace _Script_AkAudio {
struct AkComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_RsGameTechRT {
struct RsWorldMapHologramBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SkeletalMesh;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct MaterialInstance;
}
namespace _Script_SwGame {
struct CombatAttackTableRow;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Script_RsGameTechRT {
struct RsAIGameStateManager;
}
namespace _Script_SwGame {
struct SwProjectile;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_RsGameTechRT {
struct RsDamageParams;
}
namespace _Script_RsGameTechRT {
struct RsUiButton;
}
namespace _Game_Characters_Hero_Logic_BP_Hero {
#pragma pack(push, 1)
struct BP_Hero_C : public _Game_Characters_Hero_Logic_BP_Control::BP_Control_C {
    private: char pad_30f0[0x6c0]; public:
    void* get_UberGraphFrame0();
    _Script_Engine::SkeletalMeshComponent*& get_ClimbingClaws();
    _Game_Audio_Component_Comp_Audio_Debug_Print_Cinematic_Info::Comp_Audio_Debug_Print_Cinematic_Info_C*& get_Comp_Audio_Debug_Print_Cinematic_Info();
    _Script_Engine::SphereComponent*& get_footCollision_R();
    _Game_Audio_Component_Comp_Audio_Debug_Print_MusicSystemStatus::Comp_Audio_Debug_Print_MusicSystemStatus_C*& get_Comp_Audio_Debug_Print_MusicSystemStatus();
    _Game_Audio_Component_Comp_Audio_Debug_Print_ReverbPreset::Comp_Audio_Debug_Print_ReverbPreset_C*& get_Comp_Audio_Debug_Print_ReverbPreset();
    _Game_Audio_Component_Comp_Audio_Debug_Print_IsSimulatingPhysics::Comp_Audio_Debug_Print_IsSimulatingPhysics_C*& get_Comp_Audio_Debug_Print_IsSimulatingPhysics();
    _Script_Engine::SkeletalMeshComponent*& get_Poncho();
    _Script_Engine::SkeletalMeshComponent*& get_face();
    _Game_Audio_Component_Comp_Audio_Hero_State_Underwater::Comp_Audio_Hero_State_Underwater_C*& get_Comp_Audio_Hero_State_Underwater();
    _Script_Engine::ChildActorComponent*& get_Lightsaber_02();
    _Script_Engine::ChildActorComponent*& get_Lightsaber_01();
    _Script_Engine::CapsuleComponent*& get_weaponCollision_Large_02();
    _Script_Engine::CapsuleComponent*& get_weaponCollision_02();
    _Script_SwGame::SwAIFightComponent*& get_SwAIFight();
    _Script_Engine::ChildActorComponent*& get_DynamicDeformer();
    _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C*& get_Comp_Audio_Hero_Combat_State_Manager();
    _Script_SwGame::SwBuddyOwnerComponent*& get_RsBuddyOwner();
    _Script_SwGame::RsAbilityEffectVictimComponent*& get_RsAbilityEffectVictim();
    _Script_SwGame::RsFallingKillRelocator*& get_RsFallingKillRelocator();
    _Script_RsGameTechRT::RsTargetableComponent*& get_RsTargetable();
    _Script_RsGameTechRT::RsAISenseComponent*& get_RsAISense();
    _Script_Engine::CapsuleComponent*& get_weaponCollision_Large();
    _Script_Engine::CapsuleComponent*& get_weaponCollision();
    float& get_RunSpeed();
    void* get_Influence_GroundJump();
    bool get_Event_HasJumped();
    void set_Event_HasJumped(bool value);
    bool get_jumpshift();
    void set_jumpshift(bool value);
    float& get_doublejumpacceleration();
    float& get_doublejumpburst();
    float& get_jumpStartTime();
    float& get_Gravity();
    bool get_jumpCancelled();
    void set_jumpCancelled(bool value);
    bool get_JumpApex();
    void set_JumpApex(bool value);
    float& get_timeSinceGroundTolerance();
    bool get_HasDoubleJumpAbility();
    void set_HasDoubleJumpAbility(bool value);
    bool get_DoubleJumping();
    void set_DoubleJumping(bool value);
    void* get_Influence_DoubleJump();
    float& get_BoostDuration();
    bool get_DoubleJumpComplete();
    void set_DoubleJumpComplete(bool value);
    void* get_Influence_Bounce();
    void* get_Influence_SuperBounce();
    bool get_heatMeterCooldown();
    void set_heatMeterCooldown(bool value);
    float& get_currentStamina();
    float& get_maxStamina();
    float& get_attackStamina();
    float& get_evadeStamina();
    float& get_regenStaminaRate();
    float& get_regenStaminaAmount();
    bool get_regenStaminaActive();
    void set_regenStaminaActive(bool value);
    float& get_regenStaminaTimeDelay();
    _Script_UMG::WidgetComponent*& get_staminaBarWidget();
    float& get_heatMeterCooldownTime();
    float& get_heatMeterCooldownStartTime();
    void* get_Influence_WallJump();
    void* get_Influence_SuperJump();
    void* get_InfluenceHitAir();
    _Game_Items_Lightsaber_BP_Lightsaber_Hero::BP_Lightsaber_Hero_C*& get_LightsaberChild_01();
    _Script_RsTechRT::RsActorMotion*& get_RsActorMotion();
    float& get_DelayRespawnTime();
    bool get_takeReaction();
    void set_takeReaction(bool value);
    float& get_LeftWallDistance();
    float& get_FrontWallDistance();
    float& get_DistanceFromWall();
    float& get_LeftWallDistance45();
    bool get_MapDebounceTriggered();
    void set_MapDebounceTriggered(bool value);
    void* get_windStrength();
    float& get_windSpeed();
    _Script_Engine::MaterialInstanceDynamic*& get_M_Jacket_Upper();
    _Script_Engine::MaterialInstanceDynamic*& get_M_Jacket_Lower();
    _Script_Engine::MaterialInstanceDynamic*& get_M_Pants();
    _Script_Engine::MaterialInstanceDynamic*& get_M_Vest();
    void* get_Wind_Strength_Param();
    void* get_wind_Speed_Param();
    _Script_Engine::MaterialInstanceDynamic*& get_M_Gear();
    void* get_PrevLocation();
    _Script_AkAudio::AkComponent*& get_Anim_Ak_Component_();
    void* get_Previous_Rotation();
    float& get_Yaw_Delta();
    bool get_ShowMap();
    void set_ShowMap(bool value);
    bool get_HasFallingSoundTriggered();
    void set_HasFallingSoundTriggered(bool value);
    void* get_Young_Cal_rig();
    void* get_LVL_HeroEnvDeath();
    _Game_Items_Lightsaber_BP_Lightsaber_Hero::BP_Lightsaber_Hero_C*& get_LightsaberChild_02();
    void* get_YoungCalFace();
    void* get_YoungCalSaber();
    float& get_timeFalling();
    void* get_HealSuccess_0();
    void* get_Bat_GrabbedByBat();
    void* get_Bat_HitBat();
    void* get_Bat_LatchBatFromClaw();
    _Script_Engine::Actor*& get_RandomNarrativeEnemy();
    _Script_CoreUObject::Object*& get_Global_PP();
    _Script_RsGameTechRT::RsWorldMapHologramBase*& get_WorldMapHologram();
    void* get_Bat_FreeFall_GrabBat();
    void* get_Bat_JumpToSwayze();
    void* get_LSSwitchHandle();
    void* get_HighlightedLSType();
    float& get_LSSwitchTimer();
    void* get_LVL_MapOn();
    void* get_LVL_MapOff();
    void* get_LVL_HeroEnvDeathFadeIn();
    float& get_HealthDifficultyModifier();
    float& get_DamageDifficultyModifier();
    void* get_InvulnerabilityTimerHandle();
    int32_t& get_CurrentLightsaberColorIndex();
    bool get_PonchoIsVisible();
    void set_PonchoIsVisible(bool value);
    bool get_PonchoHoodUp();
    void set_PonchoHoodUp(bool value);
    void* get_PonchoCachedVisibilityAnimTickOption();
    void* get_Bat_CSVec();
    void* get_EVT_HUDvis();
    bool get_droidBackpack();
    void set_droidBackpack(bool value);
    void* get_EVT_DemoMode();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_YoungCalHeroState();
    void* get_LVL_OnSwapYoungCalCompleted();
    void* get_LVL_OnSwapAdultCalCompleted();
    void* get_KilledAnEnemy();
    float& get_VelocityThresholdForDeath();
    float& get_VelocityDeathTime();
    bool get_DisableVelocityDeath();
    void set_DisableVelocityDeath(bool value);
    _Script_Engine::MaterialInstanceDynamic*& get_MI_Face();
    bool get_bTailWindActive();
    void set_bTailWindActive(bool value);
    void* get_DirtFaceMat();
    void* get_LVL_OnSwapInquisitorCalCompleted();
    bool get_InitialClothClampSettleTime();
    void set_InitialClothClampSettleTime(bool value);
    static _Script_CoreUObject::Class* static_class();
    void GetLightsaberType(void*& CurrentType);
    void GetLightsaber(_Script_Engine::Actor*& Lightsaber, _Script_Engine::Actor*& Lightsaber02);
    void ConfirmMaterialSwapSuccess(_Script_Engine::SkeletalMesh* LoadedMesh, _Script_Engine::PrimitiveComponent* TargetComponent, bool& Result);
    void VelocityDeathTrace(_Script_Engine::Actor*& OutHit_HitActor);
    void AudioTrace(_Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, float& HitTime);
    void ResetHero();
    float getFallDamage();
    void SkinSwapReapplyMaterials(_Script_Engine::SkeletalMesh* LoadedMesh, _Script_Engine::PrimitiveComponent* TargetComponent);
    void GetHeroRig0(_Script_Engine::SkeletalMeshComponent*& HeroRig);
    void UpdateMaxHealth();
    void LogTelemetry_Bat_Boss(void* EventName, void* BossAction, int32_t FightNumber);
    void GetPoncho0(_Script_Engine::SkeletalMeshComponent*& Poncho);
    void UseHealthPot0(bool& Result);
    void LogTelemetry_DifficultyChanged(void* EventName);
    void LogTelemetry_OpenedMap(void* Event_Name, bool MissionToast);
    void LogTelemetry_Initialize();
    void LogTelemetry_Combat_Status(void* Event_Name, bool IsInCombat);
    void LogTelemetry_Player_Died(void* Event_Name, _Script_Engine::Actor* AI, bool EnvDeath);
    void LogTelemetry_Revive(void* EventName, bool Acquired);
    void LogTelemetry_Mission(void* EventName, void* MissionKey, bool HasCompleted);
    void LogTelemetry_Collectible(void* Event_Name, void* String_ID);
    void LogTelemetry_Unblockable(void* Event_Name, _Script_Engine::Actor* AI, bool Blocking);
    void LogTelemetry_Force(void* EventName, bool HasSucceeded);
    void LogTelemetry_Force_AI(void* EventName, _Script_Engine::Actor* Target, bool HasSucceeded);
    void Telemetry_Force_Activated(void* EventName, _Script_Engine::Actor* Target, bool HasSucceeded);
    void LogTelemetry_Section(void* EventName, void* Section);
    void LogTelemetry_ZTarget_AI(void* EventName, float ZTargetTime, _Script_Engine::Actor* AI);
    void LogTelemetry_ZTarget(void* EventName, float ZTargetTime, int32_t TargetChanges);
    void LogTelemetry_AI(void* Event_Name, _Script_Engine::Actor* AI);
    void LogTelemetry(void* Event_Name);
    void Music_CheckTurnOnAutoStartCombatMusic();
    void ManageLightsaberType(void* NewType);
    void CancelCurrentSync();
    void GetCurrentCombatMontage0(_Script_Engine::AnimMontage*& CombatMontage);
    void GetCurrentCombatSequence0(_Script_SwGame::CombatAttackTableRow& CombatSequence);
    void Audio_Hero_Velocity(float Dt);
    void getSwordTrace0(_Script_Engine::Actor*& Target);
    void RotateToTarget(_Script_Engine::Actor* target_enemy, float yawAmount);
    void UserConstructionScript0();
    void InpActEvt_ForcePull_K2Node_InputActionEvent_0(_Script_InputCore::Key Key);
    void OnLoaded_784B4E614ECA9FC0E8168B9E8C46EF35(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_9C170BEA46BD06C3638A459CE4AB0BFD(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_3E51E1B3417974A2D65905A979D97166(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_249DC13F47DD2D85F394ECB2E4EBADCB(_Script_CoreUObject::Object* Loaded);
    void Telemetry_Revive(void* EventName, bool Acquired);
    void SwimEnter(void* NewState, void* PrevState);
    void BeginFX();
    void SwimExit(void* NewState, void* PrevState);
    void ReceiveBeginPlay0();
    void IncreaseHealthMeter();
    void ReceivePossessed0(_Script_Engine::Controller* NewController);
    void OnForcePushOverriden0(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void EnvDeath0();
    void ReceiveTick(float DeltaSeconds);
    void ResizeHealthMeter();
    void OnBuddyOwnerEnteredNavMesh();
    void OnBuddyOwnerLeftNavMesh();
    void OnReturnToNeutral();
    void OnReflectedProjectile0(_Script_SwGame::SwProjectile* IncomingProjectile);
    void OnDeflectedProjectile0(_Script_SwGame::SwProjectile* IncomingProjectile);
    void OnAttackBlockedByOtherActor(_Script_RsGameTechRT::RsHitEvent& DefendedAttack, _Script_Engine::HitResult& HitSweep, _Script_RsGameTechRT::RsCharacter* OtherActor);
    void ReceiveInstigatedAnyDamage(float Damage, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Actor* DamagedActor, _Script_Engine::Actor* DamageCauser);
    void ReceiveInstigatedZeroDamage(_Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Actor* OtherActor, _Script_Engine::Actor* WouldBeDamageCauser);
    void SetCameraFocusToEnemy(_Script_Engine::Actor* Enemy);
    void BndEvt__RsFallingKillRelocator_K2Node_ComponentBoundEvent_0_RsOnPlayerTeleportedSignature__DelegateSignature();
    void BndEvt__RsFallingKillRelocator_K2Node_ComponentBoundEvent_1_RsOnPlayerTeleportedSignature__DelegateSignature();
    void OnForcePullOverriden0(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void StartBlockEnemyAttack(_Script_RsGameTechRT::RsCharacter* Attacker, bool IsStaffAttack, void* OriginalDefenseType);
    void DecreaseHealthMeter();
    void StartEvadeEnemyAttack(_Script_RsGameTechRT::RsCharacter* Attacker, void* OriginalDefenseType);
    void LightsaberSwitch(void* NewType);
    void ResetDoubleJump0();
    void PurchaseSkillUpgrade0(int32_t ForcePoints, void* UpgradeFlag);
    void LightsaberSwitch_Right();
    void LightsaberSwitch_Left();
    void Ability_Activated(void* AbilityType, _Script_Engine::Actor* Target, bool bHasSucceeded);
    void K2_BlockedEnemyAttack(_Script_RsGameTechRT::RsCharacter* Attacker, _Script_Engine::Actor* DamageCauser, _Script_RsGameTechRT::RsDamageParams& DamageParams);
    void OnDifficultyChanged();
    void SetPonchoVisibility0(bool IsVisible, bool hoodIsUp);
    void SetInvulnerableForDuration(float Duration);
    void ClearInvulnerability();
    void CaptureHero0();
    void InitializeUpgrades0();
    void OnGameStateChangedEvent(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager, void* PreviousGameState, void* NewGameState);
    void UpdateDifficultySettings();
    void SetPonchoMaterial0(_Script_Engine::MaterialInstance* PonchoMaterial);
    void HealSuccess0();
    void SetPonchoHoodMaterial0(_Script_Engine::MaterialInstance* HoodMaterial);
    void OnBlockBreakOtherActor(_Script_RsGameTechRT::RsHitEvent& DefendedAttack, _Script_RsGameTechRT::RsCharacter* OtherActor);
    void OnKilledCharacter(_Script_RsGameTechRT::RsCharacter* Victim);
    void OnMasterSequenceStart_BP(_Script_MovieScene::MovieSceneSequence* MasterSequence, void* Reason);
    void OnMasterSequenceEnd_BP(_Script_MovieScene::MovieSceneSequence* MasterSequence, void* Reason);
    void OnHeroResetPhysics();
    void AddAchievementProgress0(void* Achievement, int32_t Amount);
    void QuickRecoverTutorial0();
    void CheckVelocityDeath();
    void SetPonchoStyle0(_Script_Engine::SkeletalMesh* PonchoStyle);
    void SetAchievementProgress0(void* Achievement, int32_t Amount);
    void SetClimbingClawsVisible0(bool IsVisible);
    void ShowScarGlow0(float EmissiveStrength);
    void HideScarGlow0();
    void BndEvt__MotionModel_K2Node_ComponentBoundEvent_2_RsMotionParmChangedEvent__DelegateSignature(_Script_RsTechRT::RsActorMotion* MotionComponent, void* MotionParm);
    void Stop_TailWind_Rumbles();
    void ReceiveEndPlay(void* EndPlayReason);
    void AddedDatabankEntry0(_Script_GameplayTags::GameplayTagContainer AddedTag);
    void BndEvt__RsFallingKillRelocator_K2Node_ComponentBoundEvent_3_RsOnFindingRespawnPointFailureSignature__DelegateSignature();
    void SetDemoMode0();
    void TurnOffMap();
    void ToggleWorldMap();
    void DEV_AwardForcePoint_50();
    void DEV_AwardForcePoint();
    void HUDvis0(bool On);
    void SetLightsaberAttacksEnabled(bool NewEnabled, bool HideLightsaberWhileDisabled);
    void SetLightsaberType(void* NewType);
    void SaberSheathe(bool Unsheathe, bool ignoreFlashlight, bool saveFlashlight);
    void SaberOn(bool Off, bool Instant, void* SaberToExtend);
    void SaberAttach(bool hip);
    void FanLightsaber(bool On);
    void VerifyAndAddHeroStateModifier0(_Script_CoreUObject::Object* InstanceOwner, _Script_RsGameTechRT::RsHeroStateModifierDefinition* Modifier, float BlendTime, float Duration);
    void KilledBountyHunter0(_Script_Engine::Actor* KilledCharacter);
    void UpgradeLightsaberDamage0();
    void ClearZTarget0();
    void K2_ParriedEnemyAttack(_Script_RsGameTechRT::RsCharacter* Attacker, _Script_Engine::Actor* DamageCauser, _Script_RsGameTechRT::RsDamageParams& DamageParams);
    void OnAttackCounteredByOtherActor(_Script_RsGameTechRT::RsHitEvent& DefendedAttack, _Script_Engine::HitResult& HitSweep, _Script_RsGameTechRT::RsCharacter* OtherActor);
    void RefillHealthPots0();
    void K2_CounteredEnemyAttack(_Script_RsGameTechRT::RsCharacter* Attacker, _Script_Engine::Actor* DamageCauser, _Script_RsGameTechRT::RsDamageParams& DamageParams);
    void RefillForceMeter0();
    void SetCurrentCombatMontage0(_Script_Engine::AnimMontage* Montage);
    void ExecuteCombatSequence0(_Script_RsGameTechRT::RsCharacter* Actor, void* SequenceName, _Script_Engine::DataTable* SequenceTable);
    void SetCurrentCombatSequence0(void* SequenceName, _Script_Engine::DataTable* SequenceTable);
    void clearSwordTrace0();
    void ParryStart0(_Script_Engine::Actor* AI);
    void NewGamePlus_AdultCalSwapAdditionalHousekeeping();
    void NewGamePlus_SwapToNormalCal0();
    void NewGamePlus_SwapToInquisitorCal0();
    void SetEyeTransparency0(bool Transparent);
    void SetCalFaceDirty0(bool IsDirty);
    void SwapToInquisitorCal();
    void SwapToNormalCal();
    void SwapToYoungCal(_Script_RsGameTechRT::RsHeroStateModifierDefinition* StateModifier);
    void Telemetry_Bat_Boss(void* EventName, void* BossAction, int32_t FightNumber);
    void Telemetry_Initialize();
    void Telemetry_Mission(void* EventName, void* MissionKey, bool HasCompleted);
    void Telemetry_Collectible(void* EventName, void* String_ID);
    void UXRSurvery_Accepted(_Script_RsGameTechRT::RsUiButton* Button);
    void Telemetry_Section_End(void* EventName);
    void Telemetry_ZTarget_AI(void* EventName, float ZTargetTime, _Script_Engine::Actor* AI);
    void Telemetry_ZTarget(void* EventName, float ZTargetTime, int32_t NumTargets);
    void Telemetry_AI(void* EventName, _Script_Engine::Actor* AI);
    void Telemetry(void* EventName);
    void ExecuteUbergraph_BP_Hero(int32_t EntryPoint);
    void LVL_OnSwapInquisitorCalCompleted__DelegateSignature();
    void KilledAnEnemy__DelegateSignature(_Script_RsGameTechRT::RsCharacter* CharacterKilled);
    void LVL_OnSwapAdultCalCompleted__DelegateSignature();
    void LVL_OnSwapYoungCalCompleted__DelegateSignature();
    void EVT_DemoMode__DelegateSignature();
    void EVT_HUDvis__DelegateSignature(bool Visible);
    void LVL_HeroEnvDeathFadeIn__DelegateSignature();
    void LVL_MapOff__DelegateSignature();
    void LVL_MapOn__DelegateSignature();
    void Bat_JumpToSwayze__DelegateSignature();
    void Bat_FreeFall_GrabBat__DelegateSignature();
    void Bat_LatchBatFromClaw__DelegateSignature();
    void Bat_HitBat__DelegateSignature();
    void Bat_GrabbedByBat__DelegateSignature();
    void HealSuccess_0__DelegateSignature();
    void LVL_HeroEnvDeath__DelegateSignature();
}; // Size: 0x37b0
#pragma pack(pop)
}
