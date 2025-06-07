#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsHeroComponent.hpp"
namespace _Game_Characters_Hero_Logic_BP_Hero {
struct BP_Hero_C;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Characters_Hero_Logic_BP_SwPlayerState {
struct BP_SwPlayerState_C;
}
namespace _Game_Characters__Shared_Logic_BP_BaseAI {
struct BP_BaseAI_C;
}
namespace _Script_CoreUObject {
struct Vector2D;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_Engine {
struct AnimInstance;
}
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_RsGameTechRT {
struct RsSyncDefinition;
}
namespace _Script_SwGame {
struct SwLightsaberMovementComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct AnimationAsset;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Game_Characters_Hero_Logic_Components_Combat_HC_Sword {
#pragma pack(push, 1)
struct HC_Sword_C : public _Script_RsGameTechRT::RsHeroComponent {
    private: char pad_180[0x1d0]; public:
    void* get_UberGraphFrame();
    _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& get_BP_Hero_REF();
    _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C*& get_SwPlayerState();
    bool get_allowContextualAttack();
    void set_allowContextualAttack(bool value);
    _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C*& get_contextualActor();
    bool get_actorHit();
    void set_actorHit(bool value);
    _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C*& get_TraceTarget();
    bool get_InAirAttack();
    void set_InAirAttack(bool value);
    _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C*& get_LastTraceTarget();
    _Script_Engine::Actor*& get_forcePullTarget();
    void* get_HeroAttackEnter();
    void* get_CurrentAttackSequence();
    void* get_LastOverrideAttack();
    _Script_Engine::AnimInstance*& get_Hero_Anim_Ref();
    int32_t& get_lastSyncKillSelection();
    _Script_Engine::DataTable*& get_CurrentAttackSequenceTable();
    _Script_RsGameTechRT::RsCharacter*& get_DeathFromAboveTarget();
    _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C*& get_SyncKillTarget();
    _Script_RsGameTechRT::RsSyncDefinition*& get_SyncDefinition();
    void* get_HeroSyncAttackTriggered();
    float& get_CalFinisherCommentChance();
    bool get_DEBUG_DeactivateAllEffects();
    void set_DEBUG_DeactivateAllEffects(bool value);
    float& get_DFA_IconStart();
    float& get_DFA_AwarenessDelay();
    bool get_allowSequenceReset();
    void set_allowSequenceReset(bool value);
    bool get_LeftTransition();
    void set_LeftTransition(bool value);
    _Script_SwGame::SwLightsaberMovementComponent*& get_LightsaberMovement();
    void* get_SavedLightsaberType();
    void* get_HeroTwinAttackTriggered();
    void* get_HeroBasicAttack();
    void* get_LVL_HeroUnarmedFidget();
    bool get_EarlyDelayInput();
    void set_EarlyDelayInput(bool value);
    bool get_IsFidgeting();
    void set_IsFidgeting(bool value);
    int32_t& get_StaffDelays();
    float& get_FlipTargetHeight();
    void* get_TwinCatchTimer();
    static _Script_CoreUObject::Class* static_class();
    void FocusAttackAirFunc();
    void CleanUpThrow();
    void GetCatchVariables(void* LightsaberType, _Script_Engine::AnimationAsset*& Animation, void*& Slot);
    void GetThrowVariables(void*& ThrowDescription, _Script_Engine::AnimationAsset*& Animation, void*& SlotName);
    void AttackDirectionalFinisher(void* Default, _Script_RsGameTechRT::RsCharacter* TargetCharacter);
    void CheckAttackOverride(_Script_Engine::DataTable*& OverrideTable, void*& OverrideAttack);
    void AttemptOverrideAttack(bool& Override);
    void AttemptSyncKill(float Chance, float ChanceLastEnemy, bool& SyncTriggered);
    void Action_CanKickInteract(void* ActionName, bool& CanKickInteract);
    void SetAttackSequenceTable(void* Ligtsaber_Type);
    void ShouldSyncKill(float Chance, float Chance_LastEnemy, bool& ShouldSync);
    void GetCombatTargetDistance(float DistanceIfNoTarget, float& Distance, _Script_CoreUObject::Vector2D& Vector);
    void RunAttackSequence(void* NextAttackOverride);
    void SetForcePushSequence(_Script_Engine::AnimationAsset*& OverrideAnim);
    void SetAttackSequence(void* StateName, _Script_Engine::DataTable* SequenceTable);
    void SetDamageValue(void* DamageType, void* DamageValues, void* AttackType);
    void UseTraceCollision();
    void ReceiveBeginPlay();
    void AttackInput();
    void OnBlocked(_Script_Engine::Actor* OtherActor);
    void ResetBuffer();
    void LightsberBlocked(_Script_Engine::Actor* OtherActor);
    void ClearTraceTarget();
    void ReceiveTick(float DeltaSeconds);
    void Nav_State_Changed(void* NewState, void* PrevState);
    void HeroSyncAttackTriggered_Event();
    void Reset_Attack_Sequence();
    void Unarmed_Fidget();
    void FidgetEnded(_Script_Engine::AnimMontage* Montage, bool bInterrupted);
    void Clear_Death_From_Above_Target();
    void Death_From_Above();
    void Check_Death_From_Above_Target();
    void AirAttack();
    void Track_Staff_Delays();
    void DelayAttack();
    void BasicAttackExecute();
    void BasicAttackStart();
    void ParryAttack();
    void SwingRotationHelp();
    void ForcePullAttack();
    void WallRunAttack();
    void SlideAttack();
    void SprintAttack();
    void BalanceBeamAttack();
    void After_Catch();
    void Catch_Lightsaber();
    void Focus_Attack_Air();
    void Leap_Flip();
    void StartLeap();
    void Heavy_Attack();
    void Spin_Attack();
    void Lightsaber_Throw();
    void Leap_Attack();
    void FocusAttack();
    void Switch_Attack();
    void Roll_Attack();
    void Evade_Attack();
    void Staff_Twin_Attack();
    void Saber_Twin_Attack();
    void ExecuteUbergraph_HC_Sword(int32_t EntryPoint);
    void LVL_HeroUnarmedFidget__DelegateSignature();
    void HeroBasicAttack__DelegateSignature();
    void HeroTwinAttackTriggered__DelegateSignature();
    void HeroSyncAttackTriggered__DelegateSignature();
    void HeroAttackEnter__DelegateSignature();
}; // Size: 0x350
#pragma pack(pop)
}
