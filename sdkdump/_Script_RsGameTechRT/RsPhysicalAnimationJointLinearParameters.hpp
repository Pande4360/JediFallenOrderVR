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
struct RsPhysicalAnimationJointLinearParameters {
    private: char pad_0[0x18]; public:
    void* get_ConstraintBone1();
    void* get_ConstraintBone2();
    bool get_EnableLinearDrive();
    void set_EnableLinearDrive(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
