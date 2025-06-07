#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "RsCharacterNavigationComponent.hpp"
#include "RsConstrainedJumpWeights.hpp"
namespace _Script_RsGameTechRT {
struct RsClimbSettings;
}
namespace _Script_Engine {
struct Controller;
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
struct RsDisabledConstrainedJumpDirections;
}
namespace _Script_RsGameTechRT {
struct RsCharacterAnimationData;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_Engine {
struct DamageType;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsClimbComponent : public RsCharacterNavigationComponent {
    private: char pad_188[0x3938]; public:
    void* get_OnEnterClimb();
    _Script_RsGameTechRT::RsClimbSettings*& get_m_settings();
    void* get_TweakFile();
    _Script_RsTechRT::RsJSONTweaksBook*& get_Tweaks();
    void* get_m_disabledJumpDirections();
    static _Script_CoreUObject::Class* static_class();
    void UpdateReachState(bool shouldReach);
    bool TryRetargetingClimbSameWallMovement();
    bool TryAttachToClimbAtTransform(_Script_CoreUObject::Transform Transform, bool AlignWithActor, bool drawDebug, float debugLifetime);
    void TriggerQueuedClimbing(float climbDuration);
    void TriggerQueuedCinematicNavigation();
    void StopClimbing();
    void StartTryingToGrab();
    void StartDurationBasedClimbing(float Duration);
    void StartClimbing();
    void SkipGripInputForNextAttachment(float Timeout);
    void SkipEntryAnimationForNextAttach(float Timeout);
    void ShowGripInputUI();
    bool ShouldUseStamina();
    bool ShouldUseGripForEntry(void* EntryType);
    bool ShouldUseGrip();
    bool ShouldUpdateGrabGripUI();
    void SetMovementRetargetingAllowed(bool allowed);
    void SetMovementCancelingAllowed(bool allowed);
    void SetDisabledJumpDirections(_Script_CoreUObject::Object* Owner, _Script_RsGameTechRT::RsDisabledConstrainedJumpDirections& disabledJumpDirections);
    void ResetDisabledJumpDirections(_Script_CoreUObject::Object* Owner);
    void ReleaseClimb();
    void ReenableRotationInJumpAnimations();
    bool QueueJumpOff(_Script_RsGameTechRT::RsConstrainedJumpWeights jumpWeights);
    bool QueueClimbing();
    void QueueCinematicNavigation(_Script_RsGameTechRT::RsCharacterAnimationData& AnimData, bool waitForTrigger, void*& cinematicNavigationDelegate, float Timeout, void* Tag);
    void OnSkipGripInputTimedOut();
    void OnSkipEntryInputTimedOut();
    void OnQueuedJumpTimedOut();
    void OnQueuedJumpMontageEnded(_Script_Engine::AnimMontage* Montage, bool interrupted);
    void OnQueuedClimbingTimedOut();
    void OnClimbStateChanged(void* previousMode, void* newMode);
    void OnClimbingTargetReached();
    bool OnClimbGrabInputPressed();
    void OnClimbEntryFinished();
    void OnCharacterTakeAnyDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser);
    void OnCharacterInterrupted(_Script_RsGameTechRT::RsCharacter* InterruptedCharacter);
    void OnBeginPivotAnimation();
    void OnAttached();
    bool IsPlayerTryingToClimb();
    bool IsInState(void* climbState);
    bool IsInNavTransition();
    bool IsInCinematicNavigation();
    bool IsCurrentClimbMovementCancelable();
    bool IsCurrentAttachmentHanging();
    bool IsClimbMoving();
    bool IsCinematicNavigationQueued();
    bool IsAttached();
    void HideGripInputUI();
    bool HasStamina();
    bool HasLedgeInDirection(_Script_CoreUObject::Vector2D padInput);
    bool HasClimbingClaws();
    bool GripIsConfirm();
    float GetPlayerControllerMagnitude();
    _Script_CoreUObject::Vector GetPlayerControllerDirectionWorld();
    _Script_CoreUObject::Vector2D GetPlayerControllerDirectionLocal();
    _Script_RsGameTechRT::RsConstrainedJumpWeights GetJumpWeightsFromPadInput(_Script_CoreUObject::Vector2D padInput);
    void* GetJumpDirectionFromPadInput(_Script_CoreUObject::Vector2D padInput);
    float GetGripTimerDuration();
    void* GetCurrentState();
    void* GetCurrentEntryType();
    void* GetCurrentAttachedComponents();
    float GetClimbTransitionAngle();
    _Script_RsGameTechRT::RsClimbSettings* GetClimbSettings();
    void ForceReleaseClimb();
    void ExitCinematicNavigationMode();
    void EnterCinematicNavigationMode(void*& cinematicNavigationDelegate, void* Tag, float Timeout);
    void DoQueuedJump();
    void* DoClimbMovementSurvey();
    void DisableRotationInJumpAnimations();
    void DelayedReleaseFromOutOfStamina();
    void ClimbFallTimerComplete();
    void ClimbEntryTimerFinished();
    void ClimbAttachedTick(float DeltaTime);
    void ClearPendingCinematicNavigation();
    bool CanRelease();
    bool CanReach(_Script_CoreUObject::Vector2D padInput);
    bool AllowForcePullEntry();
}; // Size: 0x3ac0
#pragma pack(pop)
}
