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
struct RigidBodyContactInfo {
    private: char pad_0[0x34]; public:
    void* get_ContactPosition();
    void* get_ContactNormal();
    float& get_ContactPenetration();
    void* get_PhysMaterial();
    float& get_ProjectedVelocityOnBody0();
    float& get_ProjectedVelocityOnBody1();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x34
#pragma pack(pop)
}
