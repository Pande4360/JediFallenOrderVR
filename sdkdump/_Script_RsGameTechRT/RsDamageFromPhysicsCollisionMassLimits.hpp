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
struct RsDamageFromPhysicsCollisionMassLimits {
    private: char pad_0[0xc]; public:
    bool get_UseMassLimits();
    void set_UseMassLimits(bool value);
    float& get_MinimumMass();
    float& get_MaximumMass();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
