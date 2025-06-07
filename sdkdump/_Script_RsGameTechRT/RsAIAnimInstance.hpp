#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsGameAnimInstance.hpp"
namespace _Script_Engine {
struct AnimSequence;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAIAnimInstance : public RsGameAnimInstance {
    private: char pad_1110[0xe0]; public:
    float& get_TransitionRelativeAngle();
    _Script_Engine::AnimSequence*& get_StartMovingAnimation();
    _Script_Engine::AnimSequence*& get_StopMovingAnimation();
    float& get_ArrivingDistanceRange();
    bool get_bMoveTransitionEnabledPerClass();
    void set_bMoveTransitionEnabledPerClass(bool value);
    float& get_TransitionCombatRadius();
    void* get_MoveTransitionConditions();
    bool get_bIsAttacking();
    void set_bIsAttacking(bool value);
    bool get_bIsCombatPose();
    void set_bIsCombatPose(bool value);
    bool get_bIsFocusTracking();
    void set_bIsFocusTracking(bool value);
    bool get_bIsAiming();
    void set_bIsAiming(bool value);
    bool get_bIsMoving();
    void set_bIsMoving(bool value);
    float& get_FocusYaw();
    float& get_FocusPitch();
    float& get_AimYaw();
    float& get_AimPitch();
    void* get_AwarenessReactionState();
    static _Script_CoreUObject::Class* static_class();
    void SetPlayingInAirAnimation(bool IsPlaying);
    void SetAllowMoveTransition(bool bUseMoveTransition);
    bool IsPlayingInAirAnimation();
    bool GetAllowMoveTransition();
}; // Size: 0x11f0
#pragma pack(pop)
}
