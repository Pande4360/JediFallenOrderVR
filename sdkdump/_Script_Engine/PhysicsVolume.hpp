#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Volume.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PhysicsVolume : public Volume {
    private: char pad_398[0x10]; public:
    float& get_TerminalVelocity();
    int32_t& get_Priority();
    float& get_FluidFriction();
    bool get_bWaterVolume();
    void set_bWaterVolume(bool value);
    bool get_bPhysicsOnContact();
    void set_bPhysicsOnContact(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3a8
#pragma pack(pop)
}
