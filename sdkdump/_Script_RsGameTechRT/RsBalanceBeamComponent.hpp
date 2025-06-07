#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "RsCharacterNavigationComponent.hpp"
namespace _Script_RsGameTechRT {
struct RsBalanceBeamSettingsDefinition;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_Engine {
struct DamageType;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsBalanceBeamComponent : public RsCharacterNavigationComponent {
    private: char pad_188[0xb68]; public:
    _Script_RsGameTechRT::RsBalanceBeamSettingsDefinition*& get_BalanceBeamDefinition();
    _Script_Engine::AnimMontage*& get_TurnMontage();
    _Script_Engine::AnimMontage*& get_FallMontage();
    static _Script_CoreUObject::Class* static_class();
    bool TryJump();
    bool TryDropFromBeam(bool bAllowAllStates);
    bool TryClimb(bool bClimbToRight, bool& OutBlockedByCollision, bool& OutAllowMovingClimb);
    bool ShouldBeamTransitionOnRightSide();
    void OnTurnMontageBlendingOut(_Script_Engine::AnimMontage* Montage, bool bInterrupted);
    void OnTakeAnyDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser);
    void OnNavStateExited(void* NewState, void* PrevState);
    void OnGripNeededEnded();
    bool IsTurning();
    bool IsOnBalanceBeam();
    bool IsClimbingAnimationPlaying();
    _Script_CoreUObject::Vector GetPlayerFacingDir();
    bool GetIsParallelToBeam();
    float GetGripTimerDuration();
    float GetForwardDistanceOnBeam();
    void* GetCurrentState();
    _Script_CoreUObject::Vector GetBalanceBeamDir();
    _Script_CoreUObject::Vector GetBalanceBeamCenter();
    float GetAngleOfEntry();
    void FallToMonkeyBeam(bool bEjectIfBlocked, bool bSkipGripConfirmation);
    void EndOnMonkeyBeam(void* NextState);
    void EndOnBalanceBeam(void* NextState);
    void EndNotOnBeam(void* NextState);
    void EndFallingToMonkeyBeam(void* NextState);
    void EndClimbingToBalanceBeam(void* NextState);
    bool CanMonkeyBeamUnderCurrentBeam();
    bool CanBalanceBeamWalkOnCurrentBeam();
    void BeginOnMonkeyBeam(void* PreviousState);
    void BeginOnBalanceBeam(void* PreviousState);
    void BeginNotOnBeam(void* PreviousState);
    void BeginFallingToMonkeyBeam(void* PreviousState);
    void BeginClimbingToBalanceBeam(void* PreviousState);
}; // Size: 0xcf0
#pragma pack(pop)
}
