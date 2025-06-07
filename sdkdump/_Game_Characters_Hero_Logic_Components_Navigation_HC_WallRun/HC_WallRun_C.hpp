#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_SwGame\SwWallRunComponent.hpp"
namespace _Game_Characters_Hero_Logic_BP_Hero {
struct BP_Hero_C;
}
namespace _Script_RsGameTechRT {
struct RsHeroStateModifierDefinition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_Hero_Logic_Components_Navigation_HC_WallRun {
#pragma pack(push, 1)
struct HC_WallRun_C : public _Script_SwGame::SwWallRunComponent {
    private: char pad_1d0[0x30]; public:
    void* get_UberGraphFrame();
    _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& get_HeroRef();
    void* get_CanWallJumpTimer();
    void* get_WallJumpGracePeriodTimer();
    float& get_TimeToCanWallJump();
    float& get_WallJumpGracePeriod();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_WallRunFallModifier();
    static _Script_CoreUObject::Class* static_class();
    void StartWallJumpGracePeriod();
    void RemoveCanWallJump();
    void GetCameraFocusDirection(_Script_CoreUObject::Vector& FocusDirection);
    _Script_CoreUObject::Vector GetViewDirection0();
    void EndWallRunBP(void* Reason);
    void SetupWallRun();
    bool IsWallRunAllowed0();
    void ReceiveBeginPlay();
    void OnWallRunExpiredEnd0();
    void ReceiveTick(float DeltaSeconds);
    void OnWallRunLost0(void* Reason);
    void Action_WallRunCancel();
    void OnWallRunFound0(void* wallOrientation);
    void OnWallRunExpiredBegin0();
    void OnCanWallJumpTimer();
    void OnWallJumpGracePeriodTimer();
    void ExecuteUbergraph_HC_WallRun(int32_t EntryPoint);
}; // Size: 0x200
#pragma pack(pop)
}
