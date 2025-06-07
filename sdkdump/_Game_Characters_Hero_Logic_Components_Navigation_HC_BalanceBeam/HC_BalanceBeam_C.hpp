#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\SwBalanceBeamComponent.hpp"
namespace _Game_Characters_Hero_Logic_BP_SwPlayerController {
struct BP_SwPlayerController_C;
}
namespace _Game_Characters_Hero_Logic_AB_Hero {
struct AB_Hero_C;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam {
#pragma pack(push, 1)
struct HC_BalanceBeam_C : public _Script_SwGame::SwBalanceBeamComponent {
    private: char pad_cf8[0x28]; public:
    void* get_UberGraphFrame();
    bool get_monkeyTransition();
    void set_monkeyTransition(bool value);
    bool get_beamClimbing();
    void set_beamClimbing(bool value);
    _Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C*& get_BP_SwPlayerController();
    bool get_RightOfBeam();
    void set_RightOfBeam(bool value);
    bool get_BeamClimbCamera();
    void set_BeamClimbCamera(bool value);
    bool get_bIsSlowMovement();
    void set_bIsSlowMovement(bool value);
    _Script_Engine::AnimMontage*& get_ClimbingMontage();
    static _Script_CoreUObject::Class* static_class();
    void GetABHero(_Script_Engine::Actor* Actor, _Game_Characters_Hero_Logic_AB_Hero::AB_Hero_C*& AB_Hero);
    void IsParallelLanding(bool& IsParallel);
    void GetIsSlow(bool& Slow);
    void SetIsSlow(bool bSlow);
    void DropFromBeam(bool bAllowAllStates, bool& Dropped);
    void StopMontage(_Script_Engine::AnimMontage* Montage);
    bool IsClimbingAnimationPlaying();
    void EndNotOnBeam(void* NextState);
    void BeginClimbingToBalanceBeam(void* PreviousState);
    void BeginNotOnBeam(void* PreviousState);
    void EndOnMonkeyBeam(void* NextState);
    void ReceiveBeginPlay();
    void BeginFallingToMonkeyBeam(void* PreviousState);
    void BeginOnMonkeyBeam(void* PreviousState);
    void AlignCameraAndAim();
    void CancelMonkeyBeam();
    void BalanceBeamJump();
    void MonkeyBeamClimb();
    void EndClimbingToBalanceBeam(void* NextState);
    void EndFallingToMonkeyBeam(void* NextState);
    void BeginOnBalanceBeam(void* PreviousState);
    void Action_BalanceBeamCancel();
    void OnGripNeededEnded();
    void ExecuteUbergraph_HC_BalanceBeam(int32_t EntryPoint);
}; // Size: 0xd20
#pragma pack(pop)
}
