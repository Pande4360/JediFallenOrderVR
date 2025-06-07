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
struct RsDamageFromPhysicsCollisionVelocityLimits {
    private: char pad_0[0xc]; public:
    bool get_UseVelocityLimits();
    void set_UseVelocityLimits(bool value);
    float& get_MinimumVelocity();
    float& get_MaximumVelocity();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
