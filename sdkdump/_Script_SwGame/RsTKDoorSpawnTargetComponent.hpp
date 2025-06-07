#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsSpawnTargetComponent.hpp"
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct RsTKDoorSpawnTargetComponent : public RsSpawnTargetComponent {
    private: char pad_2d0[0x10]; public:
    _Script_Engine::StaticMesh*& get_StaticMesh();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2e0
#pragma pack(pop)
}
