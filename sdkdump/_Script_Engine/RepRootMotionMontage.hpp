#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RepRootMotionMontage {
    private: char pad_0[0x158]; public:
    bool get_bIsActive();
    void set_bIsActive(bool value);
    _Script_Engine::AnimMontage*& get_AnimMontage();
    float& get_Position();
    void* get_Location();
    void* get_Rotation();
    _Script_Engine::PrimitiveComponent*& get_MovementBase();
    void* get_MovementBaseBoneName();
    bool get_bRelativePosition();
    void set_bRelativePosition(bool value);
    bool get_bRelativeRotation();
    void set_bRelativeRotation(bool value);
    void* get_AuthoritativeRootMotion();
    void* get_Acceleration();
    void* get_LinearVelocity();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x158
#pragma pack(pop)
}
