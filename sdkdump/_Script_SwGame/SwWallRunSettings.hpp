#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_RsGameTechRT {
struct RsHeroStateModifierDefinition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwWallRunSettings : public _Script_Engine::DataAsset {
    private: char pad_30[0x78]; public:
    void* get_WallRunSurfaceAttribute();
    float& get_FacingWallInputThreshold();
    float& get_FacingWallViewThreshold();
    float& get_VelocityDotViewThreshold();
    float& get_InputDotViewThreshold();
    float& get_VelocityAlongWallThreshold();
    float& get_MinVerticalEnterVelocity();
    float& get_MaxVerticalEnterVelocity();
    float& get_MinWallNormalAngleFromVertical();
    float& get_MaxWallNormalAngleFromVertical();
    float& get_MinDistanceFromGround();
    bool get_bAllowMultipleWallRunsOnSameSide();
    void set_bAllowMultipleWallRunsOnSameSide(bool value);
    bool get_bEnableWallVerificationSweep();
    void set_bEnableWallVerificationSweep(bool value);
    float& get_WallVerificationSweepLength();
    bool get_bDebugDrawWallVerificationSweep();
    void set_bDebugDrawWallVerificationSweep(bool value);
    void* get_ForceMeterRow();
    float& get_WallRunTime();
    float& get_WallRunExpiredTime();
    float& get_WallRunProximity();
    float& get_MinInputMagnitude();
    float& get_LostWallGracePeriod();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_WallRunExpiredModifier();
    bool get_WallRunRequiresForce();
    void set_WallRunRequiresForce(bool value);
    bool get_DebugDrawGroundSweep();
    void set_DebugDrawGroundSweep(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa8
#pragma pack(pop)
}
