#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_GlobalData_Structs_Struct_CameraPOIVar\Struct_CameraPOIVar.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_GameplayTags\GameplayTagContainer.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_SwGame\SwHero.hpp"
namespace _Game_Characters_Hero_Logic_Components_General_HC_Progression {
struct HC_Progression_C;
}
namespace _Game_Characters_Hero_Logic_Components_General_HC_WorldMap {
struct HC_WorldMap_C;
}
namespace _Game_Characters_Hero_Logic_Components_Navigation_HC_Navigation {
struct HC_Navigation_C;
}
namespace _Game_Characters_Hero_Logic_Components_Combat_HC_Revenge {
struct HC_Revenge_C;
}
namespace _Script_MediaAssets {
struct MediaSoundComponent;
}
namespace _Game_Characters_Hero_Logic_Components_Navigation_HC_Jump {
struct HC_Jump_C;
}
namespace _Game_Characters_Hero_Logic_Components_Navigation_HC_Stamina {
struct HC_Stamina_C;
}
namespace _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI {
struct HC_CameraPOI_C;
}
namespace _Script_SwGame {
struct CombatAttackTableRow;
}
namespace _Game_Characters_Hero_Logic_Components_Navigation_HC_Zipline {
struct HC_Zipline_C;
}
namespace _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForcePowers {
struct HC_ForcePowers_C;
}
namespace _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb {
struct HC_Climb_C;
}
namespace _Script_SwGame {
struct SwProjectile;
}
namespace _Game_Characters_Hero_Logic_Components_Navigation_HC_WallRun {
struct HC_WallRun_C;
}
namespace _Game_Characters_Hero_Logic_Components_Combat_HC_Base_Reactions {
struct HC_Base_Reactions_C;
}
namespace _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim {
struct HC_Swim_C;
}
namespace _Game_Characters_Hero_Logic_BP_SwPlayerState {
struct BP_SwPlayerState_C;
}
namespace _Script_Engine {
struct MaterialInstance;
}
namespace _Script_Engine {
struct ForceFeedbackEffect;
}
namespace _Script_SwGame {
struct RsAbilityUserComponent;
}
namespace _Game_Characters_Hero_Logic_Components_General_HC_Flashlight {
struct HC_Flashlight_C;
}
namespace _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes {
struct HC_Ropes_C;
}
namespace _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam {
struct HC_BalanceBeam_C;
}
namespace _Game_Characters_Hero_Logic_Components_Navigation_HC_Sprint {
struct HC_Sprint_C;
}
namespace _Game_Characters_Hero_Logic_Components_Navigation_HC_Slide {
struct HC_Slide_C;
}
namespace _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage {
struct HC_ForceUsage_C;
}
namespace _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe {
struct HC_Sheathe_C;
}
namespace _Game_Characters_Hero_Logic_Components_Combat_HC_Health {
struct HC_Health_C;
}
namespace _Game_Characters_Hero_Logic_Components_Combat_HC_Sword {
struct HC_Sword_C;
}
namespace _Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology {
struct HC_ProcessTopology_C;
}
namespace _Script_Engine {
struct DataTable;
}
namespace _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab {
struct HC_LedgeGrab_C;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Game_Characters_Hero_Logic_Components_Combat_HC_Defense {
struct HC_Defense_C;
}
namespace _Game_Characters_Hero_Logic_Components_Combat_HC_Evade {
struct HC_Evade_C;
}
namespace _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting {
struct HC_zTargeting_C;
}
namespace _Game_Characters_Hero_Logic_BP_SwPlayerController {
struct BP_SwPlayerController_C;
}
namespace _Game_WorldInteracts_EventZones_Interact_Zone_Interact {
struct Zone_Interact_C;
}
namespace _Script_SwGame {
struct SwAIBuddyDroid;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid {
struct BP_BuddyDroid_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_Engine {
struct DamageType;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Script_Engine {
struct SkeletalMesh;
}
namespace _Script_RsGameTechRT {
struct RsHeroStateModifierDefinition;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_RsGameTechRT {
struct RsAICharacter;
}
namespace _Game_Characters_Hero_Logic_BP_Control {
#pragma pack(push, 1)
struct BP_Control_C : public _Script_SwGame::SwHero {
    private: char pad_2ed0[0x220]; public:
    void* get_UberGraphFrame();
    _Game_Characters_Hero_Logic_Components_General_HC_WorldMap::HC_WorldMap_C*& get_HC_WorldMap();
    _Game_Characters_Hero_Logic_Components_Combat_HC_Revenge::HC_Revenge_C*& get_HC_Revenge();
    _Script_MediaAssets::MediaSoundComponent*& get_StoryboardMediaSound();
    _Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C*& get_HC_CameraPOI();
    _Game_Characters_Hero_Logic_Components_General_HC_Progression::HC_Progression_C*& get_HC_Progression();
    _Game_Characters_Hero_Logic_Components_Navigation_HC_Zipline::HC_Zipline_C*& get_HC_Zipline();
    _Game_Characters_Hero_Logic_Components_Navigation_HC_Stamina::HC_Stamina_C*& get_HC_Stamina();
    _Game_Characters_Hero_Logic_Components_Navigation_HC_Navigation::HC_Navigation_C*& get_HC_Navigation();
    _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForcePowers::HC_ForcePowers_C*& get_HC_ForcePowers();
    _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C*& get_HC_Climb();
    _Game_Characters_Hero_Logic_Components_Navigation_HC_WallRun::HC_WallRun_C*& get_HC_WallRun();
    _Game_Characters_Hero_Logic_Components_Combat_HC_Base_Reactions::HC_Base_Reactions_C*& get_HC_Base_Reactions();
    _Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C*& get_HC_Swim();
    _Script_SwGame::RsAbilityUserComponent*& get_RsAbilityUser();
    _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C*& get_HC_Ropes();
    _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C*& get_HC_BalanceBeam();
    _Game_Characters_Hero_Logic_Components_Navigation_HC_Sprint::HC_Sprint_C*& get_HC_Sprint();
    _Game_Characters_Hero_Logic_Components_General_HC_Flashlight::HC_Flashlight_C*& get_HC_Flashlight();
    _Game_Characters_Hero_Logic_Components_Navigation_HC_Slide::HC_Slide_C*& get_HC_Slide();
    _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C*& get_HC_ForceUsage();
    _Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C*& get_HC_Sheathe();
    _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C*& get_HC_Health();
    _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C*& get_HC_Sword();
    _Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology::HC_ProcessTopology_C*& get_HC_ProcessTopology();
    _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C*& get_HC_LedgeGrab();
    _Game_Characters_Hero_Logic_Components_Navigation_HC_Jump::HC_Jump_C*& get_HC_Jump();
    _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C*& get_HC_Defense();
    _Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C*& get_HC_Evade();
    _Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C*& get_HC_zTargeting();
    _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C*& get_R4PlayerController();
    void* get_MotionTweakEnumsToTweaks();
    void* get_StoredInteractsRegular();
    void* get_Debug_Motion_Tweaks();
    _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C*& get_StoredInteractDroid();
    _Script_Engine::Actor*& get_CurrentInteractAnimated();
    _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C*& get_BuddyDroid();
    _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C*& get_SwPlayerState();
    void* get_LVL_HeroSpawned();
    bool get_ForceTKHeld();
    void set_ForceTKHeld(bool value);
    bool get_blockHeld();
    void set_blockHeld(bool value);
    bool get_InGodMode();
    void set_InGodMode(bool value);
    bool get_DisableLedgeAndClimbStamina();
    void set_DisableLedgeAndClimbStamina(bool value);
    _Script_Engine::Actor*& get_ScriptedAnimActor();
    _Script_Engine::Actor*& get_ConstrainedControlActor();
    void* get_EVT_KillAI();
    void* get_EVT_ToggleMaxStamina();
    void* get_EVT_ToggleMaxForce();
    void* get_EVT_ToggleAudioDebug();
    void* get_EVT_ToggleSlowMotion();
    void* get_LVL_BuddyDroidSpawned();
    _Script_Engine::Actor*& get_CurrentBDHintTrigger();
    _Script_Engine::Actor*& get_CurrentUnlockingDoor();
    bool get_BuddyButtonEnabled();
    void set_BuddyButtonEnabled(bool value);
    bool get_ShouldSetBuddyAttachPoint();
    void set_ShouldSetBuddyAttachPoint(bool value);
    bool get_CurrentlyYoungCal();
    void set_CurrentlyYoungCal(bool value);
    static _Script_CoreUObject::Class* static_class();
    void* HandleProjectileReflection(_Script_SwGame::SwProjectile* IncomingProjectile);
    void GetCurrentCombatSequence(_Script_SwGame::CombatAttackTableRow& CombatSequence);
    void GetCurrentCombatMontage(_Script_Engine::AnimMontage*& CombatMontage);
    void getSwordTrace(_Script_Engine::Actor*& Target);
    void ProjectileReflection(_Script_SwGame::SwProjectile* BaseProjectile, bool& HeroDefended, bool& Reflected);
    void AmIYoungCal(bool& Result);
    void GetCurrentUnlockingDoor(_Script_Engine::Actor*& Door);
    void GetAndRemoveCurrentUnlockingDoor(_Script_Engine::Actor*& CurrentDoor);
    void GetBDHintTrigger(_Script_Engine::Actor*& Trigger);
    void GetHeroRig(_Script_Engine::SkeletalMeshComponent*& HeroRig);
    void GetPoncho(_Script_Engine::SkeletalMeshComponent*& Poncho);
    void UseHealthPot(bool& Result);
    void GetBestCurrentInteract(_Script_Engine::Actor*& BestInteract, void*& Type);
    void IsMotionParmActive(void* MotionTweaks, bool& Active);
    void cheat_CheckMaxStamina(bool& Result);
    void cheat_CheckMaxForce(bool& Result);
    void cheat_ToggleMaxForce(bool& NewMaxForce);
    void cheat_ToggleMaxStamina(bool& NewMaxStamina);
    void cheat_ToggleGodMode(bool& NewGodMode);
    void cheat_CheckGodMode(bool& Result);
    void cheat_CheckHideHUD(bool& Result);
    void cheat_CheckSlowMotion(bool& Result);
    void DroidButtonPress(bool& Handled);
    _Script_SwGame::SwAIBuddyDroid* GetBuddyDroidActor0();
    bool RsShouldTakeDamage(float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* EventInstigator, _Script_Engine::Actor* DamageCauser);
    void ActionCheck_CanUseStoredInteract(void* ActionName, bool& CanUse);
    void InitFromPlayerState();
    void popzTarget();
    void UserConstructionScript();
    void InpActEvt_MeleeAttack_K2Node_InputActionEvent_2(_Script_InputCore::Key Key);
    void InpActEvt_Droid_K2Node_InputActionEvent_1(_Script_InputCore::Key Key);
    void InpActEvt_KillDroid_K2Node_InputActionEvent_0(_Script_InputCore::Key Key);
    void HUDvis(bool On);
    void ResetDoubleJump();
    void PurchaseSkillUpgrade(int32_t ForcePoints, void* UpgradeFlag);
    void RefillHealthPots();
    void SetPonchoVisibility(bool IsVisible, bool hoodIsUp);
    void CaptureHero();
    void InitializeUpgrades();
    void SetPonchoMaterial(_Script_Engine::MaterialInstance* PonchoMaterial);
    void SetPonchoHoodMaterial(_Script_Engine::MaterialInstance* HoodMaterial);
    void HealSuccess();
    void SetDemoMode();
    void UpgradeLightsaberDamage();
    void AddAchievementProgress(void* Achievement, int32_t Amount);
    void QuickRecoverTutorial();
    void SetPonchoStyle(_Script_Engine::SkeletalMesh* PonchoStyle);
    void VerifyAndAddHeroStateModifier(_Script_CoreUObject::Object* InstanceOwner, _Script_RsGameTechRT::RsHeroStateModifierDefinition* Modifier, float BlendTime, float Duration);
    void SetAchievementProgress(void* Achievement, int32_t Amount);
    void SetClimbingClawsVisible(bool IsVisible);
    void ShowScarGlow(float EmissiveStrength);
    void HideScarGlow();
    void SetCalFaceDirty(bool IsDirty);
    void SetEyeTransparency(bool Transparent);
    void AddedDatabankEntry(_Script_GameplayTags::GameplayTagContainer AddedTag);
    void NewGamePlus_SwapToInquisitorCal();
    void NewGamePlus_SwapToNormalCal();
    void OnForcePullEnd();
    void OnForcePullEnterHold();
    void OnForcePullOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForcePullStart(_Script_Engine::Actor* Instigator, float PullDuration, _Script_CoreUObject::Vector& OriginalPullDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForcePushEnd();
    void OnForcePushOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForcePushStart(_Script_Engine::Actor* Instigator, _Script_CoreUObject::Vector& PushVector, void* PushHitType, _Script_CoreUObject::Vector& OriginalDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForceSlowEnd();
    void OnForceSlowOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForceSlowRenewed(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityLevel);
    void OnForceSlowStart(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForceTelekinesisEnd();
    void OnForceTelekinesisOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForceTelekinesisStart(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void ButtonPress();
    void cheat_KillAI();
    void cheat_ToggleSlowMotion();
    void cheat_ToggleHideHUD();
    void cheat_ToggleAudioDebug();
    void EnvDeath();
    void KilledBountyHunter(_Script_Engine::Actor* KilledCharacter);
    void ClearZTarget();
    void Music_Set_World_State(void* WorldStateMusic);
    void ReleaseForcePull();
    void Action_DeactivateForcePush();
    void Action_StoredInteract();
    void RefillForceMeter();
    void GripInput_Pressed();
    void GripInput_Released();
    void Action_DroidConfirm();
    void SetCurrentCombatMontage(_Script_Engine::AnimMontage* Montage);
    void Action_ConstrainedControl();
    void SetCurrentCombatSequence(void* SequenceName, _Script_Engine::DataTable* SequenceTable);
    void SetCurrentUnlockingDoor(_Script_Engine::Actor* Door);
    void SetBuddyButtonEnabled(bool NewEnabled);
    void ExecuteCombatSequence(_Script_RsGameTechRT::RsCharacter* Actor, void* SequenceName, _Script_Engine::DataTable* SequenceTable);
    void ReceiveBeginPlay();
    void clearSwordTrace();
    void InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_53(float AxisValue);
    void InpAxisEvt_TurnRate_K2Node_InputAxisEvent_38(float AxisValue);
    void ParryStart(_Script_Engine::Actor* AI);
    void OnReflectedProjectile(_Script_SwGame::SwProjectile* IncomingProjectile);
    void SetDebugMotionTweaks();
    void OnDeflectedProjectile(_Script_SwGame::SwProjectile* IncomingProjectile);
    void SpawnBuddyDroid();
    void Reset_Stack();
    void Droid_Died(_Script_Engine::Actor* DestroyedActor);
    void AcquireBuddyDroid(_Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation);
    void ReceivePossessed(_Script_Engine::Controller* NewController);
    void pushStack(void* Name);
    void popStack(void* Name);
    void RadialRumble(float Intensity, float Duration, _Script_CoreUObject::Vector Loc);
    void PushMotionParm(void* MotionParm, float Blend);
    void PopMotionParm(void* MotionParm, float Blend);
    void BuddyAcquire();
    void BuddySpawn(bool spawnDetached);
    void BuddyAllowDetach(bool Allow);
    void BuddyLight(bool On);
    void Heal(void* Amount);
    void pushInteractEnemy();
    void popInteractEnemy();
    void Droid_Spawned(_Script_RsGameTechRT::RsAICharacter* SpawnedAI, void* SpawnResult);
    void Spawned_Droid_From_Anim(_Script_RsGameTechRT::RsAICharacter* SpawnedAI, void* SpawnResult);
    void setForceMeter();
    void DespawnBuddyDroid();
    void TogglePauseMenu();
    void PlayHealingMontageOutro();
    void CameraPOIInterface_EndPOI();
    void CameraPOIInterface_StartPOI(_Game_GlobalData_Structs_Struct_CameraPOIVar::Struct_CameraPOIVar POIVariables);
    void InpAxisEvt_MoveLeftAnalogX_K2Node_InputAxisEvent_15(float AxisValue);
    void InpAxisEvt_MoveLeftAnalogY_K2Node_InputAxisEvent_22(float AxisValue);
    void CameraPOIInterface_EndPOIwithoutCameraReset();
    void ScriptedAnimStart(_Script_Engine::Actor* ScriptingActor);
    void ScriptedAnimEnd();
    void ScriptedAnimNotify(void* NotifyName);
    void UpdateCurrentInteractZone(_Script_Engine::Actor* zone, void* Type);
    void CameraPOIInterface_StartPOIwithCameraMode(_Game_GlobalData_Structs_Struct_CameraPOIVar::Struct_CameraPOIVar POIVariables, void* CameraMode);
    void RemoveInteractZone(_Script_Engine::Actor* Interact);
    void ConstrainedControlStart(_Script_Engine::Actor* ConstrainedControlActor);
    void ConstrainedControlEnd();
    void CancelToNav();
    void InteractAnimationDone();
    void RumbleFeedback(_Script_Engine::ForceFeedbackEffect* Force_Feedback);
    void PauseMenuCleanup();
    void PauseMenuInitialization();
    void AutoActivateZTargeting0(_Script_Engine::Actor* AutoTarget);
    void SetBDHintTrigger(_Script_Engine::Actor* HintTrigger);
    void AddTutorialTags();
    void BuddySpawnAndSetAttachPoint(void* AttachPoint, bool LockAttachPoint);
    void InpAxisEvt_MouseTurn_K2Node_InputAxisEvent_4(float AxisValue);
    void ExecuteUbergraph_BP_Control(int32_t EntryPoint);
    void LVL_BuddyDroidSpawned__DelegateSignature(_Script_SwGame::SwAIBuddyDroid* BuddyDroid);
    void EVT_ToggleSlowMotion__DelegateSignature();
    void EVT_ToggleAudioDebug__DelegateSignature();
    void EVT_ToggleMaxForce__DelegateSignature(bool RegularForceMeter);
    void EVT_ToggleMaxStamina__DelegateSignature(bool RegularStaminaMeter);
    void EVT_KillAI__DelegateSignature();
    void LVL_HeroSpawned__DelegateSignature();
}; // Size: 0x30f0
#pragma pack(pop)
}
