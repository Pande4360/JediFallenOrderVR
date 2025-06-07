#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SwAICharacter.hpp"
namespace _Script_RsGameTechRT {
struct RsPhysicalAnimationProfile;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAIBuddyDroid : public SwAICharacter {
    private: char pad_29d0[0x110]; public:
    void* get_AttachSocketNames();
    float& get_AttachLerpTotalTime();
    float& get_DetachLerpTotalTime();
    void* get_DetachTargetLocationOffset();
    float& get_LowProfileSocketWeight();
    _Script_RsGameTechRT::RsPhysicalAnimationProfile*& get_PhysicalAnimationProfileIdleDefault();
    static _Script_CoreUObject::Class* static_class();
    void UnlockAttachPoint();
    bool TryLockAttachPoint();
    void TryDetachFromHero();
    void TryAttachToHero(bool bImmediateAttach, bool bPerformAttachFromWall);
    void SkipAttachingOnCinematicEnd();
    bool ShouldPlayAttachAnimation();
    bool ShouldJumpToPOIWhenDetaching();
    void SetZiplineMoveDirection(void* InMoveDirection);
    void SetPreferredMoveMode(void* MoveMode);
    void SetOverlapPrimitive(_Script_Engine::PrimitiveComponent* InOverlapPrimitive);
    bool SetCurrentAttachPoint(void* AttachPoint);
    void SetBuddyState(void* State);
    void OnLightTurnedOn();
    void OnLightTurnedOff();
    void OnDetachedFromHero();
    void OnBeginAttachToHero();
    void OnAttachedToHero();
    bool IsPendingAttachAfterCinematic();
    bool IsHeroInFlashlightZone();
    void* GetZiplineMoveDirection();
    void* GetPreferredMoveMode();
    void* GetCurrentAttachPoint();
    void* GetClosestAttachPoint(_Script_CoreUObject::Vector& Location, float& OutDistance);
    void* GetBuddyState();
    void ExitZipline();
    void EnterZipline();
    void Dismount();
    void CheckOverlappingWithHero();
    void AttachToHeroPoint();
    void AttachToHero(bool bSetNewAttachPoint, void* NewAttachPoint);
}; // Size: 0x2ae0
#pragma pack(pop)
}
