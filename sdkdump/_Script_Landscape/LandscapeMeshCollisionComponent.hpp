#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "LandscapeHeightfieldCollisionComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Landscape {
#pragma pack(push, 1)
struct LandscapeMeshCollisionComponent : public LandscapeHeightfieldCollisionComponent {
    private: char pad_c10[0x10]; public:
    void* get_MeshGuid();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc20
#pragma pack(pop)
}
