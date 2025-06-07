#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PointLightComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SpotLightComponent : public PointLightComponent {
    private: char pad_450[0x20]; public:
    float& get_InnerConeAngle();
    float& get_OuterConeAngle();
    float& get_LightShaftConeAngle();
    float& get_TruncationDistance();
    float& get_TransitionLength();
    static _Script_CoreUObject::Class* static_class();
    void SetTruncationDistance(float NewTruncationDistance);
    void SetTransitionLength(float NewTransitionLength);
    void SetOuterConeAngle(float NewOuterConeAngle);
    void SetInnerConeAngle(float NewInnerConeAngle);
}; // Size: 0x470
#pragma pack(pop)
}
