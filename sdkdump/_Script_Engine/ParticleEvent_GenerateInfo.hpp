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
struct ParticleEvent_GenerateInfo {
    private: char pad_0[0x28]; public:
    void* get_Type();
    int32_t& get_Frequency();
    int32_t& get_ParticleFrequency();
    bool get_FirstTimeOnly();
    void set_FirstTimeOnly(bool value);
    bool get_LastTimeOnly();
    void set_LastTimeOnly(bool value);
    bool get_UseReflectedImpactVector();
    void set_UseReflectedImpactVector(bool value);
    bool get_bUseOrbitOffset();
    void set_bUseOrbitOffset(bool value);
    void* get_CustomName();
    void* get_ParticleModuleEventsToSendToGame();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
