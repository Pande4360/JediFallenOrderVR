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
struct RsFrameOfReferenceParm {
    private: char pad_0[0x34]; public:
    void* get_PositionTransference();
    void* get_PositionTransferenceThreshold();
    void* get_RotationAxisTarget();
    float& get_RotationTransference();
    void* get_RotationAxis();
    float& get_KeepActiveTimeOut();
    bool get_KeepActiveGradual();
    void set_KeepActiveGradual(bool value);
    bool get_UseElevatorCollision();
    void set_UseElevatorCollision(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x34
#pragma pack(pop)
}
