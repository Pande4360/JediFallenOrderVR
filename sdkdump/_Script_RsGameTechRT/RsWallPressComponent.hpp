#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "RsCharacterNavigationComponent.hpp"
namespace _Script_RsGameTechRT {
struct RsWallPressSettings;
}
namespace _Script_RsTechRT {
struct RsJSONTweaksBook;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsWallPressComponent : public RsCharacterNavigationComponent {
    private: char pad_188[0x2818]; public:
    _Script_RsGameTechRT::RsWallPressSettings*& get_m_settings();
    void* get_TweakFile();
    _Script_RsTechRT::RsJSONTweaksBook*& get_Tweaks();
    static _Script_CoreUObject::Class* static_class();
    void WallPressEntryComplete();
    void WalkOffOntoGround(void* MovementDirection);
    bool ValidateProximityForActiveSurvey(bool useAirProximityBox);
    void UpdateReachState(void* MovementDirection);
    bool TriggerJumpOff(void* JumpDirection);
    void StartWallJump(float Speed);
    void StartSidling(float Speed);
    bool ShouldAttachToActiveSurvey();
    void ReleaseWallPress();
    void OnNavStateChanged(void* NewState, void* PrevState);
    void OnExitWallPress();
    void OnEnterWallPress();
    bool IsWallJumping();
    bool IsSidling();
    bool IsInState(void* State);
    bool IsInPlaceJumping();
    bool IsAttached();
    void InPlaceJumpComplete();
    bool HasLedgeToDropTo();
    bool HasGroundToWalkOffOnto(void* MovementDirection);
    void* GetCurrentState();
    _Script_CoreUObject::Vector GetAttachedWallPressFaceNormal();
    _Script_CoreUObject::Vector GetAttachedWallPressAxis();
    bool DoWallJumpSurvey(void* MovementDirection);
    bool DoSidleSurvey(void* MovementDirection);
    void DoInPlaceJump(float jumpHeight);
    void BP_WallPressTick(float Dt);
    void ApplyJumpOffImpulse();
}; // Size: 0x29a0
#pragma pack(pop)
}
