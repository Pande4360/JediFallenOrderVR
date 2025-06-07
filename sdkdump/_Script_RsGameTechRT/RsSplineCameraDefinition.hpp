#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsSplineCameraDefinition : public _Script_Engine::DataAsset {
    private: char pad_30[0x400]; public:
    bool get_bUseOverrideTrackingTime();
    void set_bUseOverrideTrackingTime(bool value);
    float& get_OverrideTrackingTime();
    float& get_DeviationTracking();
    float& get_CameraLookMaxYaw();
    float& get_CameraLookMaxPitch();
    float& get_MovementOffsetHorizontal();
    float& get_MovementOffsetVertical();
    float& get_FOVScale();
    float& get_TransitionTraceRadius();
    float& get_TickRate();
    bool get_bContainsValidData();
    void set_bContainsValidData(bool value);
    void* get_PlayerTrajectory();
    void* get_CameraLocationAxisCurves();
    void* get_CameraRotationAxisCurves();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x430
#pragma pack(pop)
}
