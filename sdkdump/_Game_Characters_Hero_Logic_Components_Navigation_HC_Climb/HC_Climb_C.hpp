#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\SwClimbComponent.hpp"
namespace _Game_Characters_Hero_Logic_BP_Hero {
struct BP_Hero_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Vector2D;
}
namespace _Script_Engine {
struct BlendSpaceBase;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_RsGameTechRT {
struct RsConstrainedJumpWeights;
}
namespace _Game_Characters_Hero_Logic_AB_Hero {
struct AB_Hero_C;
}
namespace _Game_Characters_Hero_Logic_Components_Navigation_HC_Climb {
#pragma pack(push, 1)
struct HC_Climb_C : public _Script_SwGame::SwClimbComponent {
    private: char pad_3ac0[0x60]; public:
    void* get_UberGraphFrame();
    void* get_Climb_Jump_Input();
    _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& get_BPHero_REF();
    bool get_Initially_on_Ground();
    void set_Initially_on_Ground(bool value);
    void* get_ReachTimer();
    float& get_StoredReachAngle();
    bool get_StoredShouldReach();
    void set_StoredShouldReach(bool value);
    float& get_WaitTimeBeforeReaching();
    float& get_TimeInIdle();
    bool get_ShowingGripInput();
    void set_ShowingGripInput(bool value);
    bool get_bFromLedge();
    void set_bFromLedge(bool value);
    void* get_OnStateChanged();
    float& get_ClimbInputTimeHeld();
    float& get_FrameDeltaTime();
    float& get_30FPSFrameTime();
    static _Script_CoreUObject::Class* static_class();
    bool ShouldUseStamina();
    void GetOutsideCornerTransitionAnimation(bool Going_Left, _Script_Engine::BlendSpaceBase*& Animation);
    void GetInsideCornerTransitionAnimation(bool GoingLeft, _Script_Engine::BlendSpaceBase*& Animation);
    void UpdateTimeInIdle(float TimeInIdle);
    void GetABHero(_Script_Engine::Actor* Actor, _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C*& AB_Hero);
    bool CanRelease();
    void CanReleaseFromCancelButton(void* Action_Name, bool& Can_Release);
    void Can_Climb_Jump(bool& Can_Jump);
    void UpdateGripInputUI(void* PreviousState, void* NewState);
    void Can_Climb_Move(bool& Can_Climb_Move);
    void Jump_Input(_Script_CoreUObject::Vector2D& Pad_Input, _Script_RsGameTechRT::RsConstrainedJumpWeights& Jump_Weights);
    void Climb_Interact_Pressed(void* ActionName, bool& Attached);
    void OnAttached();
    void OnClimbEntryFinished();
    void ReceiveTick(float DeltaSeconds);
    void Notify_Climb_Jump();
    void OnClimbStateChanged(void* previousMode, void* newMode);
    void Climb_Jump();
    void OnClimbingTargetReached();
    void Notify_Corner_Transition(float Duration);
    void Release();
    void OnStaminaMeterEmptied0(void* ResponsibleStaminaName, float TimeUntilForceRegen);
    void Anim_ForcedRelease();
    void Check_Climb_Input(float Delta_Time);
    void BeginIdle();
    void ShowGripInputUI();
    void HideGripInputUI();
    void ClimbAttachedTick(float DeltaTime);
    void Notify_Begin_Pivot();
    void ReceiveBeginPlay();
    void LVL_ForceRelease();
    void ExecuteUbergraph_HC_Climb(int32_t EntryPoint);
    void OnStateChanged__DelegateSignature(void* Climb_State);
}; // Size: 0x3b20
#pragma pack(pop)
}
