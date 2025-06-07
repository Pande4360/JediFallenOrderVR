#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "RsCharacterNavigationComponent.hpp"
namespace _Script_RsGameTechRT {
struct RsActorLedgeSettings;
}
namespace _Script_RsTechRT {
struct RsJSONTweaksBook;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsLedgeSurveyFrameInfo;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_Engine {
struct DamageType;
}
namespace _Script_RsGameTechRT {
struct RsDisabledConstrainedJumpDirections;
}
namespace _Script_RsGameTechRT {
struct RsCharacterAnimationData;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsActorLedgeComponent : public RsCharacterNavigationComponent {
    private: char pad_188[0x4838]; public:
    void* get_OnAttachToLedge();
    void* get_OnEnterLedge();
    void* get_OnPullupOverLedge();
    void* get_OnPullupCommitted();
    _Script_RsGameTechRT::RsActorLedgeSettings*& get_m_settings();
    void* get_TweakFile();
    _Script_RsTechRT::RsJSONTweaksBook*& get_Tweaks();
    bool get_m_hasEnteredIdle();
    void set_m_hasEnteredIdle(bool value);
    void* get_m_disabledJumpDirections();
    static _Script_CoreUObject::Class* static_class();
    bool ValidateMantleEntry();
    bool ValidateForcePullEntry();
    void UpdateReachState(void* reachMode, float ReachAngle);
    void UpdateForcePullup(bool forcePullup);
    void UnlockPadInput();
    void TriggerQueuedShimmyJump();
    void TriggerQueuedShimmy(float shimmyDuration);
    void TriggerQueuedCinematicNavigation();
    void StopShimmy();
    void StopPullup();
    void StartShimmyWithDuration(void* Target, float Duration);
    void StartPullup();
    void StartHorizontalShimmy();
    bool ShouldUseStamina();
    bool ShouldUseGripForEntry(void* EntryType);
    bool ShouldUseGrip();
    bool ShouldOnlyAllowStraightPullup();
    void SetQueuedShimmyAnimation(_Script_Engine::AnimMontage* Montage);
    void SetMode(void* ledgeMode);
    void SetDisabledJumpDirections(_Script_CoreUObject::Object* Owner, _Script_RsGameTechRT::RsDisabledConstrainedJumpDirections& disabledJumpDirections);
    void ResetDisabledJumpDirections(_Script_CoreUObject::Object* Owner);
    void ReleaseLedge();
    void ReenableFallWindowTimer();
    bool QueueShimmy(void* Target);
    bool QueueJumpOff(void* JumpDirection);
    void QueueCinematicNavigation(_Script_RsGameTechRT::RsCharacterAnimationData& AnimData, bool waitForTrigger, bool overrideEntry, void*& cinematicNavigationDelegate, float Timeout, void* Tag);
    bool PadInputIsLocked();
    void OnTransitionOutComplete();
    void OnShimmyTargetReached(void* Target);
    void OnQueuedShimmyMontageEnded(_Script_Engine::AnimMontage* Montage, bool interrupted);
    void OnQueuedJumpOffMontageEnded(_Script_Engine::AnimMontage* Montage, bool interrupted);
    void OnModeChanged(void* previousMode, void* newMode);
    void OnLedgeTick(float Dt);
    void OnLedgeReleased();
    void OnLedgePullupComplete();
    void OnLedgePullupCommitted();
    void OnLedgeEntryFinished();
    void OnHeroStateChanged(void* NewState, void* PrevState);
    void OnFoundLedge(_Script_RsGameTechRT::RsLedgeSurveyFrameInfo& frameSurveyInfo);
    void OnCharacterTakeAnyDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser);
    void OnCharacterInterrupted(_Script_RsGameTechRT::RsCharacter* InterruptedCharacter);
    void OnBeginLedgeIdle();
    bool MantleLedge();
    void LockPadInput();
    bool IsShimmyJumping();
    bool IsInNavTransition();
    bool IsInMode(void* ledgeMode);
    bool IsInCinematicNavigation();
    bool IsHanging();
    bool IsCurrentShimmyInterruptible();
    bool IsAttached();
    bool HasWallPressToPullupOnto();
    bool HasStamina();
    bool GripIsConfirm();
    float GetReachAngle(void* reachMode);
    float GetPlayerControllerMagnitude();
    _Script_CoreUObject::Vector GetPlayerControllerDirectionWorld();
    _Script_CoreUObject::Vector2D GetPlayerControllerDirectionLocal();
    void* GetMode();
    _Script_CoreUObject::Vector GetLockedLedgeTopNormal();
    _Script_CoreUObject::Vector GetLockedLedgeFrontNormal();
    _Script_CoreUObject::Vector GetLockedLedgeAxis();
    float GetGripTimerDuration();
    bool GetForcePullup();
    void* GetCurrentShimmyTarget();
    void* GetCurrentLedgeEntryType();
    void* GetCurrentAttachedComponents();
    float GetAttachedLedgeWidth();
    float GetAttachedLedgeSlope();
    float GetAttachedLedgeHeight();
    void GetActiveLedgeRelativeDisplacementAndVelocity(_Script_CoreUObject::Vector& displacement, _Script_CoreUObject::Vector& Velocity);
    void ForceReleaseLedge();
    void ExitCinematicNavigationMode();
    void EnterCinematicNavigationMode(bool overrideEntry, void*& cinematicNavigationDelegate, void* Tag);
    bool DoReachSurvey(void* Direction);
    void DoQueuedJumpOff();
    bool DoMantleSurvey();
    bool DoLeapSurvey(void* Direction, float& distanceToTargetLedge);
    bool DoForcePullLedgeEntry();
    bool DoForcePullEntrySurvey();
    void* DoAdjacentShimmySurveys(void* Direction);
    void DisableLedgeForReattachment();
    void DisableFallWindowTimer();
    void DetermineValidLedgeEntryTypes(bool& canGrab, bool& canDoKneeEntry, bool& movingIntoLedge, bool& willPassOverLedge);
    void DelayedReleaseFromOutOfStamina();
    void ClearPendingCinematicNavigation();
    bool CheckAndTriggerTransitions(void* frameInputDirection);
    bool CanRelease();
    bool CanPullup(float pullupAngle);
    bool CanContinueLedgeGrab(float maxPitch, float maxRoll);
    bool AttachToActiveLedge(void* EntryType);
}; // Size: 0x49c0
#pragma pack(pop)
}
