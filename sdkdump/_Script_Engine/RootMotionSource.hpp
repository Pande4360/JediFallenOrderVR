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
struct RootMotionSource {
    private: char pad_0[0xa0]; public:
    void* get_Priority();
    void* get_LocalID();
    void* get_AccumulateMode();
    void* get_InstanceName();
    float& get_StartTime();
    float& get_CurrentTime();
    float& get_PreviousTime();
    float& get_Duration();
    void* get_Status();
    void* get_Settings();
    bool get_bInLocalSpace();
    void set_bInLocalSpace(bool value);
    void* get_RootMotionParams();
    void* get_FinishVelocityParams();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
