#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_SwGame\SwRopeAttachmentComponent.hpp"
namespace _Game_Characters_Hero_Logic_BP_Hero {
struct BP_Hero_C;
}
namespace _Script_RsGameTechRT {
struct RsPlayerController;
}
namespace _Script_RsGameTechRT {
struct RsRopeComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Transform;
}
namespace _Game_WorldInteracts_Navigation_Rope_BP_BaseRope {
struct BP_BaseRope_C;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes {
#pragma pack(push, 1)
struct HC_Ropes_C : public _Script_SwGame::SwRopeAttachmentComponent {
    private: char pad_408[0x148]; public:
    void* get_UberGraphFrame();
    _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& get_BPHero();
    _Script_RsGameTechRT::RsPlayerController*& get_RsController();
    void* get_ropeAttachmentBone();
    float& get_attachStrength();
    float& get_swingJumpStrength();
    float& get_idleJumpStrength();
    float& get_ropeJumpApexGracePeriod();
    float& get_slowDownStrength();
    float& get_maxSwingStrengthSwinging();
    float& get_maxSwingStrengthSwingStarted();
    float& get_workingMaxSwingStrength();
    float& get_swingStrengthAcceleration();
    float& get_climbUpStrength();
    float& get_climbDownStrength();
    float& get_baseSwingAxisInterpolationSpeed();
    float& get_scaledSwingAxisInterpolationSpeed();
    float& get_baseSwingAlignmentStiffness();
    float& get_scaledSwingAlignmentStiffness();
    float& get_turnControllerStr();
    float& get_climbTurnSpeed();
    void* get_LVL_RopeAttached();
    float& get_minTimeToTurn();
    float& get_maxTurnAngle();
    float& get_idleVelocitySq();
    float& get_idleSwingPhase();
    float& get_idleSlowDownStrength();
    float& get_autoAlignmentStrengthSwinging();
    float& get_autoAlignmentStrengthClimbing();
    float& get_autoAlignmentStrengthTurningAround();
    float& get_autoAlignmentStrengthShortcutRope();
    float& get_grabGracePeriod();
    void* get_holdRopeMeshSocket();
    float& get_ropeHoldTransitionOffset();
    bool get_attachedToShortCutRope();
    void set_attachedToShortCutRope(bool value);
    bool get_isRightHandUp();
    void set_isRightHandUp(bool value);
    void* get_controllerDir();
    void* get_prevControllerDir();
    float& get_controllerStr();
    float& get_Dt();
    float& get_turnTimer();
    void* get_lastTurnControllerDir();
    void* get_currentTargetSwingAxis();
    void* get_interpolatedTargetSwingAxis();
    float& get_ropeJumpApexTimer();
    bool get_reversedSwingDirection();
    void set_reversedSwingDirection(bool value);
    bool get_wasSwingingForward();
    void set_wasSwingingForward(bool value);
    float& get_swingPhaseComplement();
    float& get_workingSwingStrength();
    void* get_masterAlignDirection();
    bool get_forcePullAttach();
    void set_forcePullAttach(bool value);
    float& get_cachedSwingPhaseSigned();
    float& get_cachedPrevSwingPhaseSigned();
    float& get_grabGracePeriodTimer();
    _Script_RsGameTechRT::RsRopeComponent*& get_RopeForInteractAttach();
    float& get_lastHandPosition();
    bool get_ropeHoldTransitioningHold();
    void set_ropeHoldTransitioningHold(bool value);
    void* get_PrevSlideState();
    bool get_bSlideRumbleActive();
    void set_bSlideRumbleActive(bool value);
    void* get_FeedbackTag();
    float& get_faceCameraDotThreshold();
    static _Script_CoreUObject::Class* static_class();
    bool IsRopeValidForAttachment0(_Script_RsGameTechRT::RsRopeComponent* Rope, bool bIsAutoAttachment);
    void ShouldUseCameraForAirStateAttachment(_Script_RsGameTechRT::RsRopeComponent* Rope, bool& UseCamera);
    void GetAirStateAttachmentForward(_Script_RsGameTechRT::RsRopeComponent* Rope, _Script_CoreUObject::Vector& Forward);
    void CheckRopeForcePullAttach();
    void CheckRopeAttach();
    void OnForcePullRopeAttach(_Script_RsGameTechRT::RsRopeComponent* Rope);
    void GetUpdatedRopeHoldPositioning(bool Absolute, float& Positioning);
    void ShouldFaceAttachedRopeOnGround(bool& Result);
    void GetRopeHoldSocketTransform(_Script_CoreUObject::Transform& Transform);
    void OnRopeHoldTransitionBlendingOut(_Script_Engine::AnimMontage* Montage, bool interrupted);
    void UpdateRopeHoldPositioning();
    void GetRopeHoldPositioning(bool Absolute, float& Positioning);
    void StopSwingSounds();
    void GetFlatCameraForward(_Script_CoreUObject::Vector& Forward);
    _Script_CoreUObject::Vector GetMovementInputDirection0();
    void UpdateRopeForInteractAttach(_Script_RsGameTechRT::RsRopeComponent* Rope, _Script_CoreUObject::Vector InteractLocation);
    void Action_Interact_AttachToRope();
    void CanPerformAction_Interact(void* ActionName, bool& CanInteract);
    void CalculateTurnAngle_NoCameraBoundary(float TurnAmount, float& TurnAngle);
    void CalculateCameraFocusForStrafe(_Script_CoreUObject::Vector Eye, _Script_CoreUObject::Vector Target, float MinVerticalAngle, float MaxVerticalAngle, bool Flip_, _Script_CoreUObject::Vector& FocusDir);
    _Script_CoreUObject::Rotator GetCameraRotation0();
    void UpdateCamera(bool ForceUpdate);
    void UpdateSwingSounds();
    void AttachToRopeBP(_Script_RsGameTechRT::RsRopeComponent* RsRopeComponent, bool& Attached);
    void RopeGrabInput(void* ActionName, bool& Attached);
    void IsClimbInputPressed(bool& Pressed);
    bool IsRopeAttachAllowed0();
    void ApplyRopeDrivenMotionTweaks();
    void CheckClimbPosition(float ClimbDelta, bool& Safe);
    void IsSwinging(bool& IsSwinging);
    void WithinJumpApexGracePeriod(bool& withinGracePeriod);
    void CalculateAlignDirection(_Script_CoreUObject::Vector swingDir, float minDot, _Script_CoreUObject::Vector& alignDir);
    void DebugRenderSwingAxis(bool darwCurrentSwingAxis, bool drawTargetSwingAxis, bool drawInterpolatedSwingAxis, bool drawCharacterLocation);
    void ApplyTurning(float TurnAmount, float TurnStopOffset, bool& TurnPrevented);
    void CalculateTurnAngle_CameraBoundary(float TurnAmount, float TurnStopOffset, float& TurnAngle);
    void CalculateSwingAxis(_Script_CoreUObject::Vector swingDir, _Script_CoreUObject::Vector CurrentSwingAxis, float maxTurnAngle, _Script_CoreUObject::Vector& SwingAxis);
    void ApplyJump();
    void GetSwingPhaseJumpMultipliers(float SwingPhase, float& JumpStrengthMultiplier, float& JumpPopMultiplier, float& VelocityMultiplier);
    void IsForcePullingRope(_Script_RsGameTechRT::RsRopeComponent* Rope, bool& Result);
    void CleanupRopeMotion();
    void OnHeroReduceHealth(float DamageTaken);
    void BlueprintOnRopeAttach(_Script_RsGameTechRT::RsRopeComponent* Rope);
    void BlueprintOnRopeDetach(_Script_RsGameTechRT::RsRopeComponent* Rope);
    void BlueprintOnStateChanged0(void* OldState, void* NewState);
    void OnRopeAirStateBegin(_Game_WorldInteracts_Navigation_Rope_BP_BaseRope::BP_BaseRope_C* RopeActor);
    void RopeJump();
    void ReceiveTick(float DeltaSeconds);
    void RopeCancel();
    void Stamina_Meter_Empty(void* ResponsibleStaminaName, float TimeUntilStaminaRegen);
    void OnRopeGroundStateBegin(_Game_WorldInteracts_Navigation_Rope_BP_BaseRope::BP_BaseRope_C* Rope);
    void OnRopeGroundStateEnd(_Game_WorldInteracts_Navigation_Rope_BP_BaseRope::BP_BaseRope_C* Rope);
    void OnResetCamera();
    void ReceiveBeginPlay();
    void Stop_Slide_Rumble();
    void Check_Slide_Rumble();
    void ExecuteUbergraph_HC_Ropes(int32_t EntryPoint);
    void LVL_RopeAttached__DelegateSignature(_Script_RsGameTechRT::RsRopeComponent* Rope_Component);
}; // Size: 0x550
#pragma pack(pop)
}
