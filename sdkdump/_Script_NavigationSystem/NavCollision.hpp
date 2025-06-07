#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\NavCollisionBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_NavigationSystem {
#pragma pack(push, 1)
struct NavCollision : public _Script_Engine::NavCollisionBase {
    private: char pad_70[0x68]; public:
    void* get_CylinderCollision();
    void* get_BoxCollision();
    void* get_AreaClass();
    bool get_bGatherConvexGeometry();
    void set_bGatherConvexGeometry(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd8
#pragma pack(pop)
}
