#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsIKBehaviorDefinition.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsIKBehaviorDefinition_Smoothing : public RsIKBehaviorDefinition {
    private: char pad_30[0x60]; public:
    float& get_EnteringIdleBlendSpeedMultiplier();
    float& get_EnteringIdleTime();
    float& get_SustainedIdleBlendSpeedMultiplier();
    void* get_BlendUp();
    void* get_BlendDown();
    void* get_BlendNearGround();
    void* get_BlendLockedHorizontal();
    void* get_BlendHands();
    void* get_BlendHandsNavigation();
    void* get_NavStatesForNavigationHands();
    float& get_NearGroundThreshold();
    float& get_RotationBlendSpeed();
    float& get_LockedRotationBlendSpeed();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
