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
struct RepMovement {
    private: char pad_0[0x34]; public:
    void* get_LinearVelocity();
    void* get_AngularVelocity();
    void* get_Location();
    void* get_Rotation();
    bool get_bSimulatedPhysicSleep();
    void set_bSimulatedPhysicSleep(bool value);
    bool get_bRepPhysics();
    void set_bRepPhysics(bool value);
    void* get_LocationQuantizationLevel();
    void* get_VelocityQuantizationLevel();
    void* get_RotationQuantizationLevel();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x34
#pragma pack(pop)
}
