#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_RsGameTechRT\RsRopeAttachmentComponent.hpp"
namespace _Script_SwGame {
struct SwRopeAttachmentSettings;
}
namespace _Script_RsGameTechRT {
struct RsRopeComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwRopeAttachmentComponent : public _Script_RsGameTechRT::RsRopeAttachmentComponent {
    private: char pad_328[0xe0]; public:
    _Script_SwGame::SwRopeAttachmentSettings*& get_Settings();
    _Script_RsGameTechRT::RsRopeComponent*& get_PossibleRopeAttachTarget();
    void* get_SwingInputDirection();
    void* get_ClimbInputDirection();
    float& get_SwingInputMagnitude();
    float& get_SwingTimeToImpactAbsolute();
    float& get_SwingTimeToImpactNormalized();
    float& get_ClimbInputMagnitude();
    bool get_ClimbInputActive();
    void set_ClimbInputActive(bool value);
    void* get_SlideToAttachmentLengthState();
    float& get_SlideToAttachmentVelocity();
    void* get_OnStateChangedEvent();
    static _Script_CoreUObject::Class* static_class();
    bool SwingImpactFound();
    void SetupRopeHandAttachments(_Script_RsGameTechRT::RsRopeComponent* Rope, bool leftHand, bool rightHand);
    void SetJumpedOffRope(bool jumpedOffRope);
    void OnGroundTopologyChange(void* prevMode, void* newMode, float Proximity);
    bool IsRopeValidForAttachment(_Script_RsGameTechRT::RsRopeComponent* Rope, bool bIsAutoAttachment);
    bool IsRopeAttachAllowed();
    bool IsInSwingTurningState();
    bool IsInSwingStartedState();
    bool IsInSwingingState();
    bool IsInSwingingForwardState();
    bool IsInSwingingBackwardState();
    bool IsInStrafingState();
    bool IsInClimbTurningState();
    bool IsInClimbingState();
    void* GetState();
    void* GetNextState();
    _Script_CoreUObject::Vector GetMovementInputDirection();
    void* GetHandPosition();
    _Script_CoreUObject::Rotator GetCameraRotation();
    _Script_RsGameTechRT::RsRopeComponent* FindRopeForAttachment(int32_t& outClosestParticleIndex, float& outDistSq);
    void DontDetachRopeOnNextSync();
    void BlueprintOnStateChanged(void* OldState, void* NewState);
    void BlueprintOnPossibleRopeAttachFound(_Script_RsGameTechRT::RsRopeComponent* Rope);
}; // Size: 0x408
#pragma pack(pop)
}
