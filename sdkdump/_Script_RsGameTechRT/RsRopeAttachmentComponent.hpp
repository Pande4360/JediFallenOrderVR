#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "RsHeroComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_RsGameTechRT {
struct RsRopeComponent;
}
namespace _Script_RsGameTechRT {
struct RsDetachFromRopeParams;
}
namespace _Script_RsGameTechRT {
struct RsAttachToRopeParams;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsRopeAttachmentComponent : public RsHeroComponent {
    private: char pad_180[0x1a8]; public:
    void* get_AutoAlignMode();
    void* get_AutoAlignTargetDirection();
    float& get_AutoAlignmentStrength();
    float& get_CurrentAngleToTargetAlign();
    float& get_SwingSlowdownRangePercentage();
    float& get_SwingSlowdownStrength();
    float& get_SwingAlignmentStiffness();
    float& get_SwingAlignmentDamping();
    void* get_RopeSegmentAttachmentAutoUpdateMode();
    static _Script_CoreUObject::Class* static_class();
    void UpdateRopeHandAttachment(int32_t handAttachment);
    void UpdateLengthRopeHandAttachment(int32_t handAttachment);
    void UpdateClosestRopeHandAttachment(int32_t handAttachment);
    void UpdateAllRopeHandAttachments();
    void UpdateAllLengthRopeHandAttachments();
    void UpdateAllClosestRopeHandAttachments();
    void SetTwistAngleDegrees(float TwistAngle);
    void SetSwingAxis(_Script_CoreUObject::Vector SwingAxis);
    void SetRopeAttachmentPoint(_Script_CoreUObject::Vector localPt, void* Bone);
    void SetRopeAttachmentLength(float Length);
    void ResetTwistAngle();
    bool RemoveRopeHandAttachment(int32_t handAttachment);
    void OnNavStateChanged(void* NewState, void* PrevState);
    void OnCharacterInterrupted(_Script_RsGameTechRT::RsCharacter* Character);
    bool IsSwingingForward();
    bool IsSwingingBackward();
    bool IsSwingIdle();
    bool IsAttachedToRope();
    float GetTwistAngleDegrees();
    float GetSwingPhaseSigned();
    float GetSwingPhaseAbsoluteSigned();
    float GetSwingPhaseAbsolute();
    float GetSwingPhase();
    _Script_CoreUObject::Vector GetSwingDirection();
    _Script_CoreUObject::Vector GetSwingAxis();
    float GetRopeIdleSwingVelocity();
    float GetRopeIdleSwingPhase();
    float GetRopeAttachmentProgression();
    _Script_CoreUObject::Vector GetRopeAttachmentPointWorld();
    _Script_CoreUObject::Vector GetRopeAttachmentPointLocal();
    float GetRopeAttachmentLength();
    _Script_RsGameTechRT::RsRopeComponent* GetAttachedRope();
    void DetachFromRope(_Script_RsGameTechRT::RsDetachFromRopeParams& Params);
    void ClearRopeHandAttachments();
    _Script_CoreUObject::Vector CalculateSwingImpulse(_Script_CoreUObject::Vector swingDir, float swingStrength, float swingDirectionInfluence, float velocityDirectionInfluence);
    _Script_CoreUObject::Vector CalculateSwingAxisForAttachedRope(_Script_CoreUObject::Vector SwingDirection);
    _Script_CoreUObject::Vector CalculateSlowDownImpulse(float slowDownStrength);
    float CalculateSlowDownFactor(_Script_CoreUObject::Vector swingDir, float minVelocityThreshold, float slowdownOffset);
    float CalculateRopeAttachmentLengthAlongAxis(_Script_RsGameTechRT::RsRopeComponent* Rope, _Script_CoreUObject::Vector Axis, _Script_CoreUObject::Vector localPt, void* Bone);
    float CalculateRopeAttachmentLength(_Script_RsGameTechRT::RsRopeComponent* Rope, _Script_CoreUObject::Vector localPt, void* Bone);
    _Script_CoreUObject::Vector CalculateReleaseImpulse(_Script_CoreUObject::Vector releaseDir, float releaseStrength, float releaseDirectionInfluence, float velocityDirectionInfluence, float upDirectionInfluence, float forwardDirectionInfluence, bool alignForwardWithSwinging);
    void BlueprintOnRopeDetach(_Script_RsGameTechRT::RsRopeComponent* Rope);
    void BlueprintOnRopeAttach(_Script_RsGameTechRT::RsRopeComponent* Rope);
    bool AttachToRope(_Script_RsGameTechRT::RsAttachToRopeParams& Params);
    void ApplyTwistAngleDeltaDegrees(float twistAngleDelta);
    void ApplySwingImpulse(_Script_CoreUObject::Vector swingDir, float swingStrength, float swingDirectionInfluence, float velocityDirectionInfluence, bool SetVelocity);
    void ApplySlowDownImpulse(float slowDownStrength);
    void ApplyReleaseImpulse(_Script_CoreUObject::Vector releaseDir, float releaseStrength, float releaseDirectionInfluence, float velocityDirectionInfluence, float upDirectionInfluence, float forwardDirectionInfluence, bool alignForwardWithSwinging, bool SetVelocity);
    int32_t AddRopeHandAttachmentAtLength(_Script_RsGameTechRT::RsRopeComponent* Rope, float attachmentLength, _Script_CoreUObject::Vector localPt, void* Bone);
    int32_t AddRopeHandAttachment(_Script_RsGameTechRT::RsRopeComponent* Rope, int32_t ropeParticleIdx, _Script_CoreUObject::Vector localPt, void* Bone);
    int32_t AddClosestRopeHandAttachment(_Script_RsGameTechRT::RsRopeComponent* Rope, _Script_CoreUObject::Vector localPt, void* Bone);
}; // Size: 0x328
#pragma pack(pop)
}
