#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\SwAICharacter.hpp"
namespace _Script_RsGameTechRT {
struct RsAISenseComponent;
}
namespace _Game_UI_UI_HUD_BossMeter {
struct UI_HUD_BossMeter_C;
}
namespace _Script_AkAudio {
struct AkBankLoadComponent;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_UMG {
struct WidgetComponent;
}
namespace _Script_SwGame {
struct RsAbilityEffectVictimComponent;
}
namespace _Script_SwGame {
struct SwAIFightComponent;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Game_GlobalData_Economy_BPC_RewardComponent {
struct BPC_RewardComponent_C;
}
namespace _Script_RsGameTechRT {
struct RsTargetableComponent;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Game_UI_UI_HUD_EnemyHealth {
struct UI_HUD_EnemyHealth_C;
}
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GameplayTags {
struct GameplayTag;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct DamageType;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Script_RsGameTechRT {
struct RsDamageParams;
}
namespace _Script_RsGameTechRT {
struct RsAIController;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_RsGameTechRT {
struct RsConversation;
}
namespace _Script_RsGameTechRT {
struct RsHitEvent;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_RsGameTechRT {
struct RsAISpawner;
}
namespace _Game_Characters__Shared_Logic_BP_BaseAI {
#pragma pack(push, 1)
struct BP_BaseAI_C : public _Script_SwGame::SwAICharacter {
    private: char pad_29d0[0x348]; public:
    void* get_UberGraphFrame();
    _Script_AkAudio::AkBankLoadComponent*& get_AkBankLoad();
    _Script_UMG::WidgetComponent*& get_ContextActionWidget();
    _Game_GlobalData_Economy_BPC_RewardComponent::BPC_RewardComponent_C*& get_BPC_RewardComponent();
    _Script_SwGame::SwAIFightComponent*& get_SwAIFight();
    _Script_UMG::WidgetComponent*& get_HealthBar();
    _Script_RsGameTechRT::RsAISenseComponent*& get_RsAISense();
    _Script_RsGameTechRT::RsTargetableComponent*& get_RsTargetable();
    _Script_SwGame::RsAbilityEffectVictimComponent*& get_RsAbilityEffectVictim();
    void* get_HealthBarHeightTick__Direction_FEC4B2C544892D1C0524B3B0BD54F421();
    _Script_Engine::TimelineComponent*& get_HealthBarHeightTick();
    void* get_initialMotionParm();
    void* get_initialCollisionParm();
    float& get_tkAttractionWeight();
    bool get_tkHeld();
    void set_tkHeld(bool value);
    void* get_AI_Emotions();
    void* get_airMotionTweaks();
    void* get_contextualStates();
    void* get_sprint();
    void* get_walkSlow();
    bool get_attackHit();
    void set_attackHit(bool value);
    float& get_hitSlowdown();
    float& get_hitSlowdownBlocking();
    float& get_hitSlowdownDuration();
    float& get_hitSlowdown_Large();
    float& get_hitSlowdownBlocking_Large();
    float& get_hitSlowdownDuration_Large();
    bool get_Parry();
    void set_Parry(bool value);
    bool get_CanBeParried();
    void set_CanBeParried(bool value);
    void* get_AI_Size();
    void* get_TargetLocations();
    bool get_JustTookDamage();
    void set_JustTookDamage(bool value);
    _Script_AkAudio::AkAudioEvent*& get_Audio_VO_StopAllExcept();
    _Script_AkAudio::AkAudioEvent*& get_Audio_VO_Play_Death();
    bool get_HideHealthBar();
    void set_HideHealthBar(bool value);
    _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C*& get_UI_EnemyHealth();
    bool get_UseHealthBar();
    void set_UseHealthBar(bool value);
    bool get_attackBlocked();
    void set_attackBlocked(bool value);
    bool get_PauseWhenHit();
    void set_PauseWhenHit(bool value);
    bool get_IsTargeted();
    void set_IsTargeted(bool value);
    bool get_DamagedShowHealthBar();
    void set_DamagedShowHealthBar(bool value);
    float& get_LowHealthThreshold();
    void* get_blockMeterVisibility();
    int32_t& get_blockParryCount();
    bool get_AllowHealthBarToVis();
    void set_AllowHealthBarToVis(bool value);
    void* get_SpeakerTag();
    void* get_PossibleSpeakerTags();
    float& get_MeleeSyncDistance();
    void* get_SyncList_Stunned();
    void* get_SyncList_LastEnemy();
    void* get_SyncList_Slowed_Front();
    void* get_SyncList_Slowed_Back();
    void* get_SyncList_Downed_Front();
    void* get_SyncList_Downed_Back();
    void* get_SyncList_Pulled();
    void* get_SyncList_DeathFromAbove();
    _Script_Engine::DataTable*& get_OverrideAttacks_Saber();
    _Script_Engine::DataTable*& get_OverrideAttacks_Staff();
    _Script_Engine::DataTable*& get_OverrideAttacks_Twin();
    bool get_revengeMode();
    void set_revengeMode(bool value);
    void* get_AIAwarenessKind();
    void* get_AIReactionRole();
    bool get_canBeRevenge();
    void set_canBeRevenge(bool value);
    _Script_Engine::ParticleSystemComponent*& get_RevengeParticle();
    void* get_weaponHolsterR();
    void* get_weaponHolsterL();
    void* get_WwiseSwitchGroup();
    void* get_SpeakertagToWiseSwitches();
    void* get_CorpseTacticalGuideTag();
    int32_t& get_blockCountIncrease();
    void* get_Fauna_AI_Def_To_Narrative_Context();
    int32_t& get_AggroToHeroCounter();
    _Script_Engine::Actor*& get_SpawnedCorpseScan();
    bool get_UseDynamicHealthBarHeight();
    void set_UseDynamicHealthBarHeight(bool value);
    void* get_HealthBarMaximumHeight();
    bool get_CanEvadeDuringReaction();
    void set_CanEvadeDuringReaction(bool value);
    bool get_NotKilledByKicks();
    void set_NotKilledByKicks(bool value);
    bool get_JustHitWhileSlowed();
    void set_JustHitWhileSlowed(bool value);
    bool get_HitBySaber();
    void set_HitBySaber(bool value);
    bool get_HitByStaff();
    void set_HitByStaff(bool value);
    bool get_HitByTwin();
    void set_HitByTwin(bool value);
    void* get_BossHealthBarName();
    void* get_EventHideZTargetHUD();
    void* get_EventUnhideZTargetHUD();
    _Script_AkAudio::AkAudioEvent*& get_Audio_OnLandInWater();
    bool get_IsBossMeter();
    void set_IsBossMeter(bool value);
    _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C*& get_BossHealthUIReference();
    bool get_GotKicked();
    void set_GotKicked(bool value);
    void* get_CustomSubtitleName();
    void* get_BossDefeatedText();
    bool get_SetPullHold();
    void set_SetPullHold(bool value);
    static _Script_CoreUObject::Class* static_class();
    void GetBossDefeatedText(void*& DefeatedText);
    void GetCustomSubtitleName(void*& CustomSubtitleName);
    void GetSpeakerTag(_Script_GameplayTags::GameplayTag& SpeakerTag);
    void GetAIMesh(_Script_Engine::SkeletalMeshComponent*& Mesh);
    void GetNameText(void*& AIName);
    void GetAggroToHeroCounter(int32_t& Counter);
    void BlockEnter(bool& bLock);
    bool AllowForcePullToKill();
    void ReInitializeHealthBar(bool BossMeter);
    void InitializeHealthBar(bool BossMeter);
    void AchievementTrackingKilled();
    void AchievementTrackingHit(_Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser);
    void CheckLowHealth();
    void ReduceBlockMeterOnForcePush();
    void TrySpawnCorpseScan();
    void UnsheatheWeapon(bool Unsheathe, void* WeaponAttachSocketR, void* WeaponAttachSocketL);
    void SetEnemyHealth();
    void Narrative_Health();
    void UnregisterAISpeaker();
    void SetUpSpeakerTag();
    bool ShouldPlayDeathAnimation();
    void UserConstructionScript();
    void HealthBarHeightTick__FinishedFunc();
    void HealthBarHeightTick__UpdateFunc();
    void ReceiveInstigatedAnyDamage(float Damage, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Actor* DamagedActor, _Script_Engine::Actor* DamageCauser);
    void OnRequestAlertToAmbientDialogue();
    void OnRequestAmbientToAlertDialogue(_Script_Engine::Actor* Source, void* AwarenessKind, void* ReactionRole);
    void OnAIAttackTargetChangedEvent_Event_0(_Script_RsGameTechRT::RsAIController* AIController);
    void OnKilledCharacter(_Script_RsGameTechRT::RsCharacter* Victim);
    void OnCombatStateChanged(_Script_RsGameTechRT::RsCharacter* Character, void* PreviousCombatState, void* NewCombatState);
    void OnForceTelekinesisStart(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void AIFinishedToken(_Script_RsGameTechRT::RsAIController* AIController);
    void OnForceTelekinesisOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnAIAwarenessChanged(_Script_RsGameTechRT::RsAIController* AIController, void* PreviousAwarenessState, void* NewAwarenessState);
    void OnAwarenessLevelChanged(_Script_RsGameTechRT::RsAIController* AIController, _Script_Engine::Actor* Actor, void* PreviousAwarenessLevel, void* NewAwarenessLevel);
    void OnForceTelekinesisEnd();
    void OnForceSlowRenewed(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityLevel);
    void OnForceSlowOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForceSlowEnd();
    void OnForcePullOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnCollisionWithBumper();
    void AIWasAlertedAffirm(_Script_RsGameTechRT::RsConversation* Conversation);
    void DoFaunaKilledAffirm(_Script_RsGameTechRT::RsConversation* Conversation);
    void ReceiveBeginPlay();
    void ReceiveAnyDamage(float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser);
    void SetContextualState(void* SetContextualState);
    void SetAI_Emotions(void* AI_Emotions, float EmotionTime);
    void EmotionTimerEnd();
    void OnForcePushStart(_Script_Engine::Actor* Instigator, _Script_CoreUObject::Vector& PushVector, void* PushHitType, _Script_CoreUObject::Vector& OriginalDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForcePushEnd();
    void OnForcePullStart(_Script_Engine::Actor* Instigator, float PullDuration, _Script_CoreUObject::Vector& OriginalPullDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForcePullEnd();
    void OnForceSlowStart(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void Died(_Script_Engine::Actor* DeadActor);
    void SetNormalEmotions();
    void PostDeath();
    void OnZTargeted();
    void OnZUntargeted();
    void OnAttackBlockedByOtherActor(_Script_RsGameTechRT::RsHitEvent& DefendedAttack, _Script_Engine::HitResult& HitSweep, _Script_RsGameTechRT::RsCharacter* OtherActor);
    void OnAttackEnded(_Script_Engine::AnimMontage* Montage, bool bInterrupted);
    void OnAttackCounteredByOtherActor(_Script_RsGameTechRT::RsHitEvent& DefendedAttack, _Script_Engine::HitResult& HitSweep, _Script_RsGameTechRT::RsCharacter* OtherActor);
    void DisplayHealthTemporarily();
    void ReceiveEndPlay(void* EndPlayReason);
    void OnCombatContactEvent(_Script_RsGameTechRT::RsCharacter* Attacker);
    void Event_Receive_Initialize_AI();
    void tryCleanupRevenge(_Script_Engine::Controller* Instigator);
    void InitializeRevenge();
    void AIThrowLightsaber(bool UseOtherSaber, bool ThrowLeftward, bool Suspend, bool TravelArc, float FlightTime, float HomingDuration, bool IgnoreParryReaction);
    void RecallLightsabers();
    void OnHeroAttackEnter();
    void OnAttackParriedByOtherActor(_Script_RsGameTechRT::RsHitEvent& DefendedAttack, _Script_Engine::HitResult& HitSweep, _Script_RsGameTechRT::RsCharacter* OtherActor);
    void UnsheatheWeaponCall(bool Unsheathe, void* WeaponAttachSocketR, void* WeaponAttachSocketL);
    void OnForcePushOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void ClearAttackHit();
    void HideIcon();
    void ShowIcon(void* InputName);
    void SetHealthBarVisibility(bool bNewVisibility);
    void ShowRevengeOnCharacter();
    void OnNotifyAISpawned(_Script_RsGameTechRT::RsAISpawner* Spawner);
    void OnBeforeKillingAIWhenEnteredWater();
    void InitializeBossBar();
    void ReceiveDestroyed();
    void RemoveBossBar();
    void SetBossBarVisibility(void* SetBossBarVisibility);
    void TempRemoveBossBar();
    void OnDifficultyChanged();
    void ResetInitBossBar();
    void OnForcePullEnterHold();
    void ForcePullHold_TriggerDeath();
    void AwardXP_FromPlayerAggroed_AI();
    void DoWoundedAffirm(_Script_RsGameTechRT::RsConversation* Conversation);
    void ExecuteUbergraph_BP_BaseAI(int32_t EntryPoint);
    void EventUnhideZTargetHUD__DelegateSignature();
    void EventHideZTargetHUD__DelegateSignature();
}; // Size: 0x2d18
#pragma pack(pop)
}
