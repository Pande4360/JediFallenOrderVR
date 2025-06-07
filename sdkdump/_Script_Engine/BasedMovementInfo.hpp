#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct BasedMovementInfo {
    private: char pad_0[0x30]; public:
    _Script_Engine::PrimitiveComponent*& get_MovementBase();
    void* get_BoneName();
    void* get_Location();
    void* get_Rotation();
    bool get_bServerHasBaseComponent();
    void set_bServerHasBaseComponent(bool value);
    bool get_bRelativeRotation();
    void set_bRelativeRotation(bool value);
    bool get_bServerHasVelocity();
    void set_bServerHasVelocity(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
