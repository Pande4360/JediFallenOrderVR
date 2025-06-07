#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsPhysicalAnimationMotorDriveConfiguration {
    private: char pad_0[0x18]; public:
    void* get_ConstraintBone1();
    void* get_ConstraintBone2();
    float& get_PositionDrive();
    float& get_VelocityDrive();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
