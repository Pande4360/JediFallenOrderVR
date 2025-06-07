#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SceneCaptureComponent.hpp"
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PlanarReflectionComponent : public SceneCaptureComponent {
    private: char pad_390[0xe0]; public:
    _Script_Engine::BoxComponent*& get_PreviewBox();
    float& get_NormalDistortionStrength();
    float& get_PrefilterRoughness();
    float& get_PrefilterRoughnessDistance();
    int32_t& get_ScreenPercentage();
    float& get_ExtraFOV();
    float& get_DistanceFromPlaneFadeStart();
    float& get_DistanceFromPlaneFadeEnd();
    float& get_DistanceFromPlaneFadeoutStart();
    float& get_DistanceFromPlaneFadeoutEnd();
    float& get_AngleFromPlaneFadeStart();
    float& get_AngleFromPlaneFadeEnd();
    bool get_bRenderSceneTwoSided();
    void set_bRenderSceneTwoSided(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x470
#pragma pack(pop)
}
