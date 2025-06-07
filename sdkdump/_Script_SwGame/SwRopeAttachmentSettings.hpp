#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_RsGameTechRT {
struct RsHeroStateModifierDefinition;
}
namespace _Script_Engine {
struct AnimationAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsPhysicalAnimationProfile;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwRopeAttachmentSettings : public _Script_Engine::DataAsset {
    private: char pad_30[0x290]; public:
    void* get_DetectionCones();
    bool get_bDebugDrawAllDetection();
    void set_bDebugDrawAllDetection(bool value);
    void* get_AttachmentBone();
    void* get_DetachRopeOnNavStateChange();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_RopeStrafeModifier();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_RopeStrafeFaceRopeModifier();
    float& get_StrafingMinAttachmentLength();
    float& get_StrafingMaxAttachmentLength();
    float& get_StrafingConstraintStiffness();
    float& get_StrafingConstraintDamping();
    float& get_StrafingAutoDetachOverRopeLength();
    float& get_StrafingToSwingClearanceSweepLength();
    float& get_StrafingToSwingMinVerticalVelocity();
    float& get_StrafingToSwingMaxVerticalVelocity();
    float& get_ReturnToStrafingMinElapsedTime();
    bool get_DebugDrawStrafingClearanceSweeps();
    void set_DebugDrawStrafingClearanceSweeps(bool value);
    float& get_IdleVelocityThreshold();
    float& get_IdleSwingPhaseThreshold();
    _Script_Engine::AnimationAsset*& get_StartSwingForwardLowAnimation();
    _Script_Engine::AnimationAsset*& get_StartSwingForwardHighAnimation();
    _Script_Engine::AnimationAsset*& get_StartSwingBackwardLowAnimation();
    _Script_Engine::AnimationAsset*& get_StartSwingBackwardHighAnimation();
    float& get_StartSwingBlendInTime();
    float& get_StartSwingBlendOutTime();
    float& get_StartSwingHighSwingPhaseThreshold();
    float& get_StartSwingMinimumSignedSwingPhase();
    float& get_StartSwingForwardImpulse();
    float& get_StartSwingBackwardImpulse();
    float& get_TurnAroundBeginDetectionAngle();
    float& get_TurnAroundEndDetectionAngle();
    _Script_Engine::AnimationAsset*& get_TurnAroundLeftToRightAnimation();
    _Script_Engine::AnimationAsset*& get_TurnAroundRightToLeftAnimation();
    float& get_TurnAroundAnimBlendInTime();
    float& get_TurnAroundAnimBlendOutTime();
    bool get_bEndTurnAroundOnAnimationEnd();
    void set_bEndTurnAroundOnAnimationEnd(bool value);
    bool get_bDriveTurnAroundWithRootMotion();
    void set_bDriveTurnAroundWithRootMotion(bool value);
    bool get_bEnableAnticipateAttachment();
    void set_bEnableAnticipateAttachment(bool value);
    bool get_bEnableAnticipateAttachHandAttachment();
    void set_bEnableAnticipateAttachHandAttachment(bool value);
    void* get_DontAnticipateAttachTags();
    float& get_AnticipateAttachLookAheadTime();
    int32_t& get_AnticipateAttachLookAheadSamples();
    float& get_AnticipateAttachLookAheadRadius();
    _Script_Engine::AnimationAsset*& get_AnticipateAirAttachAnimation();
    float& get_AnticipateAirAttachAnimBlendInTime();
    float& get_AnticipateAirAttachAnimBlendOutTime();
    _Script_Engine::AnimationAsset*& get_AnticipateGroundAttachAnimation();
    float& get_AnticipateGroundAttachAnimBlendInTime();
    float& get_AnticipateGroundAttachAnimBlendOutTime();
    _Script_Engine::AnimationAsset*& get_AttachAnimation();
    float& get_AttachAnimBlendInTime();
    float& get_AttachAnimBlendOutTime();
    float& get_SwingAttachmentSlideTime();
    float& get_SwingAttachmentSlideStopDistance();
    float& get_SwingAttachmentStiffenTime();
    void* get_SwingHipAttachmentBone();
    _Script_Engine::AnimationAsset*& get_JumpOffForwardLowAnimation();
    float& get_JumpOffForwardLowAnimBlendInTime();
    float& get_JumpOffForwardLowAnimBlendOutTime();
    _Script_Engine::AnimationAsset*& get_JumpOffForwardHighAnimation();
    float& get_JumpOffForwardHighAnimBlendInTime();
    float& get_JumpOffForwardHighAnimBlendOutTime();
    float& get_JumpOffForwardHighSwingPhaseThreshold();
    _Script_Engine::AnimationAsset*& get_JumpOffBackwardLowRightAnimation();
    _Script_Engine::AnimationAsset*& get_JumpOffBackwardLowLeftAnimation();
    float& get_JumpOffBackwardLowAnimBlendInTime();
    float& get_JumpOffBackwardLowAnimBlendOutTime();
    _Script_Engine::AnimationAsset*& get_JumpOffBackwardHighRightAnimation();
    _Script_Engine::AnimationAsset*& get_JumpOffBackwardHighLeftAnimation();
    float& get_JumpOffBackwardHighAnimBlendInTime();
    float& get_JumpOffBackwardHighAnimBlendOutTime();
    float& get_JumpOffBackwardHighSwingPhaseThreshold();
    _Script_Engine::AnimationAsset*& get_DetachAnimation();
    float& get_DetachAnimBlendInTime();
    float& get_DetachAnimBlendOutTime();
    bool get_bEnableSwingHeadLook();
    void set_bEnableSwingHeadLook(bool value);
    float& get_SwingHeadLookMaxAngle();
    float& get_SwingHeadLookTime();
    bool get_bEnableSwingImpactBracingSweeps();
    void set_bEnableSwingImpactBracingSweeps(bool value);
    float& get_SwingImpactBracingMinRequiredSpeed();
    float& get_SwingImpactBracingLookAheadTime();
    float& get_SwingImpactBracingSweepRadius();
    bool get_bInterpolateSwingImpactBracingWeights();
    void set_bInterpolateSwingImpactBracingWeights(bool value);
    float& get_SwingImpactBracingFoundImpactInterpolationSpeed();
    float& get_SwingImpactBracingLostImpactInterpolationSpeed();
    bool get_bPerformBackwardSwingImpactBracingSweeps();
    void set_bPerformBackwardSwingImpactBracingSweeps(bool value);
    bool get_bDebugDrawSwingImpactBracingSweeps();
    void set_bDebugDrawSwingImpactBracingSweeps(bool value);
    bool get_bDebugPrintSwingImpactBracingWeights();
    void set_bDebugPrintSwingImpactBracingWeights(bool value);
    float& get_ClimbAscendDescendInputThreshold();
    float& get_ClimbTurnInputThreshold();
    float& get_ClimbSpeed();
    float& get_ClimbMinAttachmentLength();
    float& get_ClimbMaxAttachmentLength();
    float& get_ClimbSafetySweepLength();
    bool get_RequireInputForClimbing();
    void set_RequireInputForClimbing(bool value);
    float& get_ClimbAttachmentStiffenTime();
    _Script_Engine::AnimationAsset*& get_ClimbAscendLeftHandAnimation();
    _Script_Engine::AnimationAsset*& get_ClimbAscendRightHandAnimation();
    _Script_Engine::AnimationAsset*& get_ClimbDescendLeftHandAnimation();
    _Script_Engine::AnimationAsset*& get_ClimbDescendRightHandAnimation();
    _Script_Engine::AnimationAsset*& get_ClimbTurnLeftAnimation();
    _Script_Engine::AnimationAsset*& get_ClimbTurnRightAnimation();
    _Script_Engine::AnimationAsset*& get_ClimbJumpOffForwardAnimation();
    float& get_ClimbBlendInTime();
    float& get_ClimbBlendOutTime();
    bool get_DebugDrawClimbSafetySweeps();
    void set_DebugDrawClimbSafetySweeps(bool value);
    void* get_LeftHandBone();
    void* get_RightHandBone();
    float& get_HandToRopeMinAttachDistance();
    float& get_HandToRopeAttachIKBlendTime();
    float& get_HandReadjustmentIKBlendTime();
    float& get_HandClimbPositionSwitchThreshold();
    float& get_HandAttractParticleSpeed();
    float& get_HandAutoAttachmentTimeout();
    bool get_bEnableHandAutoReattach();
    void set_bEnableHandAutoReattach(bool value);
    bool get_bEnableHandAutoDetach();
    void set_bEnableHandAutoDetach(bool value);
    void* get_IdleHandAttachmentAutoAupdateMode();
    void* get_ClimbingHandAttachmentAutoAupdateMode();
    void* get_SwingingHandAttachmentAutoAupdateMode();
    _Script_RsGameTechRT::RsPhysicalAnimationProfile*& get_PhysicalAnimationProfileHanging();
    _Script_RsGameTechRT::RsPhysicalAnimationProfile*& get_PhysicalAnimationProfileClimbing();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2c0
#pragma pack(pop)
}
