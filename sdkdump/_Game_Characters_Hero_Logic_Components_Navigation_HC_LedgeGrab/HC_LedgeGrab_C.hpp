#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsLedgeSurveyFrameInfo.hpp"
#include "..\_Script_SwGame\SwActorLedgeComponent.hpp"
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsActorLedgeComponent;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Characters_Hero_Logic_AB_Hero {
struct AB_Hero_C;
}
namespace _Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab {
#pragma pack(push, 1)
struct HC_LedgeGrab_C : public _Script_SwGame::SwActorLedgeComponent {
    private: char pad_49c0[0x70]; public:
    void* get_UberGraphFrame();
    float& get_BigImpactVelocityThreshold();
    bool get_bigImpactLedgeGrab();
    void set_bigImpactLedgeGrab(bool value);
    float& get_IdlePullUpRange();
    float& get_ShimmyRange();
    float& get_EntryPullupRange();
    float& get_IdleMaxPullupAngle();
    float& get_LedgeTickDt();
    _Script_Engine::AnimMontage*& get_CornerMontage();
    float& get_EntryMaxPullupAngle();
    float& get_LedgePullupAngle();
    _Script_Engine::AnimMontage*& get_leapMontage();
    void* get_storeShimmyDir();
    float& get_EntryMinimumAngleForSpecialPullup();
    float& get_BackJumpSideRange();
    float& get_StoredReachAngle();
    float& get_WaitTimeBeforeReaching();
    void* get_ReachTimer();
    void* get_StoredReachMode();
    void* get_FramePadInputDirection();
    bool get_canLedgeJumpOff();
    void set_canLedgeJumpOff(bool value);
    bool get_bFromJump();
    void set_bFromJump(bool value);
    float& get_ShimmyInputTimeHeld();
    float& get_PullupInputTimeHeld();
    float& get_30FPSFrameTime();
    static _Script_CoreUObject::Class* static_class();
    void LedgeGrabAudio();
    bool ShouldUseStamina();
    void GetPlayerControllerDirection(_Script_CoreUObject::Vector& ControllerDirection, float& Controller_Magnitude);
    bool CanRelease();
    void GetABHero(_Script_Engine::Actor* Actor, _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C*& AB_Hero);
    void DoForcePullEntry();
    void CanForcePullEntry(void* ActionName, bool& Can_Do_Force_Pull_Entry);
    void DoMantle();
    void CanMantle(void* ActionName, bool& Can_Mantle);
    void CanReleaseFromCancelButton(void* Action_Name, bool& Can_Perform_Action);
    void UpdateGripInputUI(void* previousMode, void* newMode);
    void CategorizePadInput(void*& PadInputDirection);
    void GetLedgePullupRange(float& Ledge_Pullup_Range);
    void GetLedgeMaxPullupAngle(float& MaxPullupAngle);
    void GetLedgePullupAngle(float& pullupAngle);
    void ShimmyAllowed(bool& Can_Shimmy);
    void ChooseLedgeEntryType(_Script_RsGameTechRT::RsLedgeSurveyFrameInfo Ledge_Survey_Info, void*& Ledge_Entry_Type);
    void OnShimmyTargetReached(void* Target);
    void Check_Movement_Input();
    void ShimmyJump(void* Direction, bool Vertical, float Dist);
    void LedgeJump();
    void UpdateShimmyAnimationState(void* Shimmy_Direction);
    void NotifyShimmyTransition(float Duration);
    void ShimmyCornerTransition(bool inside, void* Direction);
    void OnLedgeEntryFinished();
    void ExitShimmy();
    void Anim_OnReturnToIdleFromPullup();
    void EnterShimmy(void* ShimmyDirection);
    void Start_Jump_Off_Ledge(void* Jump_Direction);
    void Jump_Off_Ledge_Impulse();
    void Anim_OnLedgePullup();
    void DisableLedgeGrab();
    void Reset_Animation_State();
    void Ledge_Pullup_Complete();
    void OnLedge_Event(_Script_RsGameTechRT::RsActorLedgeComponent* LedgeComponent);
    void Check_Shimmy_Jump(void* Shimmy_Direction);
    void ReceiveBeginPlay();
    void OnTransitionOutComplete();
    void OnLedgeReleased();
    void OnModeChanged(void* previousMode, void* newMode);
    void OnLedgeTick(float Dt);
    void OnFoundLedge(_Script_RsGameTechRT::RsLedgeSurveyFrameInfo& frameSurveyInfo);
    void LedgeAnim_Forced_Release();
    void OnStaminaMeterEmptied(void* ResponsibleStaminaName, float TimeUntilStaminaRegen);
    void StartPullup();
    void AttachRumble(void* EntryType);
    void ImpactRumble();
    void ReceiveTick(float DeltaSeconds);
    void NotifyShimmyJump();
    void Anim_OnPullupCommitted();
    void SetUpLedgeGrab(void* LedgeEntryType);
    void StopPullup();
    void Release();
    void ExecuteUbergraph_HC_LedgeGrab(int32_t EntryPoint);
}; // Size: 0x4a30
#pragma pack(pop)
}
