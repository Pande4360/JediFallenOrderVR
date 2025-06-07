#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsHeroTopologyComponent.hpp"
namespace _Game_Characters_Hero_Logic_BP_Hero {
struct BP_Hero_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology {
#pragma pack(push, 1)
struct HC_ProcessTopology_C : public _Script_RsGameTechRT::RsHeroTopologyComponent {
    private: char pad_180[0x88]; public:
    void* get_UberGraphFrame();
    _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& get_BPHero_REF();
    float& get_TimeSinceGround();
    float& get_timeSinceGroundTolerance();
    float& get_timeLeftGround();
    void* get_WallState();
    void* get_WallDirection();
    float& get_facingWallStickTolerance();
    void* get_WallNormal();
    float& get_WallPerchMinUpwardVelocity();
    float& get_WallPerchMaxUpwardVelocity();
    float& get_FacingWallCameraTolerance();
    float& get_WallPerchMinAngle();
    float& get_WallPerchMaxAngle();
    bool get_MustHaveVelocityToEnterWall();
    void set_MustHaveVelocityToEnterWall(bool value);
    void* get_Wall_Camera();
    void* get_OnContact();
    void* get_OnProximity();
    float& get_Player_Location_Log_Elapsed_Time();
    float& get_Player_Location_Log_Interval();
    bool get_PreventGround();
    void set_PreventGround(bool value);
    static _Script_CoreUObject::Class* static_class();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ForceAirState();
    void PreventGroundForDuration(float Duration);
    void ExecuteUbergraph_HC_ProcessTopology(int32_t EntryPoint);
    void OnProximity__DelegateSignature();
    void OnContact__DelegateSignature();
}; // Size: 0x208
#pragma pack(pop)
}
