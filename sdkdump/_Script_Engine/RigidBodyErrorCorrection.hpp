#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RigidBodyErrorCorrection {
    private: char pad_0[0x34]; public:
    float& get_PingExtrapolation();
    float& get_PingLimit();
    float& get_ErrorPerLinearDifference();
    float& get_ErrorPerAngularDifference();
    float& get_MaxRestoredStateError();
    float& get_MaxLinearHardSnapDistance();
    float& get_PositionLerp();
    float& get_AngleLerp();
    float& get_LinearVelocityCoefficient();
    float& get_AngularVelocityCoefficient();
    float& get_ErrorAccumulationSeconds();
    float& get_ErrorAccumulationDistanceSq();
    float& get_ErrorAccumulationSimilarity();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x34
#pragma pack(pop)
}
