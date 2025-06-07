#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwTelekinesisGameplayVictimData {
    private: char pad_0[0x120]; public:
    void* get_ForceTelekinesisAnimation();
    void* get_ForceTelekinesisLandingAnimation();
    void* get_ForceTelekinesisSocket();
    void* get_ForceTelekinesisOffset();
    bool get_bShouldUse180DegreeOrientationSnapping();
    void set_bShouldUse180DegreeOrientationSnapping(bool value);
    bool get_bIsAxisConstrained();
    void set_bIsAxisConstrained(bool value);
    float& get_MaxAxisConstraintDistanceFromVictim();
    float& get_MaxAxisConstraintDistanceFromUser();
    bool get_bShouldOverrideMovementControl();
    void set_bShouldOverrideMovementControl(bool value);
    void* get_ControlData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x120
#pragma pack(pop)
}
