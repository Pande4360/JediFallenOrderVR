#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_Engine {
struct Skeleton;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsIKCharacterDefinition : public _Script_Engine::DataAsset {
    private: char pad_30[0xc8]; public:
    bool get_bEnabled();
    void set_bEnabled(bool value);
    bool get_bRotationEnabled();
    void set_bRotationEnabled(bool value);
    void* get_DisabledNavStates();
    void* get_HangingNavStates();
    void* get_NoHipOffsetNavStates();
    bool get_bOffsetEnabled();
    void set_bOffsetEnabled(bool value);
    float& get_ActiveBlendInTime();
    float& get_ActiveBlendOutTime();
    float& get_MinLegBendAngleIdle();
    float& get_MinLegBendAngleMoving();
    float& get_MinLegBendAngleBlendTime();
    float& get_HipsOffsetBlendSpeed();
    float& get_HipsOffsetBlendSpeedHanging();
    float& get_MaxHipsDistFromLowestFoot();
    float& get_HangingMaxHipsDistFromFurthestHand();
    float& get_MaxFootDeltaDiff();
    float& get_MaxDistanceFactorThreshold();
    void* get_HipBone();
    void* get_IkBones();
    void* get_Behaviors();
    _Script_Engine::Skeleton*& get_Skeleton();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf8
#pragma pack(pop)
}
