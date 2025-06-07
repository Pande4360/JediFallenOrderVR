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
struct SwDirectionAssistData {
    private: char pad_0[0x18]; public:
    bool get_bShouldOverrideDirectionAssistData();
    void set_bShouldOverrideDirectionAssistData(bool value);
    float& get_HalfAngle();
    float& get_Radius();
    float& get_StartRadius();
    float& get_ProximityWeight();
    float& get_OffscreenPenalty();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
