#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\BTTaskNode.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsBTTask_TurnTo : public _Script_AIModule::BTTaskNode {
    private: char pad_70[0x68]; public:
    void* get_TurnToLocationKey();
    bool get_bTrackLocation();
    void set_bTrackLocation(bool value);
    bool get_bUseTurnToLocation();
    void set_bUseTurnToLocation(bool value);
    void* get_TurnToRotationKey();
    void* get_MotionParmName();
    float& get_CosOfFacingTolerance();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd8
#pragma pack(pop)
}
